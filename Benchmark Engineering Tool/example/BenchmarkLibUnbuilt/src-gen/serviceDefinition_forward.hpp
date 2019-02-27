// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _SERVICEDEFINITION_FORWARD_HPP
#define _SERVICEDEFINITION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(serviceDefinition_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace serviceDefinition
{

// EDataType

// EClass

// ServiceDefModel
    class ServiceDefModel;
    using ServiceDefModel_ptr = ::ecore::Ptr<ServiceDefModel>;

// ServiceDefRepository
    class ServiceDefRepository;
    using ServiceDefRepository_ptr = ::ecore::Ptr<ServiceDefRepository>;

// AbstractServiceDefinition
    class AbstractServiceDefinition;
    using AbstractServiceDefinition_ptr = ::ecore::Ptr<AbstractServiceDefinition>;

// CommRepoImport
    class CommRepoImport;
    using CommRepoImport_ptr = ::ecore::Ptr<CommRepoImport>;

// ServiceRepoVersion
    class ServiceRepoVersion;
    using ServiceRepoVersion_ptr = ::ecore::Ptr<ServiceRepoVersion>;

// ServiceProperty
    class ServiceProperty;
    using ServiceProperty_ptr = ::ecore::Ptr<ServiceProperty>;

// CommunicationServiceDefinition
    class CommunicationServiceDefinition;
    using CommunicationServiceDefinition_ptr = ::ecore::Ptr<CommunicationServiceDefinition>;

// CoordinationServiceDefinition
    class CoordinationServiceDefinition;
    using CoordinationServiceDefinition_ptr = ::ecore::Ptr<CoordinationServiceDefinition>;

// ForkingServiceDefinition
    class ForkingServiceDefinition;
    using ForkingServiceDefinition_ptr = ::ecore::Ptr<ForkingServiceDefinition>;

// RequestAnswerServiceDefinition
    class RequestAnswerServiceDefinition;
    using RequestAnswerServiceDefinition_ptr = ::ecore::Ptr<RequestAnswerServiceDefinition>;

// OneWayCommunicationService
    class OneWayCommunicationService;
    using OneWayCommunicationService_ptr = ::ecore::Ptr<OneWayCommunicationService>;

// TwoWayCommunicationService
    class TwoWayCommunicationService;
    using TwoWayCommunicationService_ptr = ::ecore::Ptr<TwoWayCommunicationService>;

// OptionalCoordinationService
    class OptionalCoordinationService;
    using OptionalCoordinationService_ptr = ::ecore::Ptr<OptionalCoordinationService>;

// JoiningServiceDefinition
    class JoiningServiceDefinition;
    using JoiningServiceDefinition_ptr = ::ecore::Ptr<JoiningServiceDefinition>;

// EEnum

// Package & Factory
    class ServiceDefinitionFactory;
    using ServiceDefinitionFactory_ptr = ::ecore::Ptr<ServiceDefinitionFactory>;
    class ServiceDefinitionPackage;
    using ServiceDefinitionPackage_ptr = ::ecore::Ptr<ServiceDefinitionPackage>;

} // serviceDefinition

#endif // _SERVICEDEFINITION_FORWARD_HPP

