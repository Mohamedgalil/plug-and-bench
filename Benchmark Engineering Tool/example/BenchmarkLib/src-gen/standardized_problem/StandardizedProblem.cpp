// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/StandardizedProblem.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StandardizedProblem.hpp"
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>
#include <standardized_problem/ScenarioDef.hpp>
#include <standardized_problem/PerformanceMeasure.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <standardized_problem/EnvironmentVariableDefinition.hpp>
#include <standardized_problem/BenchmarkConstraintDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StandardizedProblem.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
StandardizedProblem::StandardizedProblem()
{

    m_scenarioDefinition.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::ScenarioDef_ptr, -1, true, false >(
                    this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getStandardizedProblem__scenarioDefinition()));
    m_performanceCriteria.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::PerformanceMeasure_ptr, -1, true,
                    false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getStandardizedProblem__performanceCriteria()));
    m_commServiceDef.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::CommunicationServiceDefinition_ptr, -1,
                    false, false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getStandardizedProblem__commServiceDef()));
    m_environmentVariableDefinition.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::EnvironmentVariableDefinition_ptr,
                    -1, true, false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getStandardizedProblem__environmentVariableDefinition()));
    m_benchmarkConstraintDefinition.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::BenchmarkConstraintDefinition_ptr,
                    -1, true, false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getStandardizedProblem__benchmarkConstraintDefinition()));

    /*PROTECTED REGION ID(StandardizedProblemImpl__StandardizedProblemImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StandardizedProblem::~StandardizedProblem()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::standardized_problem::ScenarioDef_ptr >& StandardizedProblem::getScenarioDefinition() const
{
    return *m_scenarioDefinition;
}

::ecorecpp::mapping::EList< ::standardized_problem::ScenarioDef_ptr >& StandardizedProblem::getScenarioDefinition()
{
    return *m_scenarioDefinition;
}

const ::ecorecpp::mapping::EList< ::standardized_problem::PerformanceMeasure_ptr >& StandardizedProblem::getPerformanceCriteria() const
{
    return *m_performanceCriteria;
}

::ecorecpp::mapping::EList< ::standardized_problem::PerformanceMeasure_ptr >& StandardizedProblem::getPerformanceCriteria()
{
    return *m_performanceCriteria;
}

const ::ecorecpp::mapping::EList<
        ::serviceDefinition::CommunicationServiceDefinition_ptr >& StandardizedProblem::getCommServiceDef() const
{
    return *m_commServiceDef;
}

::ecorecpp::mapping::EList<
        ::serviceDefinition::CommunicationServiceDefinition_ptr >& StandardizedProblem::getCommServiceDef()
{
    return *m_commServiceDef;
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::EnvironmentVariableDefinition_ptr >& StandardizedProblem::getEnvironmentVariableDefinition() const
{
    return *m_environmentVariableDefinition;
}

::ecorecpp::mapping::EList<
        ::standardized_problem::EnvironmentVariableDefinition_ptr >& StandardizedProblem::getEnvironmentVariableDefinition()
{
    return *m_environmentVariableDefinition;
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::BenchmarkConstraintDefinition_ptr >& StandardizedProblem::getBenchmarkConstraintDefinition() const
{
    return *m_benchmarkConstraintDefinition;
}

::ecorecpp::mapping::EList<
        ::standardized_problem::BenchmarkConstraintDefinition_ptr >& StandardizedProblem::getBenchmarkConstraintDefinition()
{
    return *m_benchmarkConstraintDefinition;
}

