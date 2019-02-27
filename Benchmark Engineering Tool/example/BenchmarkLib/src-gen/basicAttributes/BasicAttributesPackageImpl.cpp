// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/BasicAttributesFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EcorePackage.hpp>

using namespace ::basicAttributes;

BasicAttributesPackage::BasicAttributesPackage()
{

    // Feature definitions of AttributeDefinition
    m_AttributeDefinition__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_AttributeDefinition__type = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AttributeDefinition__defaultvalue = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AttributeRefinement
    m_AttributeRefinement__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_AttributeRefinement__attribute = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractAttributeType
    m_AbstractAttributeType__array = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractValue

    // Feature definitions of PrimitiveType
    m_PrimitiveType__typeName = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of SingleValue

    // Feature definitions of ArrayValue
    m_ArrayValue__values = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ArrayType
    m_ArrayType__length = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of FloatingPointValue
    m_FloatingPointValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of IntValue
    m_IntValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of StringValue
    m_StringValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of BoolValue
    m_BoolValue__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of InlineEnumerationType
    m_InlineEnumerationType__enums = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EnumerationElement
    m_EnumerationElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_EnumerationElement__value = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of EnumerationValue
    m_EnumerationValue__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void BasicAttributesPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = BasicAttributesFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // AttributeDefinition
    m_AttributeDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AttributeDefinitionEClass->setClassifierID(ATTRIBUTEDEFINITION);
    m_AttributeDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AttributeDefinitionEClass);
    // m_AttributeDefinition__name has already been allocated above
    m_AttributeDefinition__name->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME);
    m_AttributeDefinitionEClass->getEStructuralFeatures().push_back(
            m_AttributeDefinition__name);
    // m_AttributeDefinition__type has already been allocated above
    m_AttributeDefinition__type->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE);
    m_AttributeDefinitionEClass->getEStructuralFeatures().push_back(
            m_AttributeDefinition__type);
    // m_AttributeDefinition__defaultvalue has already been allocated above
    m_AttributeDefinition__defaultvalue->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE);
    m_AttributeDefinitionEClass->getEStructuralFeatures().push_back(
            m_AttributeDefinition__defaultvalue);

    // AttributeRefinement
    m_AttributeRefinementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AttributeRefinementEClass->setClassifierID(ATTRIBUTEREFINEMENT);
    m_AttributeRefinementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AttributeRefinementEClass);
    // m_AttributeRefinement__value has already been allocated above
    m_AttributeRefinement__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__VALUE);
    m_AttributeRefinementEClass->getEStructuralFeatures().push_back(
            m_AttributeRefinement__value);
    // m_AttributeRefinement__attribute has already been allocated above
    m_AttributeRefinement__attribute->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ATTRIBUTEREFINEMENT__ATTRIBUTE);
    m_AttributeRefinementEClass->getEStructuralFeatures().push_back(
            m_AttributeRefinement__attribute);

    // AbstractAttributeType
    m_AbstractAttributeTypeEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractAttributeTypeEClass->setClassifierID(ABSTRACTATTRIBUTETYPE);
    m_AbstractAttributeTypeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractAttributeTypeEClass);
    // m_AbstractAttributeType__array has already been allocated above
    m_AbstractAttributeType__array->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY);
    m_AbstractAttributeTypeEClass->getEStructuralFeatures().push_back(
            m_AbstractAttributeType__array);

    // AbstractValue
    m_AbstractValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractValueEClass->setClassifierID(ABSTRACTVALUE);
    m_AbstractValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractValueEClass);

    // PrimitiveType
    m_PrimitiveTypeEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PrimitiveTypeEClass->setClassifierID(PRIMITIVETYPE);
    m_PrimitiveTypeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PrimitiveTypeEClass);
    // m_PrimitiveType__typeName has already been allocated above
    m_PrimitiveType__typeName->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::PRIMITIVETYPE__TYPENAME);
    m_PrimitiveTypeEClass->getEStructuralFeatures().push_back(
            m_PrimitiveType__typeName);

    // SingleValue
    m_SingleValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_SingleValueEClass->setClassifierID(SINGLEVALUE);
    m_SingleValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SingleValueEClass);

    // ArrayValue
    m_ArrayValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ArrayValueEClass->setClassifierID(ARRAYVALUE);
    m_ArrayValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ArrayValueEClass);
    // m_ArrayValue__values has already been allocated above
    m_ArrayValue__values->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ARRAYVALUE__VALUES);
    m_ArrayValueEClass->getEStructuralFeatures().push_back(
            m_ArrayValue__values);

    // ArrayType
    m_ArrayTypeEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ArrayTypeEClass->setClassifierID(ARRAYTYPE);
    m_ArrayTypeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ArrayTypeEClass);
    // m_ArrayType__length has already been allocated above
    m_ArrayType__length->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ARRAYTYPE__LENGTH);
    m_ArrayTypeEClass->getEStructuralFeatures().push_back(m_ArrayType__length);

    // FloatingPointValue
    m_FloatingPointValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_FloatingPointValueEClass->setClassifierID(FLOATINGPOINTVALUE);
    m_FloatingPointValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_FloatingPointValueEClass);
    // m_FloatingPointValue__value has already been allocated above
    m_FloatingPointValue__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::FLOATINGPOINTVALUE__VALUE);
    m_FloatingPointValueEClass->getEStructuralFeatures().push_back(
            m_FloatingPointValue__value);

    // IntValue
    m_IntValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_IntValueEClass->setClassifierID(INTVALUE);
    m_IntValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_IntValueEClass);
    // m_IntValue__value has already been allocated above
    m_IntValue__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::INTVALUE__VALUE);
    m_IntValueEClass->getEStructuralFeatures().push_back(m_IntValue__value);

    // StringValue
    m_StringValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StringValueEClass->setClassifierID(STRINGVALUE);
    m_StringValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StringValueEClass);
    // m_StringValue__value has already been allocated above
    m_StringValue__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::STRINGVALUE__VALUE);
    m_StringValueEClass->getEStructuralFeatures().push_back(
            m_StringValue__value);

    // BoolValue
    m_BoolValueEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_BoolValueEClass->setClassifierID(BOOLVALUE);
    m_BoolValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BoolValueEClass);
    // m_BoolValue__value has already been allocated above
    m_BoolValue__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::BOOLVALUE__VALUE);
    m_BoolValueEClass->getEStructuralFeatures().push_back(m_BoolValue__value);

    // InlineEnumerationType
    m_InlineEnumerationTypeEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_InlineEnumerationTypeEClass->setClassifierID(INLINEENUMERATIONTYPE);
    m_InlineEnumerationTypeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_InlineEnumerationTypeEClass);
    // m_InlineEnumerationType__enums has already been allocated above
    m_InlineEnumerationType__enums->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::INLINEENUMERATIONTYPE__ENUMS);
    m_InlineEnumerationTypeEClass->getEStructuralFeatures().push_back(
            m_InlineEnumerationType__enums);

    // EnumerationElement
    m_EnumerationElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EnumerationElementEClass->setClassifierID(ENUMERATIONELEMENT);
    m_EnumerationElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EnumerationElementEClass);
    // m_EnumerationElement__name has already been allocated above
    m_EnumerationElement__name->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ENUMERATIONELEMENT__NAME);
    m_EnumerationElementEClass->getEStructuralFeatures().push_back(
            m_EnumerationElement__name);
    // m_EnumerationElement__value has already been allocated above
    m_EnumerationElement__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ENUMERATIONELEMENT__VALUE);
    m_EnumerationElementEClass->getEStructuralFeatures().push_back(
            m_EnumerationElement__value);

    // EnumerationValue
    m_EnumerationValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EnumerationValueEClass->setClassifierID(ENUMERATIONVALUE);
    m_EnumerationValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EnumerationValueEClass);
    // m_EnumerationValue__value has already been allocated above
    m_EnumerationValue__value->setFeatureID(
            ::basicAttributes::BasicAttributesPackage::ENUMERATIONVALUE__VALUE);
    m_EnumerationValueEClass->getEStructuralFeatures().push_back(
            m_EnumerationValue__value);

    // Create enums

    m_PRIMITIVE_TYPE_NAMEEEnum = ::ecore::Ptr < ::ecore::EEnum
            > (new ::ecore::EEnum);
    m_PRIMITIVE_TYPE_NAMEEEnum->setClassifierID(PRIMITIVE_TYPE_NAME);
    m_PRIMITIVE_TYPE_NAMEEEnum->setEPackage(_this());
    getEClassifiers().push_back(m_PRIMITIVE_TYPE_NAMEEEnum);

    // Create data types

    m_CardinalityEDataType = ::ecore::Ptr < ::ecore::EDataType
            > (new ::ecore::EDataType);
    m_CardinalityEDataType->setClassifierID(CARDINALITY);
    m_CardinalityEDataType->setEPackage(_this());
    getEClassifiers().push_back(m_CardinalityEDataType);

    // Initialize package
    setName("basicAttributes");
    setNsPrefix("BasicAttributes");
    setNsURI("http://www.ecore.org/base/BasicAttributes");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_PrimitiveTypeEClass->getESuperTypes().push_back(
            m_AbstractAttributeTypeEClass);
    m_SingleValueEClass->getESuperTypes().push_back(m_AbstractValueEClass);
    m_ArrayValueEClass->getESuperTypes().push_back(m_AbstractValueEClass);
    m_FloatingPointValueEClass->getESuperTypes().push_back(m_SingleValueEClass);
    m_IntValueEClass->getESuperTypes().push_back(m_SingleValueEClass);
    m_StringValueEClass->getESuperTypes().push_back(m_SingleValueEClass);
    m_BoolValueEClass->getESuperTypes().push_back(m_SingleValueEClass);
    m_InlineEnumerationTypeEClass->getESuperTypes().push_back(
            m_AbstractAttributeTypeEClass);
    m_EnumerationValueEClass->getESuperTypes().push_back(m_SingleValueEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // AttributeDefinition
    m_AttributeDefinitionEClass->setName("AttributeDefinition");
    m_AttributeDefinitionEClass->setAbstract(false);
    m_AttributeDefinitionEClass->setInterface(false);
    m_AttributeDefinition__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AttributeDefinition__name->setName("name");
    m_AttributeDefinition__name->setDefaultValueLiteral("");
    m_AttributeDefinition__name->setLowerBound(1);
    m_AttributeDefinition__name->setUpperBound(1);
    m_AttributeDefinition__name->setTransient(false);
    m_AttributeDefinition__name->setVolatile(false);
    m_AttributeDefinition__name->setChangeable(true);
    m_AttributeDefinition__name->setUnsettable(false);
    m_AttributeDefinition__name->setID(false);
    m_AttributeDefinition__name->setUnique(true);
    m_AttributeDefinition__name->setDerived(false);
    m_AttributeDefinition__name->setOrdered(true);
    m_AttributeDefinition__type->setEType(m_AbstractAttributeTypeEClass);
    m_AttributeDefinition__type->setName("type");
    m_AttributeDefinition__type->setDefaultValueLiteral("");
    m_AttributeDefinition__type->setLowerBound(1);
    m_AttributeDefinition__type->setUpperBound(1);
    m_AttributeDefinition__type->setTransient(false);
    m_AttributeDefinition__type->setVolatile(false);
    m_AttributeDefinition__type->setChangeable(true);
    m_AttributeDefinition__type->setContainment(true);
    m_AttributeDefinition__type->setResolveProxies(true);
    m_AttributeDefinition__type->setUnique(true);
    m_AttributeDefinition__type->setDerived(false);
    m_AttributeDefinition__type->setOrdered(true);
    m_AttributeDefinition__defaultvalue->setEType(m_AbstractValueEClass);
    m_AttributeDefinition__defaultvalue->setName("defaultvalue");
    m_AttributeDefinition__defaultvalue->setDefaultValueLiteral("");
    m_AttributeDefinition__defaultvalue->setLowerBound(0);
    m_AttributeDefinition__defaultvalue->setUpperBound(1);
    m_AttributeDefinition__defaultvalue->setTransient(false);
    m_AttributeDefinition__defaultvalue->setVolatile(false);
    m_AttributeDefinition__defaultvalue->setChangeable(true);
    m_AttributeDefinition__defaultvalue->setContainment(true);
    m_AttributeDefinition__defaultvalue->setResolveProxies(true);
    m_AttributeDefinition__defaultvalue->setUnique(true);
    m_AttributeDefinition__defaultvalue->setDerived(false);
    m_AttributeDefinition__defaultvalue->setOrdered(true);
    // AttributeRefinement
    m_AttributeRefinementEClass->setName("AttributeRefinement");
    m_AttributeRefinementEClass->setAbstract(false);
    m_AttributeRefinementEClass->setInterface(false);
    m_AttributeRefinement__value->setEType(m_AbstractValueEClass);
    m_AttributeRefinement__value->setName("value");
    m_AttributeRefinement__value->setDefaultValueLiteral("");
    m_AttributeRefinement__value->setLowerBound(1);
    m_AttributeRefinement__value->setUpperBound(1);
    m_AttributeRefinement__value->setTransient(false);
    m_AttributeRefinement__value->setVolatile(false);
    m_AttributeRefinement__value->setChangeable(true);
    m_AttributeRefinement__value->setContainment(true);
    m_AttributeRefinement__value->setResolveProxies(true);
    m_AttributeRefinement__value->setUnique(true);
    m_AttributeRefinement__value->setDerived(false);
    m_AttributeRefinement__value->setOrdered(true);
    m_AttributeRefinement__attribute->setEType(m_AttributeDefinitionEClass);
    m_AttributeRefinement__attribute->setName("attribute");
    m_AttributeRefinement__attribute->setDefaultValueLiteral("");
    m_AttributeRefinement__attribute->setLowerBound(1);
    m_AttributeRefinement__attribute->setUpperBound(1);
    m_AttributeRefinement__attribute->setTransient(false);
    m_AttributeRefinement__attribute->setVolatile(false);
    m_AttributeRefinement__attribute->setChangeable(true);
    m_AttributeRefinement__attribute->setContainment(false);
    m_AttributeRefinement__attribute->setResolveProxies(true);
    m_AttributeRefinement__attribute->setUnique(true);
    m_AttributeRefinement__attribute->setDerived(false);
    m_AttributeRefinement__attribute->setOrdered(true);
    // AbstractAttributeType
    m_AbstractAttributeTypeEClass->setName("AbstractAttributeType");
    m_AbstractAttributeTypeEClass->setAbstract(true);
    m_AbstractAttributeTypeEClass->setInterface(false);
    m_AbstractAttributeType__array->setEType(m_ArrayTypeEClass);
    m_AbstractAttributeType__array->setName("array");
    m_AbstractAttributeType__array->setDefaultValueLiteral("");
    m_AbstractAttributeType__array->setLowerBound(0);
    m_AbstractAttributeType__array->setUpperBound(1);
    m_AbstractAttributeType__array->setTransient(false);
    m_AbstractAttributeType__array->setVolatile(false);
    m_AbstractAttributeType__array->setChangeable(true);
    m_AbstractAttributeType__array->setContainment(true);
    m_AbstractAttributeType__array->setResolveProxies(true);
    m_AbstractAttributeType__array->setUnique(true);
    m_AbstractAttributeType__array->setDerived(false);
    m_AbstractAttributeType__array->setOrdered(true);
    // AbstractValue
    m_AbstractValueEClass->setName("AbstractValue");
    m_AbstractValueEClass->setAbstract(true);
    m_AbstractValueEClass->setInterface(false);
    // PrimitiveType
    m_PrimitiveTypeEClass->setName("PrimitiveType");
    m_PrimitiveTypeEClass->setAbstract(false);
    m_PrimitiveTypeEClass->setInterface(false);
    m_PrimitiveType__typeName->setEType(m_PRIMITIVE_TYPE_NAMEEEnum);
    m_PrimitiveType__typeName->setName("typeName");
    m_PrimitiveType__typeName->setDefaultValueLiteral("");
    m_PrimitiveType__typeName->setLowerBound(1);
    m_PrimitiveType__typeName->setUpperBound(1);
    m_PrimitiveType__typeName->setTransient(false);
    m_PrimitiveType__typeName->setVolatile(false);
    m_PrimitiveType__typeName->setChangeable(true);
    m_PrimitiveType__typeName->setUnsettable(false);
    m_PrimitiveType__typeName->setID(false);
    m_PrimitiveType__typeName->setUnique(true);
    m_PrimitiveType__typeName->setDerived(false);
    m_PrimitiveType__typeName->setOrdered(true);
    // SingleValue
    m_SingleValueEClass->setName("SingleValue");
    m_SingleValueEClass->setAbstract(false);
    m_SingleValueEClass->setInterface(false);
    // ArrayValue
    m_ArrayValueEClass->setName("ArrayValue");
    m_ArrayValueEClass->setAbstract(false);
    m_ArrayValueEClass->setInterface(false);
    m_ArrayValue__values->setEType(m_SingleValueEClass);
    m_ArrayValue__values->setName("values");
    m_ArrayValue__values->setDefaultValueLiteral("");
    m_ArrayValue__values->setLowerBound(0);
    m_ArrayValue__values->setUpperBound(-1);
    m_ArrayValue__values->setTransient(false);
    m_ArrayValue__values->setVolatile(false);
    m_ArrayValue__values->setChangeable(true);
    m_ArrayValue__values->setContainment(true);
    m_ArrayValue__values->setResolveProxies(true);
    m_ArrayValue__values->setUnique(true);
    m_ArrayValue__values->setDerived(false);
    m_ArrayValue__values->setOrdered(true);
    // ArrayType
    m_ArrayTypeEClass->setName("ArrayType");
    m_ArrayTypeEClass->setAbstract(false);
    m_ArrayTypeEClass->setInterface(false);
    m_ArrayType__length->setEType(m_CardinalityEDataType);
    m_ArrayType__length->setName("length");
    m_ArrayType__length->setDefaultValueLiteral("");
    m_ArrayType__length->setLowerBound(0);
    m_ArrayType__length->setUpperBound(1);
    m_ArrayType__length->setTransient(false);
    m_ArrayType__length->setVolatile(false);
    m_ArrayType__length->setChangeable(true);
    m_ArrayType__length->setUnsettable(false);
    m_ArrayType__length->setID(false);
    m_ArrayType__length->setUnique(true);
    m_ArrayType__length->setDerived(false);
    m_ArrayType__length->setOrdered(true);
    // FloatingPointValue
    m_FloatingPointValueEClass->setName("FloatingPointValue");
    m_FloatingPointValueEClass->setAbstract(false);
    m_FloatingPointValueEClass->setInterface(false);
    m_FloatingPointValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEDouble());
    m_FloatingPointValue__value->setName("value");
    m_FloatingPointValue__value->setDefaultValueLiteral("");
    m_FloatingPointValue__value->setLowerBound(1);
    m_FloatingPointValue__value->setUpperBound(1);
    m_FloatingPointValue__value->setTransient(false);
    m_FloatingPointValue__value->setVolatile(false);
    m_FloatingPointValue__value->setChangeable(true);
    m_FloatingPointValue__value->setUnsettable(false);
    m_FloatingPointValue__value->setID(false);
    m_FloatingPointValue__value->setUnique(true);
    m_FloatingPointValue__value->setDerived(false);
    m_FloatingPointValue__value->setOrdered(true);
    // IntValue
    m_IntValueEClass->setName("IntValue");
    m_IntValueEClass->setAbstract(false);
    m_IntValueEClass->setInterface(false);
    m_IntValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_IntValue__value->setName("value");
    m_IntValue__value->setDefaultValueLiteral("");
    m_IntValue__value->setLowerBound(1);
    m_IntValue__value->setUpperBound(1);
    m_IntValue__value->setTransient(false);
    m_IntValue__value->setVolatile(false);
    m_IntValue__value->setChangeable(true);
    m_IntValue__value->setUnsettable(false);
    m_IntValue__value->setID(false);
    m_IntValue__value->setUnique(true);
    m_IntValue__value->setDerived(false);
    m_IntValue__value->setOrdered(true);
    // StringValue
    m_StringValueEClass->setName("StringValue");
    m_StringValueEClass->setAbstract(false);
    m_StringValueEClass->setInterface(false);
    m_StringValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_StringValue__value->setName("value");
    m_StringValue__value->setDefaultValueLiteral("");
    m_StringValue__value->setLowerBound(1);
    m_StringValue__value->setUpperBound(1);
    m_StringValue__value->setTransient(false);
    m_StringValue__value->setVolatile(false);
    m_StringValue__value->setChangeable(true);
    m_StringValue__value->setUnsettable(false);
    m_StringValue__value->setID(false);
    m_StringValue__value->setUnique(true);
    m_StringValue__value->setDerived(false);
    m_StringValue__value->setOrdered(true);
    // BoolValue
    m_BoolValueEClass->setName("BoolValue");
    m_BoolValueEClass->setAbstract(false);
    m_BoolValueEClass->setInterface(false);
    m_BoolValue__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_BoolValue__value->setName("value");
    m_BoolValue__value->setDefaultValueLiteral("");
    m_BoolValue__value->setLowerBound(1);
    m_BoolValue__value->setUpperBound(1);
    m_BoolValue__value->setTransient(false);
    m_BoolValue__value->setVolatile(false);
    m_BoolValue__value->setChangeable(true);
    m_BoolValue__value->setUnsettable(false);
    m_BoolValue__value->setID(false);
    m_BoolValue__value->setUnique(true);
    m_BoolValue__value->setDerived(false);
    m_BoolValue__value->setOrdered(true);
    // InlineEnumerationType
    m_InlineEnumerationTypeEClass->setName("InlineEnumerationType");
    m_InlineEnumerationTypeEClass->setAbstract(false);
    m_InlineEnumerationTypeEClass->setInterface(false);
    m_InlineEnumerationType__enums->setEType(m_EnumerationElementEClass);
    m_InlineEnumerationType__enums->setName("enums");
    m_InlineEnumerationType__enums->setDefaultValueLiteral("");
    m_InlineEnumerationType__enums->setLowerBound(0);
    m_InlineEnumerationType__enums->setUpperBound(-1);
    m_InlineEnumerationType__enums->setTransient(false);
    m_InlineEnumerationType__enums->setVolatile(false);
    m_InlineEnumerationType__enums->setChangeable(true);
    m_InlineEnumerationType__enums->setContainment(true);
    m_InlineEnumerationType__enums->setResolveProxies(true);
    m_InlineEnumerationType__enums->setUnique(true);
    m_InlineEnumerationType__enums->setDerived(false);
    m_InlineEnumerationType__enums->setOrdered(true);
    // EnumerationElement
    m_EnumerationElementEClass->setName("EnumerationElement");
    m_EnumerationElementEClass->setAbstract(false);
    m_EnumerationElementEClass->setInterface(false);
    m_EnumerationElement__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_EnumerationElement__name->setName("name");
    m_EnumerationElement__name->setDefaultValueLiteral("");
    m_EnumerationElement__name->setLowerBound(1);
    m_EnumerationElement__name->setUpperBound(1);
    m_EnumerationElement__name->setTransient(false);
    m_EnumerationElement__name->setVolatile(false);
    m_EnumerationElement__name->setChangeable(true);
    m_EnumerationElement__name->setUnsettable(false);
    m_EnumerationElement__name->setID(false);
    m_EnumerationElement__name->setUnique(true);
    m_EnumerationElement__name->setDerived(false);
    m_EnumerationElement__name->setOrdered(true);
    m_EnumerationElement__value->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_EnumerationElement__value->setName("value");
    m_EnumerationElement__value->setDefaultValueLiteral("");
    m_EnumerationElement__value->setLowerBound(0);
    m_EnumerationElement__value->setUpperBound(1);
    m_EnumerationElement__value->setTransient(false);
    m_EnumerationElement__value->setVolatile(false);
    m_EnumerationElement__value->setChangeable(true);
    m_EnumerationElement__value->setUnsettable(false);
    m_EnumerationElement__value->setID(false);
    m_EnumerationElement__value->setUnique(true);
    m_EnumerationElement__value->setDerived(false);
    m_EnumerationElement__value->setOrdered(true);
    // EnumerationValue
    m_EnumerationValueEClass->setName("EnumerationValue");
    m_EnumerationValueEClass->setAbstract(false);
    m_EnumerationValueEClass->setInterface(false);
    m_EnumerationValue__value->setEType(m_EnumerationElementEClass);
    m_EnumerationValue__value->setName("value");
    m_EnumerationValue__value->setDefaultValueLiteral("");
    m_EnumerationValue__value->setLowerBound(1);
    m_EnumerationValue__value->setUpperBound(1);
    m_EnumerationValue__value->setTransient(false);
    m_EnumerationValue__value->setVolatile(false);
    m_EnumerationValue__value->setChangeable(true);
    m_EnumerationValue__value->setContainment(false);
    m_EnumerationValue__value->setResolveProxies(true);
    m_EnumerationValue__value->setUnique(true);
    m_EnumerationValue__value->setDerived(false);
    m_EnumerationValue__value->setOrdered(true);

    // TODO: Initialize data types

    // Cardinality
    m_CardinalityEDataType->setName("Cardinality");
    m_CardinalityEDataType->setSerializable(true);

    // PRIMITIVE_TYPE_NAME
    m_PRIMITIVE_TYPE_NAMEEEnum->setName("PRIMITIVE_TYPE_NAME");
    m_PRIMITIVE_TYPE_NAMEEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // UInt8
        _el->setName("UInt8");
        _el->setValue(0);
        _el->setLiteral("UInt8");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // UInt16
        _el->setName("UInt16");
        _el->setValue(1);
        _el->setLiteral("UInt16");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // UInt32
        _el->setName("UInt32");
        _el->setValue(2);
        _el->setLiteral("UInt32");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // UInt64
        _el->setName("UInt64");
        _el->setValue(3);
        _el->setLiteral("UInt64");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Int8
        _el->setName("Int8");
        _el->setValue(4);
        _el->setLiteral("Int8");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Int16
        _el->setName("Int16");
        _el->setValue(5);
        _el->setLiteral("Int16");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Int32
        _el->setName("Int32");
        _el->setValue(6);
        _el->setLiteral("Int32");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Int64
        _el->setName("Int64");
        _el->setValue(7);
        _el->setLiteral("Int64");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Float
        _el->setName("Float");
        _el->setValue(8);
        _el->setLiteral("Float");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Double
        _el->setName("Double");
        _el->setValue(9);
        _el->setLiteral("Double");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // String
        _el->setName("String");
        _el->setValue(10);
        _el->setLiteral("String");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // Boolean
        _el->setName("Boolean");
        _el->setValue(11);
        _el->setLiteral("Boolean");
        _el->setEEnum(m_PRIMITIVE_TYPE_NAMEEEnum);
        m_PRIMITIVE_TYPE_NAMEEEnum->getELiterals().push_back(_el);
    }

    _initialize();
}

::ecore::EClass_ptr BasicAttributesPackage::getAttributeDefinition()
{
    return m_AttributeDefinitionEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getAttributeRefinement()
{
    return m_AttributeRefinementEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getAbstractAttributeType()
{
    return m_AbstractAttributeTypeEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getAbstractValue()
{
    return m_AbstractValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getPrimitiveType()
{
    return m_PrimitiveTypeEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getSingleValue()
{
    return m_SingleValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getArrayValue()
{
    return m_ArrayValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getArrayType()
{
    return m_ArrayTypeEClass;
}
::ecore::EDataType_ptr BasicAttributesPackage::getCardinality()
{
    return m_CardinalityEDataType;
}
::ecore::EEnum_ptr BasicAttributesPackage::getPRIMITIVE_TYPE_NAME()
{
    return m_PRIMITIVE_TYPE_NAMEEEnum;
}
::ecore::EClass_ptr BasicAttributesPackage::getFloatingPointValue()
{
    return m_FloatingPointValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getIntValue()
{
    return m_IntValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getStringValue()
{
    return m_StringValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getBoolValue()
{
    return m_BoolValueEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getInlineEnumerationType()
{
    return m_InlineEnumerationTypeEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getEnumerationElement()
{
    return m_EnumerationElementEClass;
}
::ecore::EClass_ptr BasicAttributesPackage::getEnumerationValue()
{
    return m_EnumerationValueEClass;
}

::ecore::EAttribute_ptr BasicAttributesPackage::getAttributeDefinition__name()
{
    return m_AttributeDefinition__name;
}
::ecore::EReference_ptr BasicAttributesPackage::getAttributeDefinition__type()
{
    return m_AttributeDefinition__type;
}
::ecore::EReference_ptr BasicAttributesPackage::getAttributeDefinition__defaultvalue()
{
    return m_AttributeDefinition__defaultvalue;
}
::ecore::EReference_ptr BasicAttributesPackage::getAttributeRefinement__value()
{
    return m_AttributeRefinement__value;
}
::ecore::EReference_ptr BasicAttributesPackage::getAttributeRefinement__attribute()
{
    return m_AttributeRefinement__attribute;
}
::ecore::EReference_ptr BasicAttributesPackage::getAbstractAttributeType__array()
{
    return m_AbstractAttributeType__array;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getPrimitiveType__typeName()
{
    return m_PrimitiveType__typeName;
}
::ecore::EReference_ptr BasicAttributesPackage::getArrayValue__values()
{
    return m_ArrayValue__values;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getArrayType__length()
{
    return m_ArrayType__length;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getFloatingPointValue__value()
{
    return m_FloatingPointValue__value;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getIntValue__value()
{
    return m_IntValue__value;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getStringValue__value()
{
    return m_StringValue__value;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getBoolValue__value()
{
    return m_BoolValue__value;
}
::ecore::EReference_ptr BasicAttributesPackage::getInlineEnumerationType__enums()
{
    return m_InlineEnumerationType__enums;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getEnumerationElement__name()
{
    return m_EnumerationElement__name;
}
::ecore::EAttribute_ptr BasicAttributesPackage::getEnumerationElement__value()
{
    return m_EnumerationElement__value;
}
::ecore::EReference_ptr BasicAttributesPackage::getEnumerationValue__value()
{
    return m_EnumerationValue__value;
}

