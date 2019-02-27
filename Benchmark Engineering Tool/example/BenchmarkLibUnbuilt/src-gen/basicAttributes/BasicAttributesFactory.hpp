// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BASICATTRIBUTESFACTORY_HPP
#define _BASICATTRIBUTESFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <basicAttributes.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>

namespace basicAttributes
{

    class EXPORT_BASICATTRIBUTES_DLL BasicAttributesFactory : public virtual ::ecore::EFactory
    {
    public:

        static BasicAttributesFactory_ptr _instance();

        virtual AttributeDefinition_ptr createAttributeDefinition();
        virtual AttributeRefinement_ptr createAttributeRefinement();
        virtual AbstractAttributeType_ptr createAbstractAttributeType();
        virtual AbstractValue_ptr createAbstractValue();
        virtual PrimitiveType_ptr createPrimitiveType();
        virtual SingleValue_ptr createSingleValue();
        virtual ArrayValue_ptr createArrayValue();
        virtual ArrayType_ptr createArrayType();
        virtual FloatingPointValue_ptr createFloatingPointValue();
        virtual IntValue_ptr createIntValue();
        virtual StringValue_ptr createStringValue();
        virtual BoolValue_ptr createBoolValue();
        virtual InlineEnumerationType_ptr createInlineEnumerationType();
        virtual EnumerationElement_ptr createEnumerationElement();
        virtual EnumerationValue_ptr createEnumerationValue();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< BasicAttributesFactory > s_holder;

        BasicAttributesFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline AttributeDefinition_ptr create< AttributeDefinition >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createAttributeDefinition();
    }

    template< > inline AttributeRefinement_ptr create< AttributeRefinement >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createAttributeRefinement();
    }

    template< > inline AbstractAttributeType_ptr create< AbstractAttributeType >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createAbstractAttributeType();
    }

    template< > inline AbstractValue_ptr create< AbstractValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createAbstractValue();
    }

    template< > inline PrimitiveType_ptr create< PrimitiveType >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createPrimitiveType();
    }

    template< > inline SingleValue_ptr create< SingleValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createSingleValue();
    }

    template< > inline ArrayValue_ptr create< ArrayValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createArrayValue();
    }

    template< > inline ArrayType_ptr create< ArrayType >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createArrayType();
    }

    template< > inline FloatingPointValue_ptr create< FloatingPointValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createFloatingPointValue();
    }

    template< > inline IntValue_ptr create< IntValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createIntValue();
    }

    template< > inline StringValue_ptr create< StringValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createStringValue();
    }

    template< > inline BoolValue_ptr create< BoolValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createBoolValue();
    }

    template< > inline InlineEnumerationType_ptr create< InlineEnumerationType >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createInlineEnumerationType();
    }

    template< > inline EnumerationElement_ptr create< EnumerationElement >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createEnumerationElement();
    }

    template< > inline EnumerationValue_ptr create< EnumerationValue >()
    {
        auto eFactory =
                BasicAttributesPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< BasicAttributesFactory* >(eFactory.get());
        return packageFactory->createEnumerationValue();
    }

} // basicAttributes

#endif // _BASICATTRIBUTESFACTORY_HPP

