// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/PrimitiveTypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PrimitiveType.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PrimitiveTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void PrimitiveType::_initialize()
{
    // Supertypes
    ::basicAttributes::AbstractAttributeType::_initialize();

    // References

    /*PROTECTED REGION ID(PrimitiveTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PrimitiveType::eGet(::ecore::EInt _featureID,
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
    case ::basicAttributes::BasicAttributesPackage::PRIMITIVETYPE__TYPENAME:
    {
        ::ecorecpp::mapping::any_traits < ::basicAttributes::PRIMITIVE_TYPE_NAME
                > ::toAny(_any, m_typeName);
    }
        return _any;

    }
    throw "Error";
}

void PrimitiveType::eSet(::ecore::EInt _featureID,
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
    case ::basicAttributes::BasicAttributesPackage::PRIMITIVETYPE__TYPENAME:
    {
        ::basicAttributes::PRIMITIVE_TYPE_NAME _t0;
        ::ecorecpp::mapping::any_traits < ::basicAttributes::PRIMITIVE_TYPE_NAME
                > ::fromAny(_newValue, _t0);
        ::basicAttributes::PrimitiveType::setTypeName(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean PrimitiveType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
        return (bool) m_array;
    case ::basicAttributes::BasicAttributesPackage::PRIMITIVETYPE__TYPENAME:
        return ::ecorecpp::mapping::set_traits
                < ::basicAttributes::PRIMITIVE_TYPE_NAME > ::is_set(m_typeName);

    }
    throw "Error";
}

void PrimitiveType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr PrimitiveType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getPrimitiveType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PrimitiveType::_inverseAdd(::ecore::EInt _featureID,
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
void PrimitiveType::_inverseRemove(::ecore::EInt _featureID,
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

