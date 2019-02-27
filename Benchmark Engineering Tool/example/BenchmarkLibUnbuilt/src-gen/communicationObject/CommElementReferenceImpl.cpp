// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommElementReferenceImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommElementReference.hpp"
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CommElementReferenceImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

void CommElementReference::_initialize()
{
    // Supertypes
    ::basicAttributes::AbstractAttributeType::_initialize();

    // References

    /*PROTECTED REGION ID(CommElementReferenceImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CommElementReference::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
        if (m_array)
            _any = ::ecore::as < ::ecore::EObject > (m_array);
    }
        return _any;
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME:
    {
        if (m_typeName)
            _any = ::ecore::as < ::ecore::EObject > (m_typeName);
    }
        return _any;

    }
    throw "Error";
}

void CommElementReference::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::ArrayType_ptr _t1 =
                dynamic_cast< ::basicAttributes::ArrayType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::ArrayType >(_t0);*/
        ::basicAttributes::AbstractAttributeType::setArray(_t1);
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::AbstractCommElement_ptr _t1 =
                dynamic_cast< ::communicationObject::AbstractCommElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::AbstractCommElement >(_t0);*/
        ::communicationObject::CommElementReference::setTypeName(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CommElementReference::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
        return (bool) m_array;
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME:
        return (bool) m_typeName;

    }
    throw "Error";
}

void CommElementReference::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CommElementReference::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommElementReference();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CommElementReference::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CommElementReference::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;
    case ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

