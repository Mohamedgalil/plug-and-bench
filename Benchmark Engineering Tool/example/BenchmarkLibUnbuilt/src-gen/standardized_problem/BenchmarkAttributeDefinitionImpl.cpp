// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/BenchmarkAttributeDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BenchmarkAttributeDefinition.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BenchmarkAttributeDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void BenchmarkAttributeDefinition::_initialize()
{
    // Supertypes
    ::basicAttributes::AttributeDefinition::_initialize();

    // References

    /*PROTECTED REGION ID(BenchmarkAttributeDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BenchmarkAttributeDefinition::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE:
    {
        if (m_type)
            _any = ::ecore::as < ::ecore::EObject > (m_type);
    }
        return _any;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE:
    {
        if (m_defaultvalue)
            _any = ::ecore::as < ::ecore::EObject > (m_defaultvalue);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_description);
    }
        return _any;

    }
    throw "Error";
}

void BenchmarkAttributeDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::basicAttributes::AttributeDefinition::setName(_t0);
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AbstractAttributeType_ptr _t1 =
                dynamic_cast< ::basicAttributes::AbstractAttributeType* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AbstractAttributeType >(_t0);*/
        ::basicAttributes::AttributeDefinition::setType(_t1);
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AbstractValue_ptr _t1 =
                dynamic_cast< ::basicAttributes::AbstractValue* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AbstractValue >(_t0);*/
        ::basicAttributes::AttributeDefinition::setDefaultvalue(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::BenchmarkAttributeDefinition::setDescription(
                _t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BenchmarkAttributeDefinition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE:
        return (bool) m_type;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE:
        return (bool) m_defaultvalue;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_description);

    }
    throw "Error";
}

void BenchmarkAttributeDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BenchmarkAttributeDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getBenchmarkAttributeDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BenchmarkAttributeDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BenchmarkAttributeDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE:
    {
    }
        return;
    case ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

