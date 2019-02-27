// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentSubNodeObserverImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentSubNodeObserver.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/ComponentSubNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentSubNodeObserverImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void ComponentSubNodeObserver::_initialize()
{
    // Supertypes
    ::componentDefinition::AbstractComponentLink::_initialize();

    // References

    /*PROTECTED REGION ID(ComponentSubNodeObserverImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentSubNodeObserver::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT:
    {
        if (m_subject)
            _any = ::ecore::as < ::ecore::EObject > (m_subject);
    }
        return _any;

    }
    throw "Error";
}

void ComponentSubNodeObserver::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentDefinition::ComponentSubNode_ptr _t1 =
                dynamic_cast< ::componentDefinition::ComponentSubNode* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentDefinition::ComponentSubNode >(_t0);*/
        ::componentDefinition::ComponentSubNodeObserver::setSubject(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentSubNodeObserver::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::ABSTRACTCOMPONENTLINK__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT:
        return (bool) m_subject;

    }
    throw "Error";
}

void ComponentSubNodeObserver::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentSubNodeObserver::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getComponentSubNodeObserver();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentSubNodeObserver::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentSubNodeObserver::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

