// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommElementValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommElementValue.hpp"
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CommElementValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

void CommElementValue::_initialize()
{
    // Supertypes
    ::basicAttributes::SingleValue::_initialize();

    // References

    /*PROTECTED REGION ID(CommElementValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CommElementValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
    }
        return _any;

    }
    throw "Error";
}

void CommElementValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::AbstractCommElement_ptr _t1 =
                dynamic_cast< ::communicationObject::AbstractCommElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::AbstractCommElement >(_t0);*/
        ::communicationObject::CommElementValue::setValue(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CommElementValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE:
        return (bool) m_value;

    }
    throw "Error";
}

void CommElementValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CommElementValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommElementValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CommElementValue::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CommElementValue::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

