// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AbstractAttributeTypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractAttributeType.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AbstractAttributeTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void AbstractAttributeType::_initialize()
{
    // Supertypes

    // References
    if (m_array)
    {
        m_array->_initialize();
    }

    /*PROTECTED REGION ID(AbstractAttributeTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AbstractAttributeType::eGet(::ecore::EInt _featureID,
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

    }
    throw "Error";
}

void AbstractAttributeType::eSet(::ecore::EInt _featureID,
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

    }
    throw "Error";
}

::ecore::EBoolean AbstractAttributeType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
        return (bool) m_array;

    }
    throw "Error";
}

void AbstractAttributeType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AbstractAttributeType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAbstractAttributeType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AbstractAttributeType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AbstractAttributeType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

