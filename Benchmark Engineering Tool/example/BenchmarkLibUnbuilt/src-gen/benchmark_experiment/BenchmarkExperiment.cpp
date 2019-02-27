// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/BenchmarkExperiment.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BenchmarkExperiment.hpp"
#include <benchmark_experiment/Scenario.hpp>
#include <standardized_problem/StandardizedProblem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "benchmark_experiment/Benchmark_experimentPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BenchmarkExperiment.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

// Default constructor
BenchmarkExperiment::BenchmarkExperiment() :
        m_standardizedProblem(0)
{

    m_scenario.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::benchmark_experiment::Scenario_ptr, -1, true, false >(
                    this,
                    ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getBenchmarkExperiment__scenario()));

    /*PROTECTED REGION ID(BenchmarkExperimentImpl__BenchmarkExperimentImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BenchmarkExperiment::~BenchmarkExperiment()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::benchmark_experiment::Scenario_ptr >& BenchmarkExperiment::getScenario() const
{
    return *m_scenario;
}

::ecorecpp::mapping::EList< ::benchmark_experiment::Scenario_ptr >& BenchmarkExperiment::getScenario()
{
    return *m_scenario;
}

::standardized_problem::StandardizedProblem_ptr BenchmarkExperiment::getStandardizedProblem() const
{
    return m_standardizedProblem;
}

void BenchmarkExperiment::setStandardizedProblem(
        ::standardized_problem::StandardizedProblem_ptr _standardizedProblem)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::StandardizedProblem_ptr _old_standardizedProblem = m_standardizedProblem;
#endif
    m_standardizedProblem = _standardizedProblem;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getBenchmarkExperiment__standardizedProblem(),
                _old_standardizedProblem,
                m_standardizedProblem
        );
        eNotify(&notification);
    }
#endif
}

