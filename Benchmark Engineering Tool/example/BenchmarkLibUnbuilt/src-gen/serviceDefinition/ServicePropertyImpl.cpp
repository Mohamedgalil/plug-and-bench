// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServicePropertyImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceProperty.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ServicePropertyImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void ServiceProperty::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ServicePropertyImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ServiceProperty::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEPROPERTY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void ServiceProperty::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEPROPERTY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::ServiceProperty::setName(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ServiceProperty::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEPROPERTY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);

    }
    throw "Error";
}

void ServiceProperty::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ServiceProperty::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getServiceProperty();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ServiceProperty::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ServiceProperty::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

