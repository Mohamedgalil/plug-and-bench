// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/OptionalCoordinationServiceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OptionalCoordinationService.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(OptionalCoordinationServiceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void OptionalCoordinationService::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(OptionalCoordinationServiceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OptionalCoordinationService::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF:
    {
        if (m_serviceref)
            _any = ::ecore::as < ::ecore::EObject > (m_serviceref);
    }
        return _any;

    }
    throw "Error";
}

void OptionalCoordinationService::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::OptionalCoordinationService::setName(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::serviceDefinition::CommunicationServiceDefinition_ptr _t1 =
                dynamic_cast< ::serviceDefinition::CommunicationServiceDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::serviceDefinition::CommunicationServiceDefinition >(_t0);*/
        ::serviceDefinition::OptionalCoordinationService::setServiceref(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean OptionalCoordinationService::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF:
        return (bool) m_serviceref;

    }
    throw "Error";
}

void OptionalCoordinationService::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr OptionalCoordinationService::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getOptionalCoordinationService();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void OptionalCoordinationService::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void OptionalCoordinationService::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

