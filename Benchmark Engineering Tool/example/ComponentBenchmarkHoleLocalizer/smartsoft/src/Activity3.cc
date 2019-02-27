#include <Activity3.hh>
#include <ComponentBenchmarkHoleLocalizer.hh>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

// Get current Directory on Linux
#include <stdio.h>  /* defines FILENAME_MAX */
// #define WINDOWS  /* uncomment this line to use it for windows.*/
#include <unistd.h>
#define GetCurrentDir getcwd
#include <iostream>

//---
#include <ecorecpp.hpp>
#include <standardized_problem.hpp>
#include <fstream>
#include <memory> // for std::auto_ptr
#include <assert.h>

using namespace standardized_problem;
using namespace ecore;

//---
static ofstream logger;

// ScenarioDef->Tuple->Scenario,PerfMeasure
static std::vector<std::vector<int> > scenarioErrors; // List of PerfMeasures per scenario
static std::vector<CommHoleLocalizerBenchmark::QueryResult> listOfTuples;
static std::vector<int> scenarioDefs = { 1, 2 };
static std::vector<std::vector<int>> scenarioDefsTuples = { { 1, 2 }, { 1 } };
//------- Standardized Problem dependencies
#include <cassert>
#include <unordered_map>
#include <string>

#include <ecorecpp/resource/ResourceSet.hpp>
#include <ecorecpp/resource/URIConverter.hpp>
#include <ecorecpp/resource/XMLResource.hpp>
#include <ecorecpp/MetaModelRepository.hpp>

#include <ecore.hpp>
#include <ResourceTests.hpp>

// -*- mode: c++; c-basic-offset: 4; c-basic-style: bsd; -*-
#include <ecorecpp.hpp>
#include <standardized_problem.hpp>
#include <basicAttributes.hpp>
#include <fstream>
#include <memory> // for std::auto_ptr
#include <assert.h>

#include <cassert>
#include <unordered_map>
#include <string>

#include <ecore.hpp>
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <typeinfo>
//---

Activity3::Activity3(SmartACE::SmartComponent *comp) :
		Activity3Core(comp) {
	std::cout << "constructor Activity3\n";
}
Activity3::~Activity3() {
	std::cout << "destructor Activity3\n";
}

int Activity3::on_entry() {
	Smart::StatusCode status;
	//--------Benchmark read xml
	::ecorecpp::MetaModelRepository::_instance()->load(
			::basicAttributes::BasicAttributesPackage::_instance());

	::ecorecpp::MetaModelRepository::_instance()->load(
			::standardized_problem::Standardized_problemPackage::_instance());

	//auto mmr = ::ecorecpp::MetaModelRepository::_instance();
	//mmr->load(::basicAttributes::BasicAttributesPackage::_instance());
	//mmr->load(::standardized_problem::Standardized_problemPackage::_instance());

	const QUrl file = QUrl::fromLocalFile("/home/smartsoft/workspaces/project-1/ComponentBenchmarkHoleLocalizer/smartsoft/src/screw_hole_localizer.standardized_problem");
	::ecorecpp::resource::ResourceSet rSet;
	rSet.getResourceFactoryRegistry()->getProtocolToFactoryMap()[file.scheme().toStdString()].reset(
			new ::ecorecpp::resource::XMLResourceFactory());
	auto resource = rSet.createResource(file);
	resource->load();

	auto project = ::ecore::as<::standardized_problem::StandardizedProblem>(resource->getContents()->get(0));
	std::cout << project->getLabel()<<"\n";
	std::cout << "--------------------------------------File loaded successfully: ";

	//----

	// Initialize Logger, Date_BenchmarkExperimentName

	// Get current Directory
	char buff[FILENAME_MAX];
	GetCurrentDir(buff, FILENAME_MAX);
	std::string current_working_dir(buff);
	std::cout << "Current Directory is: " << current_working_dir << std::endl;
//-- end of get Current directory
	logger.open("/home/smartsoft/Desktop/Database/sc_loc_bm_exp.txt",
			ios::trunc);
	// Query Database
	logger << "# Querying Database" << std::endl;

	listOfTuples.resize(scenarioDefs.size());
	// Query all ScenarioDef
	for (int i = 0; i < scenarioDefs.size(); i++) {
		for (int j = 0; j < scenarioDefsTuples[i].size(); j++) {
			logger << "> Query for scenarioDef" << i << ".tuple" << j
					<< std::endl;
			CommHoleLocalizerBenchmark::QueryResult listOfScenarios;
			do {

				//create tuple for selected scenario definition
				CommHoleLocalizerBenchmark::Query query;
				query.setValue(i + i * 1 + j);

				//send query to database and receive list of scenarios (tuple query result)
				status = COMP-> sendDatabaseReq -> query(query, listOfScenarios);

				std::cout << status << std::endl;
				usleep(100000);
			} while (status != Smart::SMART_OK);
			listOfTuples[i] = listOfScenarios;
		}
	}
	return 0;
}
int Activity3::on_execute() {

	Smart::StatusCode status;
	logger << "# start experiment execution" << std::endl;
	scenarioErrors.resize(scenarioDefs.size());
	// Execute all ScenarioDef->Tuple->Scenarios
	for (int i = 0; i < scenarioDefs.size(); i++) {
		for (int j = 0; j < scenarioDefsTuples[i].size(); j++) {
			logger << "> starting scenarios for scenarioDef" << i << ".tuple"
					<< j << std::endl;
			CommHoleLocalizerBenchmark::QueryResult listOfScenarios;
			listOfScenarios = listOfTuples[j];
			int databaseSize = listOfScenarios.getDirectoriesListSize();

			scenarioErrors[j].resize(databaseSize);
			for (int i = 0; i < databaseSize; i++) {

				CommHoleLocalizer::Holes ans;
				CommHoleLocalizer::ImageDir req;
				std::string filePath;
				filePath =
						listOfScenarios.getDirectoriesListElemAtPos(i).getDirectory();
				req.setDirectory(filePath);
				logger << ">> sending image " << std::endl;

//				do {//send until success, due to unreliable communication in virtual machine
				status = COMP-> sendImageReq -> query(req, ans);

				std::cout << status << std::endl;

//					usleep(10000);
//				}while (status != Smart::SMART_OK);

				int listSize = ans.getListSize();
				logger << ">> received number of holes in image " << i + 1
						<< " is " << listSize << std::endl;
				std::cout << "received number of holes in image " << i + 1
						<< " is " << listSize << std::endl;
				logger << ">> Performance measure: error in number of holes is "
						<< abs(listSize - listOfScenarios.getGtdElemAtPos(i))
						<< std::endl;
				scenarioErrors[j][i] = abs(
						listSize - listOfScenarios.getGtdElemAtPos(i));
			}
		}
	}
	Activity3::finish();
	exit(1); // it is possible to return != 0 (e.g. when the task detects errors), then the outer loop breaks and the task stops
	return 0;
}
void Activity3::finish() {

	logger << "# calculating performance score " << std::endl;
	int sum = 0;
	double average = 0;
	int count = 0;
	// Output Performance Measure
	for (int i = 0; i < scenarioErrors.size(); i++) {
		for (int j = 0; j < scenarioErrors[i].size(); j++) {
			sum = sum + scenarioErrors[i][j];
			count++;
		}
	}
	average = sum / count;
	logger << "average error score = " << average << std::endl;
	logger.close();
}
int Activity3::on_exit() {
	// use this method to clean-up resources which are initialized in on_entry() and needs to be freed before the on_execute() can be called again
	return 0;
}

