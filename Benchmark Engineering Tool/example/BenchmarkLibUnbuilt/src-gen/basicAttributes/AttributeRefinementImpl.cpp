// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AttributeRefinementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeRefinement.hpp"
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AttributeRefinementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

void AttributeRefinement::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(AttributeRefinementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AttributeRefinement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
    }
        return _any;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE:
    {
        if (m_attribute)
            _any = ::ecore::as < ::ecore::EObject > (m_attribute);
    }
        return _any;

    }
    throw "Error";
}

void AttributeRefinement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AbstractValue_ptr _t1 =
                dynamic_cast< ::basicAttributes::AbstractValue* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AbstractValue >(_t0);*/
        ::basicAttributes::AttributeRefinement::setValue(_t1);
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AttributeDefinition_ptr _t1 =
                dynamic_cast< ::basicAttributes::AttributeDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AttributeDefinition >(_t0);*/
        ::basicAttributes::AttributeRefinement::setAttribute(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AttributeRefinement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE:
        return (bool) m_value;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE:
        return (bool) m_attribute;

    }
    throw "Error";
}

void AttributeRefinement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AttributeRefinement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAttributeRefinement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AttributeRefinement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AttributeRefinement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

