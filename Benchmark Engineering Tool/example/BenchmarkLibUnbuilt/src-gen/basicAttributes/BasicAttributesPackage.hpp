// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BASICATTRIBUTESPACKAGE_HPP
#define _BASICATTRIBUTESPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <basicAttributes_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL BasicAttributesPackage : public virtual ::ecore::EPackage
{
public:

    static BasicAttributesPackage_ptr _instance();
    static BasicAttributesPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTATTRIBUTETYPE = 0;

    static const int ABSTRACTVALUE = 1;

    static const int ARRAYTYPE = 2;

    static const int ARRAYVALUE = 3;

    static const int ATTRIBUTEDEFINITION = 4;

    static const int ATTRIBUTEREFINEMENT = 5;

    static const int BOOLVALUE = 6;

    static const int CARDINALITY = 7;

    static const int ENUMERATIONELEMENT = 8;

    static const int ENUMERATIONVALUE = 9;

    static const int FLOATINGPOINTVALUE = 10;

    static const int INLINEENUMERATIONTYPE = 11;

    static const int INTVALUE = 12;

    static const int PRIMITIVETYPE = 13;

    static const int PRIMITIVE_TYPE_NAME = 14;

    static const int SINGLEVALUE = 15;

    static const int STRINGVALUE = 16;

    static const int ATTRIBUTEDEFINITION__NAME = 0;

    static const int ATTRIBUTEDEFINITION__TYPE = 1;

    static const int ATTRIBUTEDEFINITION__DEFAULTVALUE = 2;

    static const int ATTRIBUTEREFINEMENT__VALUE = 3;

    static const int ATTRIBUTEREFINEMENT__ATTRIBUTE = 4;

    static const int ABSTRACTATTRIBUTETYPE__ARRAY = 5;

    static const int PRIMITIVETYPE__TYPENAME = 6;

    static const int ARRAYVALUE__VALUES = 7;

    static const int ARRAYTYPE__LENGTH = 8;

    static const int FLOATINGPOINTVALUE__VALUE = 9;

    static const int INTVALUE__VALUE = 10;

    static const int STRINGVALUE__VALUE = 11;

    static const int BOOLVALUE__VALUE = 12;

    static const int INLINEENUMERATIONTYPE__ENUMS = 13;

    static const int ENUMERATIONELEMENT__NAME = 14;

    static const int ENUMERATIONELEMENT__VALUE = 15;

    static const int ENUMERATIONVALUE__VALUE = 16;

    // IDs for classifiers for class AbstractAttributeType 

    // IDs for classifiers for class AbstractValue 

    // IDs for classifiers for class ArrayType 

    // IDs for classifiers for class ArrayValue 

    // IDs for classifiers for class AttributeDefinition 

    // IDs for classifiers for class AttributeRefinement 

    // IDs for classifiers for class BoolValue 

    // IDs for classifiers for class EnumerationElement 

    // IDs for classifiers for class EnumerationValue 

    // IDs for classifiers for class FloatingPointValue 

    // IDs for classifiers for class InlineEnumerationType 

    static const int INLINEENUMERATIONTYPE__ARRAY = ABSTRACTATTRIBUTETYPE__ARRAY;

    // IDs for classifiers for class IntValue 

    // IDs for classifiers for class PrimitiveType 

    static const int PRIMITIVETYPE__ARRAY = ABSTRACTATTRIBUTETYPE__ARRAY;

    // IDs for classifiers for class SingleValue 

    // IDs for classifiers for class StringValue 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getAttributeDefinition();

    virtual ::ecore::EClass_ptr getAttributeRefinement();

    virtual ::ecore::EClass_ptr getAbstractAttributeType();

    virtual ::ecore::EClass_ptr getAbstractValue();

    virtual ::ecore::EClass_ptr getPrimitiveType();

    virtual ::ecore::EClass_ptr getSingleValue();

    virtual ::ecore::EClass_ptr getArrayValue();

    virtual ::ecore::EClass_ptr getArrayType();

    virtual ::ecore::EDataType_ptr getCardinality();

    virtual ::ecore::EEnum_ptr getPRIMITIVE_TYPE_NAME();

    virtual ::ecore::EClass_ptr getFloatingPointValue();

    virtual ::ecore::EClass_ptr getIntValue();

    virtual ::ecore::EClass_ptr getStringValue();

    virtual ::ecore::EClass_ptr getBoolValue();

    virtual ::ecore::EClass_ptr getInlineEnumerationType();

    virtual ::ecore::EClass_ptr getEnumerationElement();

    virtual ::ecore::EClass_ptr getEnumerationValue();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getAttributeDefinition__name();

    virtual ::ecore::EReference_ptr getAttributeDefinition__type();

    virtual ::ecore::EReference_ptr getAttributeDefinition__defaultvalue();

    virtual ::ecore::EReference_ptr getAttributeRefinement__value();

    virtual ::ecore::EReference_ptr getAttributeRefinement__attribute();

    virtual ::ecore::EReference_ptr getAbstractAttributeType__array();

    virtual ::ecore::EAttribute_ptr getPrimitiveType__typeName();

    virtual ::ecore::EReference_ptr getArrayValue__values();

    virtual ::ecore::EAttribute_ptr getArrayType__length();

    virtual ::ecore::EAttribute_ptr getFloatingPointValue__value();

    virtual ::ecore::EAttribute_ptr getIntValue__value();

    virtual ::ecore::EAttribute_ptr getStringValue__value();

    virtual ::ecore::EAttribute_ptr getBoolValue__value();

    virtual ::ecore::EReference_ptr getInlineEnumerationType__enums();

    virtual ::ecore::EAttribute_ptr getEnumerationElement__name();

    virtual ::ecore::EAttribute_ptr getEnumerationElement__value();

    virtual ::ecore::EReference_ptr getEnumerationValue__value();

protected:

    static ::ecore::Ptr< BasicAttributesPackage > s_instance;

    BasicAttributesPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_AttributeDefinitionEClass;

    ::ecore::EClass_ptr m_AttributeRefinementEClass;

    ::ecore::EClass_ptr m_AbstractAttributeTypeEClass;

    ::ecore::EClass_ptr m_AbstractValueEClass;

    ::ecore::EClass_ptr m_PrimitiveTypeEClass;

    ::ecore::EClass_ptr m_SingleValueEClass;

    ::ecore::EClass_ptr m_ArrayValueEClass;

    ::ecore::EClass_ptr m_ArrayTypeEClass;

    ::ecore::EClass_ptr m_FloatingPointValueEClass;

    ::ecore::EClass_ptr m_IntValueEClass;

    ::ecore::EClass_ptr m_StringValueEClass;

    ::ecore::EClass_ptr m_BoolValueEClass;

    ::ecore::EClass_ptr m_InlineEnumerationTypeEClass;

    ::ecore::EClass_ptr m_EnumerationElementEClass;

    ::ecore::EClass_ptr m_EnumerationValueEClass;

    // EEnuminstances 

    ::ecore::EEnum_ptr m_PRIMITIVE_TYPE_NAMEEEnum;

    // EDataType instances 

    ::ecore::EDataType_ptr m_CardinalityEDataType;

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_AttributeDefinition__name;

    ::ecore::EReference_ptr m_AttributeDefinition__type;

    ::ecore::EReference_ptr m_AttributeDefinition__defaultvalue;

    ::ecore::EReference_ptr m_AttributeRefinement__value;

    ::ecore::EReference_ptr m_AttributeRefinement__attribute;

    ::ecore::EReference_ptr m_AbstractAttributeType__array;

    ::ecore::EAttribute_ptr m_PrimitiveType__typeName;

    ::ecore::EReference_ptr m_ArrayValue__values;

    ::ecore::EAttribute_ptr m_ArrayType__length;

    ::ecore::EAttribute_ptr m_FloatingPointValue__value;

    ::ecore::EAttribute_ptr m_IntValue__value;

    ::ecore::EAttribute_ptr m_StringValue__value;

    ::ecore::EAttribute_ptr m_BoolValue__value;

    ::ecore::EReference_ptr m_InlineEnumerationType__enums;

    ::ecore::EAttribute_ptr m_EnumerationElement__name;

    ::ecore::EAttribute_ptr m_EnumerationElement__value;

    ::ecore::EReference_ptr m_EnumerationValue__value;

};

}
 // basicAttributes

#endif // _BASICATTRIBUTESPACKAGE_HPP

