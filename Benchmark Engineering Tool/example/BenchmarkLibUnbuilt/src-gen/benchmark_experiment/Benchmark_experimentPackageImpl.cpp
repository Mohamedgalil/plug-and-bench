// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <benchmark_experiment/Benchmark_experimentPackage.hpp>
#include <benchmark_experiment/Benchmark_experimentFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <ecore/EcorePackage.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/StandardizedProblem.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>

using namespace ::benchmark_experiment;

Benchmark_experimentPackage::Benchmark_experimentPackage()
{

    // Feature definitions of Scenario
    m_Scenario__testData = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Scenario__groundTruthData = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Scenario__recievedData = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Scenario__perfvalue = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Scenario__tuple = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of BenchmarkExperiment
    m_BenchmarkExperiment__scenario = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_BenchmarkExperiment__standardizedProblem = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of PerfValue
    m_PerfValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_PerfValue__weightedPerfMeasure = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void Benchmark_experimentPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = Benchmark_experimentFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // Scenario
    m_ScenarioEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ScenarioEClass->setClassifierID(SCENARIO);
    m_ScenarioEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ScenarioEClass);
    // m_Scenario__testData has already been allocated above
    m_Scenario__testData->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA);
    m_ScenarioEClass->getEStructuralFeatures().push_back(m_Scenario__testData);
    // m_Scenario__groundTruthData has already been allocated above
    m_Scenario__groundTruthData->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA);
    m_ScenarioEClass->getEStructuralFeatures().push_back(
            m_Scenario__groundTruthData);
    // m_Scenario__recievedData has already been allocated above
    m_Scenario__recievedData->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA);
    m_ScenarioEClass->getEStructuralFeatures().push_back(
            m_Scenario__recievedData);
    // m_Scenario__perfvalue has already been allocated above
    m_Scenario__perfvalue->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE);
    m_ScenarioEClass->getEStructuralFeatures().push_back(m_Scenario__perfvalue);
    // m_Scenario__tuple has already been allocated above
    m_Scenario__tuple->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE);
    m_ScenarioEClass->getEStructuralFeatures().push_back(m_Scenario__tuple);

    // BenchmarkExperiment
    m_BenchmarkExperimentEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BenchmarkExperimentEClass->setClassifierID(BENCHMARKEXPERIMENT);
    m_BenchmarkExperimentEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BenchmarkExperimentEClass);
    // m_BenchmarkExperiment__scenario has already been allocated above
    m_BenchmarkExperiment__scenario->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO);
    m_BenchmarkExperimentEClass->getEStructuralFeatures().push_back(
            m_BenchmarkExperiment__scenario);
    // m_BenchmarkExperiment__standardizedProblem has already been allocated above
    m_BenchmarkExperiment__standardizedProblem->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM);
    m_BenchmarkExperimentEClass->getEStructuralFeatures().push_back(
            m_BenchmarkExperiment__standardizedProblem);

    // PerfValue
    m_PerfValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_PerfValueEClass->setClassifierID(PERFVALUE);
    m_PerfValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PerfValueEClass);
    // m_PerfValue__value has already been allocated above
    m_PerfValue__value->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__VALUE);
    m_PerfValueEClass->getEStructuralFeatures().push_back(m_PerfValue__value);
    // m_PerfValue__weightedPerfMeasure has already been allocated above
    m_PerfValue__weightedPerfMeasure->setFeatureID(
            ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE);
    m_PerfValueEClass->getEStructuralFeatures().push_back(
            m_PerfValue__weightedPerfMeasure);

    // Create enums

    // Create data types

    // Initialize package
    setName("benchmark_experiment");
    setNsPrefix("benchmark_experiment");
    setNsURI("http://www.ipa.frauhofer.de/benchmark_experiment");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ScenarioEClass->getESuperTypes().push_back(
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getIScore());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // Scenario
    m_ScenarioEClass->setName("Scenario");
    m_ScenarioEClass->setAbstract(false);
    m_ScenarioEClass->setInterface(false);
    m_Scenario__testData->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_Scenario__testData->setName("testData");
    m_Scenario__testData->setDefaultValueLiteral("");
    m_Scenario__testData->setLowerBound(0);
    m_Scenario__testData->setUpperBound(-1);
    m_Scenario__testData->setTransient(false);
    m_Scenario__testData->setVolatile(false);
    m_Scenario__testData->setChangeable(true);
    m_Scenario__testData->setContainment(false);
    m_Scenario__testData->setResolveProxies(true);
    m_Scenario__testData->setUnique(true);
    m_Scenario__testData->setDerived(false);
    m_Scenario__testData->setOrdered(true);
    m_Scenario__groundTruthData->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_Scenario__groundTruthData->setName("groundTruthData");
    m_Scenario__groundTruthData->setDefaultValueLiteral("");
    m_Scenario__groundTruthData->setLowerBound(0);
    m_Scenario__groundTruthData->setUpperBound(-1);
    m_Scenario__groundTruthData->setTransient(false);
    m_Scenario__groundTruthData->setVolatile(false);
    m_Scenario__groundTruthData->setChangeable(true);
    m_Scenario__groundTruthData->setContainment(false);
    m_Scenario__groundTruthData->setResolveProxies(true);
    m_Scenario__groundTruthData->setUnique(true);
    m_Scenario__groundTruthData->setDerived(false);
    m_Scenario__groundTruthData->setOrdered(true);
    m_Scenario__recievedData->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_Scenario__recievedData->setName("recievedData");
    m_Scenario__recievedData->setDefaultValueLiteral("");
    m_Scenario__recievedData->setLowerBound(0);
    m_Scenario__recievedData->setUpperBound(-1);
    m_Scenario__recievedData->setTransient(false);
    m_Scenario__recievedData->setVolatile(false);
    m_Scenario__recievedData->setChangeable(true);
    m_Scenario__recievedData->setContainment(false);
    m_Scenario__recievedData->setResolveProxies(true);
    m_Scenario__recievedData->setUnique(true);
    m_Scenario__recievedData->setDerived(false);
    m_Scenario__recievedData->setOrdered(true);
    m_Scenario__perfvalue->setEType(m_PerfValueEClass);
    m_Scenario__perfvalue->setName("perfvalue");
    m_Scenario__perfvalue->setDefaultValueLiteral("");
    m_Scenario__perfvalue->setLowerBound(0);
    m_Scenario__perfvalue->setUpperBound(-1);
    m_Scenario__perfvalue->setTransient(false);
    m_Scenario__perfvalue->setVolatile(false);
    m_Scenario__perfvalue->setChangeable(true);
    m_Scenario__perfvalue->setContainment(true);
    m_Scenario__perfvalue->setResolveProxies(true);
    m_Scenario__perfvalue->setUnique(true);
    m_Scenario__perfvalue->setDerived(false);
    m_Scenario__perfvalue->setOrdered(true);
    m_Scenario__tuple->setEType(
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getTuple());
    m_Scenario__tuple->setName("tuple");
    m_Scenario__tuple->setDefaultValueLiteral("");
    m_Scenario__tuple->setLowerBound(1);
    m_Scenario__tuple->setUpperBound(1);
    m_Scenario__tuple->setTransient(false);
    m_Scenario__tuple->setVolatile(false);
    m_Scenario__tuple->setChangeable(true);
    m_Scenario__tuple->setContainment(false);
    m_Scenario__tuple->setResolveProxies(true);
    m_Scenario__tuple->setUnique(true);
    m_Scenario__tuple->setDerived(false);
    m_Scenario__tuple->setOrdered(true);
    // BenchmarkExperiment
    m_BenchmarkExperimentEClass->setName("BenchmarkExperiment");
    m_BenchmarkExperimentEClass->setAbstract(false);
    m_BenchmarkExperimentEClass->setInterface(false);
    m_BenchmarkExperiment__scenario->setEType(m_ScenarioEClass);
    m_BenchmarkExperiment__scenario->setName("scenario");
    m_BenchmarkExperiment__scenario->setDefaultValueLiteral("");
    m_BenchmarkExperiment__scenario->setLowerBound(0);
    m_BenchmarkExperiment__scenario->setUpperBound(-1);
    m_BenchmarkExperiment__scenario->setTransient(false);
    m_BenchmarkExperiment__scenario->setVolatile(false);
    m_BenchmarkExperiment__scenario->setChangeable(true);
    m_BenchmarkExperiment__scenario->setContainment(true);
    m_BenchmarkExperiment__scenario->setResolveProxies(true);
    m_BenchmarkExperiment__scenario->setUnique(true);
    m_BenchmarkExperiment__scenario->setDerived(false);
    m_BenchmarkExperiment__scenario->setOrdered(true);
    m_BenchmarkExperiment__standardizedProblem->setEType(
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getStandardizedProblem());
    m_BenchmarkExperiment__standardizedProblem->setName("standardizedProblem");
    m_BenchmarkExperiment__standardizedProblem->setDefaultValueLiteral("");
    m_BenchmarkExperiment__standardizedProblem->setLowerBound(0);
    m_BenchmarkExperiment__standardizedProblem->setUpperBound(1);
    m_BenchmarkExperiment__standardizedProblem->setTransient(false);
    m_BenchmarkExperiment__standardizedProblem->setVolatile(false);
    m_BenchmarkExperiment__standardizedProblem->setChangeable(true);
    m_BenchmarkExperiment__standardizedProblem->setContainment(false);
    m_BenchmarkExperiment__standardizedProblem->setResolveProxies(true);
    m_BenchmarkExperiment__standardizedProblem->setUnique(true);
    m_BenchmarkExperiment__standardizedProblem->setDerived(false);
    m_BenchmarkExperiment__standardizedProblem->setOrdered(true);
    // PerfValue
    m_PerfValueEClass->setName("PerfValue");
    m_PerfValueEClass->setAbstract(false);
    m_PerfValueEClass->setInterface(false);
    m_PerfValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    m_PerfValue__value->setName("value");
    m_PerfValue__value->setDefaultValueLiteral("0.0");
    m_PerfValue__value->setLowerBound(0);
    m_PerfValue__value->setUpperBound(1);
    m_PerfValue__value->setTransient(false);
    m_PerfValue__value->setVolatile(false);
    m_PerfValue__value->setChangeable(true);
    m_PerfValue__value->setUnsettable(false);
    m_PerfValue__value->setID(false);
    m_PerfValue__value->setUnique(true);
    m_PerfValue__value->setDerived(false);
    m_PerfValue__value->setOrdered(true);
    m_PerfValue__weightedPerfMeasure->setEType(
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getWeightedPerfMeasure());
    m_PerfValue__weightedPerfMeasure->setName("weightedPerfMeasure");
    m_PerfValue__weightedPerfMeasure->setDefaultValueLiteral("");
    m_PerfValue__weightedPerfMeasure->setLowerBound(1);
    m_PerfValue__weightedPerfMeasure->setUpperBound(1);
    m_PerfValue__weightedPerfMeasure->setTransient(false);
    m_PerfValue__weightedPerfMeasure->setVolatile(false);
    m_PerfValue__weightedPerfMeasure->setChangeable(true);
    m_PerfValue__weightedPerfMeasure->setContainment(false);
    m_PerfValue__weightedPerfMeasure->setResolveProxies(true);
    m_PerfValue__weightedPerfMeasure->setUnique(true);
    m_PerfValue__weightedPerfMeasure->setDerived(false);
    m_PerfValue__weightedPerfMeasure->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Benchmark_experimentPackage::getScenario()
{
    return m_ScenarioEClass;
}
::ecore::EClass_ptr Benchmark_experimentPackage::getBenchmarkExperiment()
{
    return m_BenchmarkExperimentEClass;
}
::ecore::EClass_ptr Benchmark_experimentPackage::getPerfValue()
{
    return m_PerfValueEClass;
}

::ecore::EReference_ptr Benchmark_experimentPackage::getScenario__testData()
{
    return m_Scenario__testData;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getScenario__groundTruthData()
{
    return m_Scenario__groundTruthData;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getScenario__recievedData()
{
    return m_Scenario__recievedData;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getScenario__perfvalue()
{
    return m_Scenario__perfvalue;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getScenario__tuple()
{
    return m_Scenario__tuple;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getBenchmarkExperiment__scenario()
{
    return m_BenchmarkExperiment__scenario;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getBenchmarkExperiment__standardizedProblem()
{
    return m_BenchmarkExperiment__standardizedProblem;
}
::ecore::EAttribute_ptr Benchmark_experimentPackage::getPerfValue__value()
{
    return m_PerfValue__value;
}
::ecore::EReference_ptr Benchmark_experimentPackage::getPerfValue__weightedPerfMeasure()
{
    return m_PerfValue__weightedPerfMeasure;
}

