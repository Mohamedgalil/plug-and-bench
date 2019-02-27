// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/ScenarioImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scenario.hpp"
#include <benchmark_experiment/Benchmark_experimentPackage.hpp>
#include <standardized_problem/IScore.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <benchmark_experiment/PerfValue.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ScenarioImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

void Scenario::_initialize()
{
    // Supertypes
    ::standardized_problem::IScore::_initialize();

    // References
    for (size_t i = 0; i < m_perfvalue->size(); i++)
    {
        (*m_perfvalue)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ScenarioImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Scenario::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA:
    {
        _any = m_testData->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA:
    {
        _any = m_groundTruthData->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA:
    {
        _any = m_recievedData->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE:
    {
        _any = m_perfvalue->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE:
    {
        if (m_tuple)
            _any = ::ecore::as < ::ecore::EObject > (m_tuple);
    }
        return _any;

    }
    throw "Error";
}

void Scenario::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::benchmark_experiment::Scenario::getTestData().clear();
        ::benchmark_experiment::Scenario::getTestData().insert_all(*_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::benchmark_experiment::Scenario::getGroundTruthData().clear();
        ::benchmark_experiment::Scenario::getGroundTruthData().insert_all(*_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::benchmark_experiment::Scenario::getRecievedData().clear();
        ::benchmark_experiment::Scenario::getRecievedData().insert_all(*_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::benchmark_experiment::Scenario::getPerfvalue().clear();
        ::benchmark_experiment::Scenario::getPerfvalue().insert_all(*_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::Tuple_ptr _t1 =
                dynamic_cast< ::standardized_problem::Tuple* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::Tuple >(_t0);*/
        ::benchmark_experiment::Scenario::setTuple(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Scenario::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA:
        return m_testData && m_testData->size();
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA:
        return m_groundTruthData && m_groundTruthData->size();
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA:
        return m_recievedData && m_recievedData->size();
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE:
        return m_perfvalue && m_perfvalue->size();
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE:
        return (bool) m_tuple;

    }
    throw "Error";
}

void Scenario::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Scenario::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::benchmark_experiment::Benchmark_experimentPackage* >(::benchmark_experiment::Benchmark_experimentPackage::_instance().get())->getScenario();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Scenario::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Scenario::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TESTDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__GROUNDTRUTHDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__RECIEVEDDATA:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__PERFVALUE:
    {
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::SCENARIO__TUPLE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

