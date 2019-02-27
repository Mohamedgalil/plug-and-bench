// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BASICATTRIBUTES_FORWARD_HPP
#define _BASICATTRIBUTES_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(basicAttributes_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace basicAttributes
{

// EDataType
    /*PROTECTED REGION ID(basicAttributes_Cardinality) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    typedef int Cardinality;
    /*PROTECTED REGION END*/

// EClass
// AttributeDefinition
    class AttributeDefinition;
    using AttributeDefinition_ptr = ::ecore::Ptr<AttributeDefinition>;

// AttributeRefinement
    class AttributeRefinement;
    using AttributeRefinement_ptr = ::ecore::Ptr<AttributeRefinement>;

// AbstractAttributeType
    class AbstractAttributeType;
    using AbstractAttributeType_ptr = ::ecore::Ptr<AbstractAttributeType>;

// AbstractValue
    class AbstractValue;
    using AbstractValue_ptr = ::ecore::Ptr<AbstractValue>;

// PrimitiveType
    class PrimitiveType;
    using PrimitiveType_ptr = ::ecore::Ptr<PrimitiveType>;

// SingleValue
    class SingleValue;
    using SingleValue_ptr = ::ecore::Ptr<SingleValue>;

// ArrayValue
    class ArrayValue;
    using ArrayValue_ptr = ::ecore::Ptr<ArrayValue>;

// ArrayType
    class ArrayType;
    using ArrayType_ptr = ::ecore::Ptr<ArrayType>;

// FloatingPointValue
    class FloatingPointValue;
    using FloatingPointValue_ptr = ::ecore::Ptr<FloatingPointValue>;

// IntValue
    class IntValue;
    using IntValue_ptr = ::ecore::Ptr<IntValue>;

// StringValue
    class StringValue;
    using StringValue_ptr = ::ecore::Ptr<StringValue>;

// BoolValue
    class BoolValue;
    using BoolValue_ptr = ::ecore::Ptr<BoolValue>;

// InlineEnumerationType
    class InlineEnumerationType;
    using InlineEnumerationType_ptr = ::ecore::Ptr<InlineEnumerationType>;

// EnumerationElement
    class EnumerationElement;
    using EnumerationElement_ptr = ::ecore::Ptr<EnumerationElement>;

// EnumerationValue
    class EnumerationValue;
    using EnumerationValue_ptr = ::ecore::Ptr<EnumerationValue>;

// EEnum

// PRIMITIVE_TYPE_NAME
    enum class PRIMITIVE_TYPE_NAME
    ;

// Package & Factory
    class BasicAttributesFactory;
    using BasicAttributesFactory_ptr = ::ecore::Ptr<BasicAttributesFactory>;
    class BasicAttributesPackage;
    using BasicAttributesPackage_ptr = ::ecore::Ptr<BasicAttributesPackage>;

} // basicAttributes

#endif // _BASICATTRIBUTES_FORWARD_HPP

