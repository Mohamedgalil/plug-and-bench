// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/EnumerationImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Enumeration.hpp"
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EnumerationImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

void Enumeration::_initialize()
{
    // Supertypes
    ::communicationObject::AbstractCommElement::_initialize();

    // References
    for (size_t i = 0; i < m_enums->size(); i++)
    {
        (*m_enums)[i]->_initialize();
    }

    /*PROTECTED REGION ID(EnumerationImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Enumeration::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::ABSTRACTCOMMELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS:
    {
        _any = m_enums->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void Enumeration::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::ABSTRACTCOMMELEMENT__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::communicationObject::AbstractCommElement::setName(_t0);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::communicationObject::Enumeration::getEnums().clear();
        ::communicationObject::Enumeration::getEnums().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Enumeration::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::ABSTRACTCOMMELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS:
        return m_enums && m_enums->size();

    }
    throw "Error";
}

void Enumeration::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Enumeration::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getEnumeration();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Enumeration::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Enumeration::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

