// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/TriggerDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "TriggerDefinition.hpp"
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/AbstractParameter.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(TriggerDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

void TriggerDefinition::_initialize()
{
    // Supertypes
    ::parameterDefinition::AbstractParameter::_initialize();

    // References

    /*PROTECTED REGION ID(TriggerDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject TriggerDefinition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES:
    {
        _any = m_attributes->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void TriggerDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::parameterDefinition::AbstractParameter::setName(_t0);
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::parameterDefinition::AbstractParameter::getAttributes().clear();
        ::parameterDefinition::AbstractParameter::getAttributes().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean TriggerDefinition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES:
        return m_attributes && m_attributes->size();

    }
    throw "Error";
}

void TriggerDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr TriggerDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getTriggerDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void TriggerDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void TriggerDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

