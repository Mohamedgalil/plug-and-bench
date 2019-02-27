// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <serviceDefinition/ServiceDefinitionFactory.hpp>
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/ServiceDefModel.hpp>
#include <serviceDefinition/ServiceDefRepository.hpp>
#include <serviceDefinition/AbstractServiceDefinition.hpp>
#include <serviceDefinition/CommRepoImport.hpp>
#include <serviceDefinition/ServiceRepoVersion.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <serviceDefinition/CoordinationServiceDefinition.hpp>
#include <serviceDefinition/ForkingServiceDefinition.hpp>
#include <serviceDefinition/RequestAnswerServiceDefinition.hpp>
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <serviceDefinition/TwoWayCommunicationService.hpp>
#include <serviceDefinition/OptionalCoordinationService.hpp>
#include <serviceDefinition/JoiningServiceDefinition.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::serviceDefinition;

ServiceDefinitionFactory::ServiceDefinitionFactory()
{
}

::ecore::EObject_ptr ServiceDefinitionFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ServiceDefinitionPackage::SERVICEDEFMODEL:
        return createServiceDefModel();
    case ServiceDefinitionPackage::SERVICEDEFREPOSITORY:
        return createServiceDefRepository();
    case ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION:
        return createAbstractServiceDefinition();
    case ServiceDefinitionPackage::COMMREPOIMPORT:
        return createCommRepoImport();
    case ServiceDefinitionPackage::SERVICEREPOVERSION:
        return createServiceRepoVersion();
    case ServiceDefinitionPackage::SERVICEPROPERTY:
        return createServiceProperty();
    case ServiceDefinitionPackage::COMMUNICATIONSERVICEDEFINITION:
        return createCommunicationServiceDefinition();
    case ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION:
        return createCoordinationServiceDefinition();
    case ServiceDefinitionPackage::FORKINGSERVICEDEFINITION:
        return createForkingServiceDefinition();
    case ServiceDefinitionPackage::REQUESTANSWERSERVICEDEFINITION:
        return createRequestAnswerServiceDefinition();
    case ServiceDefinitionPackage::ONEWAYCOMMUNICATIONSERVICE:
        return createOneWayCommunicationService();
    case ServiceDefinitionPackage::TWOWAYCOMMUNICATIONSERVICE:
        return createTwoWayCommunicationService();
    case ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE:
        return createOptionalCoordinationService();
    case ServiceDefinitionPackage::JOININGSERVICEDEFINITION:
        return createJoiningServiceDefinition();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ServiceDefinitionFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ServiceDefinitionFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ServiceDefModel_ptr ServiceDefinitionFactory::createServiceDefModel()
{
    return ::ecore::Ptr < ServiceDefModel > (new ServiceDefModel);
}
ServiceDefRepository_ptr ServiceDefinitionFactory::createServiceDefRepository()
{
    return ::ecore::Ptr < ServiceDefRepository > (new ServiceDefRepository);
}
AbstractServiceDefinition_ptr ServiceDefinitionFactory::createAbstractServiceDefinition()
{
    return ::ecore::Ptr < AbstractServiceDefinition
            > (new AbstractServiceDefinition);
}
CommRepoImport_ptr ServiceDefinitionFactory::createCommRepoImport()
{
    return ::ecore::Ptr < CommRepoImport > (new CommRepoImport);
}
ServiceRepoVersion_ptr ServiceDefinitionFactory::createServiceRepoVersion()
{
    return ::ecore::Ptr < ServiceRepoVersion > (new ServiceRepoVersion);
}
ServiceProperty_ptr ServiceDefinitionFactory::createServiceProperty()
{
    return ::ecore::Ptr < ServiceProperty > (new ServiceProperty);
}
CommunicationServiceDefinition_ptr ServiceDefinitionFactory::createCommunicationServiceDefinition()
{
    return ::ecore::Ptr < CommunicationServiceDefinition
            > (new CommunicationServiceDefinition);
}
CoordinationServiceDefinition_ptr ServiceDefinitionFactory::createCoordinationServiceDefinition()
{
    return ::ecore::Ptr < CoordinationServiceDefinition
            > (new CoordinationServiceDefinition);
}
ForkingServiceDefinition_ptr ServiceDefinitionFactory::createForkingServiceDefinition()
{
    return ::ecore::Ptr < ForkingServiceDefinition
            > (new ForkingServiceDefinition);
}
RequestAnswerServiceDefinition_ptr ServiceDefinitionFactory::createRequestAnswerServiceDefinition()
{
    return ::ecore::Ptr < RequestAnswerServiceDefinition
            > (new RequestAnswerServiceDefinition);
}
OneWayCommunicationService_ptr ServiceDefinitionFactory::createOneWayCommunicationService()
{
    return ::ecore::Ptr < OneWayCommunicationService
            > (new OneWayCommunicationService);
}
TwoWayCommunicationService_ptr ServiceDefinitionFactory::createTwoWayCommunicationService()
{
    return ::ecore::Ptr < TwoWayCommunicationService
            > (new TwoWayCommunicationService);
}
OptionalCoordinationService_ptr ServiceDefinitionFactory::createOptionalCoordinationService()
{
    return ::ecore::Ptr < OptionalCoordinationService
            > (new OptionalCoordinationService);
}
JoiningServiceDefinition_ptr ServiceDefinitionFactory::createJoiningServiceDefinition()
{
    return ::ecore::Ptr < JoiningServiceDefinition
            > (new JoiningServiceDefinition);
}

