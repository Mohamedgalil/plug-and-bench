// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/EnumerationValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnumerationValue.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EnumerationValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void EnumerationValue::_initialize()
{
    // Supertypes
    ::basicAttributes::SingleValue::_initialize();

    // References

    /*PROTECTED REGION ID(EnumerationValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EnumerationValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
    }
        return _any;

    }
    throw "Error";
}

void EnumerationValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::EnumerationElement_ptr _t1 =
                dynamic_cast< ::basicAttributes::EnumerationElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::EnumerationElement >(_t0);*/
        ::basicAttributes::EnumerationValue::setValue(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EnumerationValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE:
        return (bool) m_value;

    }
    throw "Error";
}

void EnumerationValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EnumerationValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getEnumerationValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EnumerationValue::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EnumerationValue::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

