// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <basicAttributes/BasicAttributesFactory.hpp>
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <basicAttributes/AttributeRefinement.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <basicAttributes/PrimitiveType.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <basicAttributes/ArrayValue.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <basicAttributes/FloatingPointValue.hpp>
#include <basicAttributes/IntValue.hpp>
#include <basicAttributes/StringValue.hpp>
#include <basicAttributes/BoolValue.hpp>
#include <basicAttributes/InlineEnumerationType.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <basicAttributes/EnumerationValue.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::basicAttributes;

BasicAttributesFactory::BasicAttributesFactory()
{
}

::ecore::EObject_ptr BasicAttributesFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case BasicAttributesPackage::ATTRIBUTEDEFINITION:
        return createAttributeDefinition();
    case BasicAttributesPackage::ATTRIBUTEREFINEMENT:
        return createAttributeRefinement();
    case BasicAttributesPackage::ABSTRACTATTRIBUTETYPE:
        return createAbstractAttributeType();
    case BasicAttributesPackage::ABSTRACTVALUE:
        return createAbstractValue();
    case BasicAttributesPackage::PRIMITIVETYPE:
        return createPrimitiveType();
    case BasicAttributesPackage::SINGLEVALUE:
        return createSingleValue();
    case BasicAttributesPackage::ARRAYVALUE:
        return createArrayValue();
    case BasicAttributesPackage::ARRAYTYPE:
        return createArrayType();
    case BasicAttributesPackage::FLOATINGPOINTVALUE:
        return createFloatingPointValue();
    case BasicAttributesPackage::INTVALUE:
        return createIntValue();
    case BasicAttributesPackage::STRINGVALUE:
        return createStringValue();
    case BasicAttributesPackage::BOOLVALUE:
        return createBoolValue();
    case BasicAttributesPackage::INLINEENUMERATIONTYPE:
        return createInlineEnumerationType();
    case BasicAttributesPackage::ENUMERATIONELEMENT:
        return createEnumerationElement();
    case BasicAttributesPackage::ENUMERATIONVALUE:
        return createEnumerationValue();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject BasicAttributesFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case BasicAttributesPackage::CARDINALITY:
        return ::ecorecpp::mapping::string_traits
                < ::basicAttributes::Cardinality > ::fromString(_literalValue);
    case BasicAttributesPackage::PRIMITIVE_TYPE_NAME:
    {
        ::ecore::EJavaObject _any;
        BasicAttributesPackage_ptr _epkg =
                dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(getEPackage().get());
        return _epkg->getPRIMITIVE_TYPE_NAME()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString BasicAttributesFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case BasicAttributesPackage::CARDINALITY:
        return ::ecorecpp::mapping::string_traits
                < ::basicAttributes::Cardinality > ::toString(_instanceValue);
    case BasicAttributesPackage::PRIMITIVE_TYPE_NAME:
    {
        BasicAttributesPackage_ptr _epkg = ::ecore::as
                < ::basicAttributes::BasicAttributesPackage > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getPRIMITIVE_TYPE_NAME()->getEEnumLiteral(_value)->getName();
    }
    default:
        throw "IllegalArgumentException";
    }
}

AttributeDefinition_ptr BasicAttributesFactory::createAttributeDefinition()
{
    return ::ecore::Ptr < AttributeDefinition > (new AttributeDefinition);
}
AttributeRefinement_ptr BasicAttributesFactory::createAttributeRefinement()
{
    return ::ecore::Ptr < AttributeRefinement > (new AttributeRefinement);
}
AbstractAttributeType_ptr BasicAttributesFactory::createAbstractAttributeType()
{
    return ::ecore::Ptr < AbstractAttributeType > (new AbstractAttributeType);
}
AbstractValue_ptr BasicAttributesFactory::createAbstractValue()
{
    return ::ecore::Ptr < AbstractValue > (new AbstractValue);
}
PrimitiveType_ptr BasicAttributesFactory::createPrimitiveType()
{
    return ::ecore::Ptr < PrimitiveType > (new PrimitiveType);
}
SingleValue_ptr BasicAttributesFactory::createSingleValue()
{
    return ::ecore::Ptr < SingleValue > (new SingleValue);
}
ArrayValue_ptr BasicAttributesFactory::createArrayValue()
{
    return ::ecore::Ptr < ArrayValue > (new ArrayValue);
}
ArrayType_ptr BasicAttributesFactory::createArrayType()
{
    return ::ecore::Ptr < ArrayType > (new ArrayType);
}
FloatingPointValue_ptr BasicAttributesFactory::createFloatingPointValue()
{
    return ::ecore::Ptr < FloatingPointValue > (new FloatingPointValue);
}
IntValue_ptr BasicAttributesFactory::createIntValue()
{
    return ::ecore::Ptr < IntValue > (new IntValue);
}
StringValue_ptr BasicAttributesFactory::createStringValue()
{
    return ::ecore::Ptr < StringValue > (new StringValue);
}
BoolValue_ptr BasicAttributesFactory::createBoolValue()
{
    return ::ecore::Ptr < BoolValue > (new BoolValue);
}
InlineEnumerationType_ptr BasicAttributesFactory::createInlineEnumerationType()
{
    return ::ecore::Ptr < InlineEnumerationType > (new InlineEnumerationType);
}
EnumerationElement_ptr BasicAttributesFactory::createEnumerationElement()
{
    return ::ecore::Ptr < EnumerationElement > (new EnumerationElement);
}
EnumerationValue_ptr BasicAttributesFactory::createEnumerationValue()
{
    return ::ecore::Ptr < EnumerationValue > (new EnumerationValue);
}

