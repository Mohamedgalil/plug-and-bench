// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTDEFINITIONFACTORY_HPP
#define _COMPONENTDEFINITIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <componentDefinition.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>

namespace componentDefinition
{

    class EXPORT_COMPONENTDEFINITION_DLL ComponentDefinitionFactory : public virtual ::ecore::EFactory
    {
    public:

        static ComponentDefinitionFactory_ptr _instance();

        virtual ComponentDefModel_ptr createComponentDefModel();
        virtual ComponentDefinition_ptr createComponentDefinition();
        virtual Activity_ptr createActivity();
        virtual ActivityExtension_ptr createActivityExtension();
        virtual InputHandler_ptr createInputHandler();
        virtual ServiceRepoImport_ptr createServiceRepoImport();
        virtual OutputPort_ptr createOutputPort();
        virtual RequestPort_ptr createRequestPort();
        virtual InputPort_ptr createInputPort();
        virtual AnswerPort_ptr createAnswerPort();
        virtual ComponentPort_ptr createComponentPort();
        virtual ComponentPortExtension_ptr createComponentPortExtension();
        virtual RequestHandler_ptr createRequestHandler();
        virtual AbstractComponentElement_ptr createAbstractComponentElement();
        virtual ComponentSubNode_ptr createComponentSubNode();
        virtual ComponentSubNodeObserver_ptr createComponentSubNodeObserver();
        virtual InputPortLink_ptr createInputPortLink();
        virtual RequestPortLink_ptr createRequestPortLink();
        virtual AbstractComponentLink_ptr createAbstractComponentLink();
        virtual NamedComponentElement_ptr createNamedComponentElement();
        virtual DerivedComponentElement_ptr createDerivedComponentElement();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ComponentDefinitionFactory > s_holder;

        ComponentDefinitionFactory();

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

    template< > inline ComponentDefModel_ptr create< ComponentDefModel >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentDefModel();
    }

    template< > inline ComponentDefinition_ptr create< ComponentDefinition >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentDefinition();
    }

    template< > inline Activity_ptr create< Activity >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createActivity();
    }

    template< > inline ActivityExtension_ptr create< ActivityExtension >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createActivityExtension();
    }

    template< > inline InputHandler_ptr create< InputHandler >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createInputHandler();
    }

    template< > inline ServiceRepoImport_ptr create< ServiceRepoImport >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createServiceRepoImport();
    }

    template< > inline OutputPort_ptr create< OutputPort >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createOutputPort();
    }

    template< > inline RequestPort_ptr create< RequestPort >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createRequestPort();
    }

    template< > inline InputPort_ptr create< InputPort >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createInputPort();
    }

    template< > inline AnswerPort_ptr create< AnswerPort >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createAnswerPort();
    }

    template< > inline ComponentPort_ptr create< ComponentPort >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentPort();
    }

    template< > inline ComponentPortExtension_ptr create< ComponentPortExtension >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentPortExtension();
    }

    template< > inline RequestHandler_ptr create< RequestHandler >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createRequestHandler();
    }

    template< > inline AbstractComponentElement_ptr create<
            AbstractComponentElement >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createAbstractComponentElement();
    }

    template< > inline ComponentSubNode_ptr create< ComponentSubNode >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentSubNode();
    }

    template< > inline ComponentSubNodeObserver_ptr create<
            ComponentSubNodeObserver >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createComponentSubNodeObserver();
    }

    template< > inline InputPortLink_ptr create< InputPortLink >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createInputPortLink();
    }

    template< > inline RequestPortLink_ptr create< RequestPortLink >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createRequestPortLink();
    }

    template< > inline AbstractComponentLink_ptr create< AbstractComponentLink >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createAbstractComponentLink();
    }

    template< > inline NamedComponentElement_ptr create< NamedComponentElement >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createNamedComponentElement();
    }

    template< > inline DerivedComponentElement_ptr create<
            DerivedComponentElement >()
    {
        auto eFactory =
                ComponentDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentDefinitionFactory* >(eFactory.get());
        return packageFactory->createDerivedComponentElement();
    }

} // componentDefinition

#endif // _COMPONENTDEFINITIONFACTORY_HPP

