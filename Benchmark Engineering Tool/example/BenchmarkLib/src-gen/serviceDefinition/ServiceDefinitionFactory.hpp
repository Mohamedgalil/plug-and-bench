// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _SERVICEDEFINITIONFACTORY_HPP
#define _SERVICEDEFINITIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <serviceDefinition.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>

namespace serviceDefinition
{

    class EXPORT_SERVICEDEFINITION_DLL ServiceDefinitionFactory : public virtual ::ecore::EFactory
    {
    public:

        static ServiceDefinitionFactory_ptr _instance();

        virtual ServiceDefModel_ptr createServiceDefModel();
        virtual ServiceDefRepository_ptr createServiceDefRepository();
        virtual AbstractServiceDefinition_ptr createAbstractServiceDefinition();
        virtual CommRepoImport_ptr createCommRepoImport();
        virtual ServiceRepoVersion_ptr createServiceRepoVersion();
        virtual ServiceProperty_ptr createServiceProperty();
        virtual CommunicationServiceDefinition_ptr createCommunicationServiceDefinition();
        virtual CoordinationServiceDefinition_ptr createCoordinationServiceDefinition();
        virtual ForkingServiceDefinition_ptr createForkingServiceDefinition();
        virtual RequestAnswerServiceDefinition_ptr createRequestAnswerServiceDefinition();
        virtual OneWayCommunicationService_ptr createOneWayCommunicationService();
        virtual TwoWayCommunicationService_ptr createTwoWayCommunicationService();
        virtual OptionalCoordinationService_ptr createOptionalCoordinationService();
        virtual JoiningServiceDefinition_ptr createJoiningServiceDefinition();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ServiceDefinitionFactory > s_holder;

        ServiceDefinitionFactory();

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

    template< > inline ServiceDefModel_ptr create< ServiceDefModel >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createServiceDefModel();
    }

    template< > inline ServiceDefRepository_ptr create< ServiceDefRepository >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createServiceDefRepository();
    }

    template< > inline AbstractServiceDefinition_ptr create<
            AbstractServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createAbstractServiceDefinition();
    }

    template< > inline CommRepoImport_ptr create< CommRepoImport >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createCommRepoImport();
    }

    template< > inline ServiceRepoVersion_ptr create< ServiceRepoVersion >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createServiceRepoVersion();
    }

    template< > inline ServiceProperty_ptr create< ServiceProperty >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createServiceProperty();
    }

    template< > inline CommunicationServiceDefinition_ptr create<
            CommunicationServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createCommunicationServiceDefinition();
    }

    template< > inline CoordinationServiceDefinition_ptr create<
            CoordinationServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createCoordinationServiceDefinition();
    }

    template< > inline ForkingServiceDefinition_ptr create<
            ForkingServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createForkingServiceDefinition();
    }

    template< > inline RequestAnswerServiceDefinition_ptr create<
            RequestAnswerServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createRequestAnswerServiceDefinition();
    }

    template< > inline OneWayCommunicationService_ptr create<
            OneWayCommunicationService >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createOneWayCommunicationService();
    }

    template< > inline TwoWayCommunicationService_ptr create<
            TwoWayCommunicationService >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createTwoWayCommunicationService();
    }

    template< > inline OptionalCoordinationService_ptr create<
            OptionalCoordinationService >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createOptionalCoordinationService();
    }

    template< > inline JoiningServiceDefinition_ptr create<
            JoiningServiceDefinition >()
    {
        auto eFactory =
                ServiceDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ServiceDefinitionFactory* >(eFactory.get());
        return packageFactory->createJoiningServiceDefinition();
    }

} // serviceDefinition

#endif // _SERVICEDEFINITIONFACTORY_HPP

