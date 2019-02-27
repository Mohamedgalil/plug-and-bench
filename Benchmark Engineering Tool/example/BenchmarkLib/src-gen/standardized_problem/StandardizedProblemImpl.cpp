// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/StandardizedProblemImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StandardizedProblem.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
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
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StandardizedProblemImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void StandardizedProblem::_initialize()
{
    // Supertypes
    ::standardized_problem::DescriptorObject::_initialize();
    ::standardized_problem::IScoreElement::_initialize();
    ::standardized_problem::IScore::_initialize();

    // References
    for (size_t i = 0; i < m_scenarioDefinition->size(); i++)
    {
        (*m_scenarioDefinition)[i]->_initialize();
    }
    for (size_t i = 0; i < m_performanceCriteria->size(); i++)
    {
        (*m_performanceCriteria)[i]->_initialize();
    }
    for (size_t i = 0; i < m_environmentVariableDefinition->size(); i++)
    {
        (*m_environmentVariableDefinition)[i]->_initialize();
    }
    for (size_t i = 0; i < m_benchmarkConstraintDefinition->size(); i++)
    {
        (*m_benchmarkConstraintDefinition)[i]->_initialize();
    }

    /*PROTECTED REGION ID(StandardizedProblemImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StandardizedProblem::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_label);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_description);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_score);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION:
    {
        _any = m_scenarioDefinition->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA:
    {
        _any = m_performanceCriteria->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF:
    {
        _any = m_commServiceDef->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION:
    {
        _any =
                m_environmentVariableDefinition->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION:
    {
        _any =
                m_benchmarkConstraintDefinition->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void StandardizedProblem::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::DescriptorObject::setLabel(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::DescriptorObject::setDescription(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::IScoreElement::setScore(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::StandardizedProblem::getScenarioDefinition().clear();
        ::standardized_problem::StandardizedProblem::getScenarioDefinition().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::StandardizedProblem::getPerformanceCriteria().clear();
        ::standardized_problem::StandardizedProblem::getPerformanceCriteria().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::StandardizedProblem::getCommServiceDef().clear();
        ::standardized_problem::StandardizedProblem::getCommServiceDef().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::StandardizedProblem::getEnvironmentVariableDefinition().clear();
        ::standardized_problem::StandardizedProblem::getEnvironmentVariableDefinition().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::StandardizedProblem::getBenchmarkConstraintDefinition().clear();
        ::standardized_problem::StandardizedProblem::getBenchmarkConstraintDefinition().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean StandardizedProblem::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_label);
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_description);
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBigDecimal
                > ::is_set(m_score);
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION:
        return m_scenarioDefinition && m_scenarioDefinition->size();
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA:
        return m_performanceCriteria && m_performanceCriteria->size();
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF:
        return m_commServiceDef && m_commServiceDef->size();
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION:
        return m_environmentVariableDefinition
                && m_environmentVariableDefinition->size();
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION:
        return m_benchmarkConstraintDefinition
                && m_benchmarkConstraintDefinition->size();

    }
    throw "Error";
}

void StandardizedProblem::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr StandardizedProblem::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getStandardizedProblem();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void StandardizedProblem::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void StandardizedProblem::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

