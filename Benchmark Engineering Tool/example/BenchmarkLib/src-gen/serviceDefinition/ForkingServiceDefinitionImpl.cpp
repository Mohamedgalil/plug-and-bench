// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ForkingServiceDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ForkingServiceDefinition.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ForkingServiceDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void ForkingServiceDefinition::_initialize()
{
    // Supertypes
    ::serviceDefinition::OneWayCommunicationService::_initialize();

    // References
    if (m_pattern)
    {
        m_pattern->_initialize();
    }

    /*PROTECTED REGION ID(ForkingServiceDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ForkingServiceDefinition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
        _any = m_properties->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN:
    {
        if (m_pattern)
            _any = ::ecore::as < ::ecore::EObject > (m_pattern);
    }
        return _any;

    }
    throw "Error";
}

void ForkingServiceDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::AbstractServiceDefinition::setName(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::serviceDefinition::AbstractServiceDefinition::getProperties().clear();
        ::serviceDefinition::AbstractServiceDefinition::getProperties().insert_all(
                *_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationPattern::ForkingPattern_ptr _t1 =
                dynamic_cast< ::communicationPattern::ForkingPattern* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationPattern::ForkingPattern >(_t0);*/
        ::serviceDefinition::ForkingServiceDefinition::setPattern(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ForkingServiceDefinition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
        return m_properties && m_properties->size();
    case ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN:
        return (bool) m_pattern;

    }
    throw "Error";
}

void ForkingServiceDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ForkingServiceDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getForkingServiceDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ForkingServiceDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ForkingServiceDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

