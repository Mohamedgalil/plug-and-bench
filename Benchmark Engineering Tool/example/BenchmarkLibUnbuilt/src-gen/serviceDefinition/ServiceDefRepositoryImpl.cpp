// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefRepositoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceDefRepository.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/ServiceRepoVersion.hpp>
#include <serviceDefinition/AbstractServiceDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ServiceDefRepositoryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void ServiceDefRepository::_initialize()
{
    // Supertypes

    // References
    if (m_version)
    {
        m_version->_initialize();
    }
    for (size_t i = 0; i < m_services->size(); i++)
    {
        (*m_services)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ServiceDefRepositoryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ServiceDefRepository::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION:
    {
        if (m_version)
            _any = ::ecore::as < ::ecore::EObject > (m_version);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES:
    {
        _any = m_services->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ServiceDefRepository::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::ServiceDefRepository::setName(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::serviceDefinition::ServiceRepoVersion_ptr _t1 =
                dynamic_cast< ::serviceDefinition::ServiceRepoVersion* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::serviceDefinition::ServiceRepoVersion >(_t0);*/
        ::serviceDefinition::ServiceDefRepository::setVersion(_t1);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::serviceDefinition::ServiceDefRepository::getServices().clear();
        ::serviceDefinition::ServiceDefRepository::getServices().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ServiceDefRepository::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION:
        return (bool) m_version;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES:
        return m_services && m_services->size();

    }
    throw "Error";
}

void ServiceDefRepository::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ServiceDefRepository::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getServiceDefRepository();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ServiceDefRepository::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ServiceDefRepository::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

