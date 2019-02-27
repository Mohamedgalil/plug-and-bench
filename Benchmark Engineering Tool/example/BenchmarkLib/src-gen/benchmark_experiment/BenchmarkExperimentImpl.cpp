// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/BenchmarkExperimentImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BenchmarkExperiment.hpp"
#include <benchmark_experiment/Benchmark_experimentPackage.hpp>
#include <benchmark_experiment/Scenario.hpp>
#include <standardized_problem/StandardizedProblem.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BenchmarkExperimentImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

void BenchmarkExperiment::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_scenario->size(); i++)
    {
        (*m_scenario)[i]->_initialize();
    }

    /*PROTECTED REGION ID(BenchmarkExperimentImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BenchmarkExperiment::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO:
    {
        _any = m_scenario->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM:
    {
        if (m_standardizedProblem)
            _any = ::ecore::as < ::ecore::EObject > (m_standardizedProblem);
    }
        return _any;

    }
    throw "Error";
}

void BenchmarkExperiment::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::benchmark_experiment::BenchmarkExperiment::getScenario().clear();
        ::benchmark_experiment::BenchmarkExperiment::getScenario().insert_all(
                *_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::StandardizedProblem_ptr _t1 =
                dynamic_cast< ::standardized_problem::StandardizedProblem* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::StandardizedProblem >(_t0);*/
        ::benchmark_experiment::BenchmarkExperiment::setStandardizedProblem(
                _t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BenchmarkExperiment::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO:
        return m_scenario && m_scenario->size();
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM:
        return (bool) m_standardizedProblem;

    }
    throw "Error";
}

void BenchmarkExperiment::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BenchmarkExperiment::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::benchmark_experiment::Benchmark_experimentPackage* >(::benchmark_experiment::Benchmark_experimentPackage::_instance().get())->getBenchmarkExperiment();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BenchmarkExperiment::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BenchmarkExperiment::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__SCENARIO:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

