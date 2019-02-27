// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestPortLinkImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequestPortLink.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/RequestPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(RequestPortLinkImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void RequestPortLink::_initialize()
{
    // Supertypes
    ::componentDefinition::AbstractComponentLink::_initialize();

    // References

    /*PROTECTED REGION ID(RequestPortLinkImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RequestPortLink::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT:
    {
        if (m_requestPort)
            _any = ::ecore::as < ::ecore::EObject > (m_requestPort);
    }
        return _any;

    }
    throw "Error";
}

void RequestPortLink::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentDefinition::RequestPort_ptr _t1 =
                dynamic_cast< ::componentDefinition::RequestPort* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentDefinition::RequestPort >(_t0);*/
        ::componentDefinition::RequestPortLink::setRequestPort(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean RequestPortLink::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::ABSTRACTCOMPONENTLINK__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT:
        return (bool) m_requestPort;

    }
    throw "Error";
}

void RequestPortLink::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr RequestPortLink::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getRequestPortLink();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void RequestPortLink::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void RequestPortLink::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

