// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommObjectModel.hpp"
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/CommObjectsRepository.hpp>
#include <communicationObject/CommRepositoryImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CommObjectModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

void CommObjectModel::_initialize()
{
    // Supertypes

    // References
    if (m_repository)
    {
        m_repository->_initialize();
    }
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }

    /*PROTECTED REGION ID(CommObjectModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CommObjectModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY:
    {
        if (m_repository)
            _any = ::ecore::as < ::ecore::EObject > (m_repository);
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void CommObjectModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommObjectsRepository_ptr _t1 =
                dynamic_cast< ::communicationObject::CommObjectsRepository* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommObjectsRepository >(_t0);*/
        ::communicationObject::CommObjectModel::setRepository(_t1);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::communicationObject::CommObjectModel::getImports().clear();
        ::communicationObject::CommObjectModel::getImports().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CommObjectModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY:
        return (bool) m_repository;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS:
        return m_imports && m_imports->size();

    }
    throw "Error";
}

void CommObjectModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CommObjectModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommObjectModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CommObjectModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CommObjectModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

