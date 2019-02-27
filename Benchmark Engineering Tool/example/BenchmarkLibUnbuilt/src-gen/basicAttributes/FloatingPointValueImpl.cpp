// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/FloatingPointValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "FloatingPointValue.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(FloatingPointValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void FloatingPointValue::_initialize()
{
    // Supertypes
    ::basicAttributes::SingleValue::_initialize();

    // References

    /*PROTECTED REGION ID(FloatingPointValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject FloatingPointValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::FLOATINGPOINTVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::toAny(_any, m_value);
    }
        return _any;

    }
    throw "Error";
}

void FloatingPointValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::FLOATINGPOINTVALUE__VALUE:
    {
        ::ecore::EDouble _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EDouble
                > ::fromAny(_newValue, _t0);
        ::basicAttributes::FloatingPointValue::setValue(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean FloatingPointValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::FLOATINGPOINTVALUE__VALUE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EDouble
                > ::is_set(m_value);

    }
    throw "Error";
}

void FloatingPointValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr FloatingPointValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getFloatingPointValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void FloatingPointValue::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void FloatingPointValue::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

