// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/IntValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IntValue.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IntValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void IntValue::_initialize()
{
    // Supertypes
    ::basicAttributes::SingleValue::_initialize();

    // References

    /*PROTECTED REGION ID(IntValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IntValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::INTVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::toAny(_any, m_value);
    }
        return _any;

    }
    throw "Error";
}

void IntValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::INTVALUE__VALUE:
    {
        ::ecore::EInt _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EInt
                > ::fromAny(_newValue, _t0);
        ::basicAttributes::IntValue::setValue(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean IntValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::INTVALUE__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EInt
                > ::is_set(m_value);

    }
    throw "Error";
}

void IntValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr IntValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getIntValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IntValue::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IntValue::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

