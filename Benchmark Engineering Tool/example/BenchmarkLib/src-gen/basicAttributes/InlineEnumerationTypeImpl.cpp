// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/InlineEnumerationTypeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InlineEnumerationType.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(InlineEnumerationTypeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void InlineEnumerationType::_initialize()
{
    // Supertypes
    ::basicAttributes::AbstractAttributeType::_initialize();

    // References
    for (size_t i = 0; i < m_enums->size(); i++)
    {
        (*m_enums)[i]->_initialize();
    }

    /*PROTECTED REGION ID(InlineEnumerationTypeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InlineEnumerationType::eGet(::ecore::EInt _featureID,
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
    case ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS:
    {
        _any = m_enums->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void InlineEnumerationType::eSet(::ecore::EInt _featureID,
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
    case ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::basicAttributes::InlineEnumerationType::getEnums().clear();
        ::basicAttributes::InlineEnumerationType::getEnums().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InlineEnumerationType::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
        return (bool) m_array;
    case ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS:
        return m_enums && m_enums->size();

    }
    throw "Error";
}

void InlineEnumerationType::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InlineEnumerationType::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getInlineEnumerationType();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void InlineEnumerationType::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void InlineEnumerationType::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

