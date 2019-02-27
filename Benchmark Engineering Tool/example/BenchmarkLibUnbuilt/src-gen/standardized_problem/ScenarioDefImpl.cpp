// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/ScenarioDefImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ScenarioDef.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <standardized_problem/BenchmarkConstraint.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ScenarioDefImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void ScenarioDef::_initialize()
{
    // Supertypes
    ::standardized_problem::DescriptorObject::_initialize();
    ::standardized_problem::IScoreElement::_initialize();
    ::standardized_problem::IScore::_initialize();

    // References
    for (size_t i = 0; i < m_tuple->size(); i++)
    {
        (*m_tuple)[i]->_initialize();
    }
    for (size_t i = 0; i < m_performanceMeasures->size(); i++)
    {
        (*m_performanceMeasures)[i]->_initialize();
    }
    for (size_t i = 0; i < m_benchmarkconstraint->size(); i++)
    {
        (*m_benchmarkconstraint)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ScenarioDefImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ScenarioDef::eGet(::ecore::EInt _featureID,
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
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF:
    {
        _any = m_commServDef->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__WEIGHT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_weight);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE:
    {
        _any = m_tuple->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES:
    {
        _any = m_performanceMeasures->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT:
    {
        _any = m_benchmarkconstraint->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ScenarioDef::eSet(::ecore::EInt _featureID,
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
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::ScenarioDef::getCommServDef().clear();
        ::standardized_problem::ScenarioDef::getCommServDef().insert_all(*_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__WEIGHT:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::ScenarioDef::setWeight(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::ScenarioDef::getTuple().clear();
        ::standardized_problem::ScenarioDef::getTuple().insert_all(*_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::ScenarioDef::getPerformanceMeasures().clear();
        ::standardized_problem::ScenarioDef::getPerformanceMeasures().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::ScenarioDef::getBenchmarkconstraint().clear();
        ::standardized_problem::ScenarioDef::getBenchmarkconstraint().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ScenarioDef::eIsSet(::ecore::EInt _featureID)
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
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF:
        return m_commServDef && m_commServDef->size();
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__WEIGHT:
        return m_weight != 1.0;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE:
        return m_tuple && m_tuple->size();
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES:
        return m_performanceMeasures && m_performanceMeasures->size();
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT:
        return m_benchmarkconstraint && m_benchmarkconstraint->size();

    }
    throw "Error";
}

void ScenarioDef::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ScenarioDef::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getScenarioDef();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ScenarioDef::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::Tuple_ptr _t1 =
                dynamic_cast< ::standardized_problem::Tuple* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::standardized_problem::Tuple_ptr, -1, true, true >&) ::standardized_problem::ScenarioDef::getTuple();
        container.basicAdd(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ScenarioDef::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::standardized_problem::Tuple_ptr _t1 =
                dynamic_cast< ::standardized_problem::Tuple* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl<
                        ::standardized_problem::Tuple_ptr, -1, true, true >&) ::standardized_problem::ScenarioDef::getTuple();
        container.basicRemove(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

