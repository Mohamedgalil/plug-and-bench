// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectsRepositoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommObjectsRepository.hpp"
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <communicationObject/Version.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CommObjectsRepositoryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

void CommObjectsRepository::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_elements->size(); i++)
    {
        (*m_elements)[i]->_initialize();
    }
    if (m_version)
    {
        m_version->_initialize();
    }

    /*PROTECTED REGION ID(CommObjectsRepositoryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CommObjectsRepository::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS:
    {
        _any = m_elements->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION:
    {
        if (m_version)
            _any = ::ecore::as < ::ecore::EObject > (m_version);
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__DEPENDENCY:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_dependency);
    }
        return _any;

    }
    throw "Error";
}

void CommObjectsRepository::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::communicationObject::CommObjectsRepository::setName(_t0);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::communicationObject::CommObjectsRepository::getElements().clear();
        ::communicationObject::CommObjectsRepository::getElements().insert_all(
                *_t0);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::Version_ptr _t1 =
                dynamic_cast< ::communicationObject::Version* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::Version >(_t0);*/
        ::communicationObject::CommObjectsRepository::setVersion(_t1);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__DEPENDENCY:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::communicationObject::CommObjectsRepository::setDependency(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CommObjectsRepository::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS:
        return m_elements && m_elements->size();
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION:
        return (bool) m_version;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__DEPENDENCY:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_dependency);

    }
    throw "Error";
}

void CommObjectsRepository::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CommObjectsRepository::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommObjectsRepository();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CommObjectsRepository::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CommObjectsRepository::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

