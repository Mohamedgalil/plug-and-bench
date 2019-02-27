// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceDefModel.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/CommRepoImport.hpp>
#include <serviceDefinition/ServiceDefRepository.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ServiceDefModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void ServiceDefModel::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }
    if (m_repository)
    {
        m_repository->_initialize();
    }

    /*PROTECTED REGION ID(ServiceDefModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ServiceDefModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY:
    {
        if (m_repository)
            _any = ::ecore::as < ::ecore::EObject > (m_repository);
    }
        return _any;

    }
    throw "Error";
}

void ServiceDefModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::serviceDefinition::ServiceDefModel::getImports().clear();
        ::serviceDefinition::ServiceDefModel::getImports().insert_all(*_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::serviceDefinition::ServiceDefRepository_ptr _t1 =
                dynamic_cast< ::serviceDefinition::ServiceDefRepository* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::serviceDefinition::ServiceDefRepository >(_t0);*/
        ::serviceDefinition::ServiceDefModel::setRepository(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ServiceDefModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS:
        return m_imports && m_imports->size();
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY:
        return (bool) m_repository;

    }
    throw "Error";
}

void ServiceDefModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ServiceDefModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getServiceDefModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ServiceDefModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ServiceDefModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

