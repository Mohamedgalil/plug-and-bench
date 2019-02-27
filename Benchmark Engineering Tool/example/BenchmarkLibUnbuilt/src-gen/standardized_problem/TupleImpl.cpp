// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/TupleImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Tuple.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/ScenarioDef.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <standardized_problem/EnvironmentVariable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TupleImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void Tuple::_initialize()
{
    // Supertypes
    ::standardized_problem::DescriptorObject::_initialize();

    // References
    for (size_t i = 0; i < m_environmentVariable->size(); i++)
    {
        (*m_environmentVariable)[i]->_initialize();
    }

    /*PROTECTED REGION ID(TupleImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Tuple::eGet(::ecore::EInt _featureID,
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
    case ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF:
    {
        if (m_scenarioDef)
            _any = ::ecore::as < ::ecore::EObject > (m_scenarioDef);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF:
    {
        if (m_commServiceDef)
            _any = ::ecore::as < ::ecore::EObject > (m_commServiceDef);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_weight);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT:
    {
        if (m_commObject)
            _any = ::ecore::as < ::ecore::EObject > (m_commObject);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE:
    {
        _any = m_weightedperfmeasure->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE:
    {
        _any = m_environmentVariable->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void Tuple::eSet(::ecore::EInt _featureID,
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
    case ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::ScenarioDef_ptr _t1 =
                dynamic_cast< ::standardized_problem::ScenarioDef* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::ScenarioDef >(_t0);*/
        ::standardized_problem::Tuple::setScenarioDef(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::serviceDefinition::CommunicationServiceDefinition_ptr _t1 =
                dynamic_cast< ::serviceDefinition::CommunicationServiceDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::serviceDefinition::CommunicationServiceDefinition >(_t0);*/
        ::standardized_problem::Tuple::setCommServiceDef(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHT:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::Tuple::setWeight(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::standardized_problem::Tuple::setCommObject(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::Tuple::getWeightedperfmeasure().clear();
        ::standardized_problem::Tuple::getWeightedperfmeasure().insert_all(
                *_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::standardized_problem::Tuple::getEnvironmentVariable().clear();
        ::standardized_problem::Tuple::getEnvironmentVariable().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Tuple::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_label);
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_description);
    case ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF:
        return (bool) m_scenarioDef;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF:
        return (bool) m_commServiceDef;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHT:
        return m_weight != 1.0;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT:
        return (bool) m_commObject;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE:
        return m_weightedperfmeasure && m_weightedperfmeasure->size();
    case ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE:
        return m_environmentVariable && m_environmentVariable->size();

    }
    throw "Error";
}

void Tuple::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Tuple::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getTuple();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Tuple::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::ScenarioDef_ptr _t1 =
                dynamic_cast< ::standardized_problem::ScenarioDef* >(_t0.get());

        // set reference
        basicsetScenarioDef(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Tuple::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::standardized_problem::ScenarioDef_ptr _t1 =
                dynamic_cast< ::standardized_problem::ScenarioDef* >(_t0.get());

        // set reference
        if (basicgetScenarioDef() == _t1)
            basicsetScenarioDef(nullptr);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

