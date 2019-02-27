// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/InputPortLinkImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InputPortLink.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/InputPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InputPortLinkImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void InputPortLink::_initialize()
{
    // Supertypes
    ::componentDefinition::AbstractComponentLink::_initialize();

    // References

    /*PROTECTED REGION ID(InputPortLinkImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InputPortLink::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__OPTIONAL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::toAny(_any, m_optional);
    }
        return _any;
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT:
    {
        if (m_inputPort)
            _any = ::ecore::as < ::ecore::EObject > (m_inputPort);
    }
        return _any;

    }
    throw "Error";
}

void InputPortLink::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__OPTIONAL:
    {
        ::ecore::EBoolean _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBoolean
                > ::fromAny(_newValue, _t0);
        ::componentDefinition::InputPortLink::setOptional(_t0);
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentDefinition::InputPort_ptr _t1 =
                dynamic_cast< ::componentDefinition::InputPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentDefinition::InputPort >(_t0);*/
        ::componentDefinition::InputPortLink::setInputPort(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InputPortLink::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::ABSTRACTCOMPONENTLINK__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__OPTIONAL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBoolean
                > ::is_set(m_optional);
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT:
        return (bool) m_inputPort;

    }
    throw "Error";
}

void InputPortLink::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InputPortLink::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getInputPortLink();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InputPortLink::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InputPortLink::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

