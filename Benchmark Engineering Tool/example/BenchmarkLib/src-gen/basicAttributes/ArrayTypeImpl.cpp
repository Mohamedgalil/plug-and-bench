// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/ArrayTypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrayType.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ArrayTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void ArrayType::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ArrayTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ArrayType::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ARRAYTYPE__LENGTH:
    {
        ::ecorecpp::mapping::any_traits < ::basicAttributes::Cardinality
                > ::toAny(_any, m_length);
    }
        return _any;

    }
    throw "Error";
}

void ArrayType::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ARRAYTYPE__LENGTH:
    {
        ::basicAttributes::Cardinality _t0;
        ::ecorecpp::mapping::any_traits < ::basicAttributes::Cardinality
                > ::fromAny(_newValue, _t0);
        ::basicAttributes::ArrayType::setLength(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ArrayType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ARRAYTYPE__LENGTH:
        return ::ecorecpp::mapping::set_traits < ::basicAttributes::Cardinality
                > ::is_set(m_length);

    }
    throw "Error";
}

void ArrayType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ArrayType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getArrayType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ArrayType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ArrayType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

