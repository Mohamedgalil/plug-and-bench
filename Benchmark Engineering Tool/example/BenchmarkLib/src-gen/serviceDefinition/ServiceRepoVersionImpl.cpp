// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceRepoVersionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceRepoVersion.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ServiceRepoVersionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void ServiceRepoVersion::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ServiceRepoVersionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ServiceRepoVersion::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MAJOR:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_major);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MINOR:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_minor);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__PATCH:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_patch);
    }
        return _any;

    }
    throw "Error";
}

void ServiceRepoVersion::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MAJOR:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::ServiceRepoVersion::setMajor(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MINOR:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::ServiceRepoVersion::setMinor(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__PATCH:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::ServiceRepoVersion::setPatch(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ServiceRepoVersion::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MAJOR:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_major);
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MINOR:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_minor);
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__PATCH:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_patch);

    }
    throw "Error";
}

void ServiceRepoVersion::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ServiceRepoVersion::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getServiceRepoVersion();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ServiceRepoVersion::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ServiceRepoVersion::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

