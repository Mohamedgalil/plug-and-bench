// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/ServiceDefinitionFactory.hpp>
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
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <coordinationPattern/StatePattern.hpp>
#include <coordinationPattern/ParameterPattern.hpp>
#include <coordinationPattern/DynamicWiringPattern.hpp>
#include <coordinationPattern/MonitoringPattern.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <communicationPattern/RequestAnswerPattern.hpp>
#include <communicationPattern/JoiningPattern.hpp>

using namespace ::serviceDefinition;

ServiceDefinitionPackage::ServiceDefinitionPackage()
{

    // Feature definitions of ServiceDefModel
    m_ServiceDefModel__imports = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ServiceDefModel__repository = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ServiceDefRepository
    m_ServiceDefRepository__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ServiceDefRepository__version = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ServiceDefRepository__services = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractServiceDefinition
    m_AbstractServiceDefinition__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_AbstractServiceDefinition__properties = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CommRepoImport
    m_CommRepoImport__importedNamespace = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of ServiceRepoVersion
    m_ServiceRepoVersion__major = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ServiceRepoVersion__minor = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ServiceRepoVersion__patch = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of ServiceProperty
    m_ServiceProperty__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of CommunicationServiceDefinition

    // Feature definitions of CoordinationServiceDefinition
    m_CoordinationServiceDefinition__statePattern = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_CoordinationServiceDefinition__parameterPattern = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_CoordinationServiceDefinition__wiringPattern = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_CoordinationServiceDefinition__monitoringPattern = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_CoordinationServiceDefinition__services = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of ForkingServiceDefinition
    m_ForkingServiceDefinition__pattern = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of RequestAnswerServiceDefinition
    m_RequestAnswerServiceDefinition__pattern = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of OneWayCommunicationService

    // Feature definitions of TwoWayCommunicationService

    // Feature definitions of OptionalCoordinationService
    m_OptionalCoordinationService__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_OptionalCoordinationService__serviceref = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of JoiningServiceDefinition
    m_JoiningServiceDefinition__pattern = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void ServiceDefinitionPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ServiceDefinitionFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ServiceDefModel
    m_ServiceDefModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ServiceDefModelEClass->setClassifierID(SERVICEDEFMODEL);
    m_ServiceDefModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ServiceDefModelEClass);
    // m_ServiceDefModel__imports has already been allocated above
    m_ServiceDefModel__imports->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__IMPORTS);
    m_ServiceDefModelEClass->getEStructuralFeatures().push_back(
            m_ServiceDefModel__imports);
    // m_ServiceDefModel__repository has already been allocated above
    m_ServiceDefModel__repository->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFMODEL__REPOSITORY);
    m_ServiceDefModelEClass->getEStructuralFeatures().push_back(
            m_ServiceDefModel__repository);

    // ServiceDefRepository
    m_ServiceDefRepositoryEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ServiceDefRepositoryEClass->setClassifierID(SERVICEDEFREPOSITORY);
    m_ServiceDefRepositoryEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ServiceDefRepositoryEClass);
    // m_ServiceDefRepository__name has already been allocated above
    m_ServiceDefRepository__name->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__NAME);
    m_ServiceDefRepositoryEClass->getEStructuralFeatures().push_back(
            m_ServiceDefRepository__name);
    // m_ServiceDefRepository__version has already been allocated above
    m_ServiceDefRepository__version->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__VERSION);
    m_ServiceDefRepositoryEClass->getEStructuralFeatures().push_back(
            m_ServiceDefRepository__version);
    // m_ServiceDefRepository__services has already been allocated above
    m_ServiceDefRepository__services->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEDEFREPOSITORY__SERVICES);
    m_ServiceDefRepositoryEClass->getEStructuralFeatures().push_back(
            m_ServiceDefRepository__services);

    // AbstractServiceDefinition
    m_AbstractServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractServiceDefinitionEClass->setClassifierID(
            ABSTRACTSERVICEDEFINITION);
    m_AbstractServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractServiceDefinitionEClass);
    // m_AbstractServiceDefinition__name has already been allocated above
    m_AbstractServiceDefinition__name->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME);
    m_AbstractServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_AbstractServiceDefinition__name);
    // m_AbstractServiceDefinition__properties has already been allocated above
    m_AbstractServiceDefinition__properties->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES);
    m_AbstractServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_AbstractServiceDefinition__properties);

    // CommRepoImport
    m_CommRepoImportEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommRepoImportEClass->setClassifierID(COMMREPOIMPORT);
    m_CommRepoImportEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommRepoImportEClass);
    // m_CommRepoImport__importedNamespace has already been allocated above
    m_CommRepoImport__importedNamespace->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COMMREPOIMPORT__IMPORTEDNAMESPACE);
    m_CommRepoImportEClass->getEStructuralFeatures().push_back(
            m_CommRepoImport__importedNamespace);

    // ServiceRepoVersion
    m_ServiceRepoVersionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ServiceRepoVersionEClass->setClassifierID(SERVICEREPOVERSION);
    m_ServiceRepoVersionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ServiceRepoVersionEClass);
    // m_ServiceRepoVersion__major has already been allocated above
    m_ServiceRepoVersion__major->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MAJOR);
    m_ServiceRepoVersionEClass->getEStructuralFeatures().push_back(
            m_ServiceRepoVersion__major);
    // m_ServiceRepoVersion__minor has already been allocated above
    m_ServiceRepoVersion__minor->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__MINOR);
    m_ServiceRepoVersionEClass->getEStructuralFeatures().push_back(
            m_ServiceRepoVersion__minor);
    // m_ServiceRepoVersion__patch has already been allocated above
    m_ServiceRepoVersion__patch->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEREPOVERSION__PATCH);
    m_ServiceRepoVersionEClass->getEStructuralFeatures().push_back(
            m_ServiceRepoVersion__patch);

    // ServiceProperty
    m_ServicePropertyEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ServicePropertyEClass->setClassifierID(SERVICEPROPERTY);
    m_ServicePropertyEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ServicePropertyEClass);
    // m_ServiceProperty__name has already been allocated above
    m_ServiceProperty__name->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::SERVICEPROPERTY__NAME);
    m_ServicePropertyEClass->getEStructuralFeatures().push_back(
            m_ServiceProperty__name);

    // CommunicationServiceDefinition
    m_CommunicationServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommunicationServiceDefinitionEClass->setClassifierID(
            COMMUNICATIONSERVICEDEFINITION);
    m_CommunicationServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommunicationServiceDefinitionEClass);

    // CoordinationServiceDefinition
    m_CoordinationServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CoordinationServiceDefinitionEClass->setClassifierID(
            COORDINATIONSERVICEDEFINITION);
    m_CoordinationServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CoordinationServiceDefinitionEClass);
    // m_CoordinationServiceDefinition__statePattern has already been allocated above
    m_CoordinationServiceDefinition__statePattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN);
    m_CoordinationServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_CoordinationServiceDefinition__statePattern);
    // m_CoordinationServiceDefinition__parameterPattern has already been allocated above
    m_CoordinationServiceDefinition__parameterPattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN);
    m_CoordinationServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_CoordinationServiceDefinition__parameterPattern);
    // m_CoordinationServiceDefinition__wiringPattern has already been allocated above
    m_CoordinationServiceDefinition__wiringPattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN);
    m_CoordinationServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_CoordinationServiceDefinition__wiringPattern);
    // m_CoordinationServiceDefinition__monitoringPattern has already been allocated above
    m_CoordinationServiceDefinition__monitoringPattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN);
    m_CoordinationServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_CoordinationServiceDefinition__monitoringPattern);
    // m_CoordinationServiceDefinition__services has already been allocated above
    m_CoordinationServiceDefinition__services->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES);
    m_CoordinationServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_CoordinationServiceDefinition__services);

    // ForkingServiceDefinition
    m_ForkingServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ForkingServiceDefinitionEClass->setClassifierID(FORKINGSERVICEDEFINITION);
    m_ForkingServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ForkingServiceDefinitionEClass);
    // m_ForkingServiceDefinition__pattern has already been allocated above
    m_ForkingServiceDefinition__pattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::FORKINGSERVICEDEFINITION__PATTERN);
    m_ForkingServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_ForkingServiceDefinition__pattern);

    // RequestAnswerServiceDefinition
    m_RequestAnswerServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RequestAnswerServiceDefinitionEClass->setClassifierID(
            REQUESTANSWERSERVICEDEFINITION);
    m_RequestAnswerServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RequestAnswerServiceDefinitionEClass);
    // m_RequestAnswerServiceDefinition__pattern has already been allocated above
    m_RequestAnswerServiceDefinition__pattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::REQUESTANSWERSERVICEDEFINITION__PATTERN);
    m_RequestAnswerServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_RequestAnswerServiceDefinition__pattern);

    // OneWayCommunicationService
    m_OneWayCommunicationServiceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_OneWayCommunicationServiceEClass->setClassifierID(
            ONEWAYCOMMUNICATIONSERVICE);
    m_OneWayCommunicationServiceEClass->setEPackage(_this());
    getEClassifiers().push_back(m_OneWayCommunicationServiceEClass);

    // TwoWayCommunicationService
    m_TwoWayCommunicationServiceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TwoWayCommunicationServiceEClass->setClassifierID(
            TWOWAYCOMMUNICATIONSERVICE);
    m_TwoWayCommunicationServiceEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TwoWayCommunicationServiceEClass);

    // OptionalCoordinationService
    m_OptionalCoordinationServiceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_OptionalCoordinationServiceEClass->setClassifierID(
            OPTIONALCOORDINATIONSERVICE);
    m_OptionalCoordinationServiceEClass->setEPackage(_this());
    getEClassifiers().push_back(m_OptionalCoordinationServiceEClass);
    // m_OptionalCoordinationService__name has already been allocated above
    m_OptionalCoordinationService__name->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__NAME);
    m_OptionalCoordinationServiceEClass->getEStructuralFeatures().push_back(
            m_OptionalCoordinationService__name);
    // m_OptionalCoordinationService__serviceref has already been allocated above
    m_OptionalCoordinationService__serviceref->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE__SERVICEREF);
    m_OptionalCoordinationServiceEClass->getEStructuralFeatures().push_back(
            m_OptionalCoordinationService__serviceref);

    // JoiningServiceDefinition
    m_JoiningServiceDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_JoiningServiceDefinitionEClass->setClassifierID(JOININGSERVICEDEFINITION);
    m_JoiningServiceDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_JoiningServiceDefinitionEClass);
    // m_JoiningServiceDefinition__pattern has already been allocated above
    m_JoiningServiceDefinition__pattern->setFeatureID(
            ::serviceDefinition::ServiceDefinitionPackage::JOININGSERVICEDEFINITION__PATTERN);
    m_JoiningServiceDefinitionEClass->getEStructuralFeatures().push_back(
            m_JoiningServiceDefinition__pattern);

    // Create enums

    // Create data types

    // Initialize package
    setName("serviceDefinition");
    setNsPrefix("ServiceDefinition");
    setNsURI("http://www.ecore.org/service/ServiceDefinition");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_CommunicationServiceDefinitionEClass->getESuperTypes().push_back(
            m_AbstractServiceDefinitionEClass);
    m_CoordinationServiceDefinitionEClass->getESuperTypes().push_back(
            m_AbstractServiceDefinitionEClass);
    m_ForkingServiceDefinitionEClass->getESuperTypes().push_back(
            m_OneWayCommunicationServiceEClass);
    m_RequestAnswerServiceDefinitionEClass->getESuperTypes().push_back(
            m_TwoWayCommunicationServiceEClass);
    m_OneWayCommunicationServiceEClass->getESuperTypes().push_back(
            m_CommunicationServiceDefinitionEClass);
    m_TwoWayCommunicationServiceEClass->getESuperTypes().push_back(
            m_CommunicationServiceDefinitionEClass);
    m_JoiningServiceDefinitionEClass->getESuperTypes().push_back(
            m_OneWayCommunicationServiceEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ServiceDefModel
    m_ServiceDefModelEClass->setName("ServiceDefModel");
    m_ServiceDefModelEClass->setAbstract(false);
    m_ServiceDefModelEClass->setInterface(false);
    m_ServiceDefModel__imports->setEType(m_CommRepoImportEClass);
    m_ServiceDefModel__imports->setName("imports");
    m_ServiceDefModel__imports->setDefaultValueLiteral("");
    m_ServiceDefModel__imports->setLowerBound(0);
    m_ServiceDefModel__imports->setUpperBound(-1);
    m_ServiceDefModel__imports->setTransient(false);
    m_ServiceDefModel__imports->setVolatile(false);
    m_ServiceDefModel__imports->setChangeable(true);
    m_ServiceDefModel__imports->setContainment(true);
    m_ServiceDefModel__imports->setResolveProxies(true);
    m_ServiceDefModel__imports->setUnique(true);
    m_ServiceDefModel__imports->setDerived(false);
    m_ServiceDefModel__imports->setOrdered(true);
    m_ServiceDefModel__repository->setEType(m_ServiceDefRepositoryEClass);
    m_ServiceDefModel__repository->setName("repository");
    m_ServiceDefModel__repository->setDefaultValueLiteral("");
    m_ServiceDefModel__repository->setLowerBound(0);
    m_ServiceDefModel__repository->setUpperBound(1);
    m_ServiceDefModel__repository->setTransient(false);
    m_ServiceDefModel__repository->setVolatile(false);
    m_ServiceDefModel__repository->setChangeable(true);
    m_ServiceDefModel__repository->setContainment(true);
    m_ServiceDefModel__repository->setResolveProxies(true);
    m_ServiceDefModel__repository->setUnique(true);
    m_ServiceDefModel__repository->setDerived(false);
    m_ServiceDefModel__repository->setOrdered(true);
    // ServiceDefRepository
    m_ServiceDefRepositoryEClass->setName("ServiceDefRepository");
    m_ServiceDefRepositoryEClass->setAbstract(false);
    m_ServiceDefRepositoryEClass->setInterface(false);
    m_ServiceDefRepository__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ServiceDefRepository__name->setName("name");
    m_ServiceDefRepository__name->setDefaultValueLiteral("");
    m_ServiceDefRepository__name->setLowerBound(1);
    m_ServiceDefRepository__name->setUpperBound(1);
    m_ServiceDefRepository__name->setTransient(false);
    m_ServiceDefRepository__name->setVolatile(false);
    m_ServiceDefRepository__name->setChangeable(true);
    m_ServiceDefRepository__name->setUnsettable(false);
    m_ServiceDefRepository__name->setID(false);
    m_ServiceDefRepository__name->setUnique(true);
    m_ServiceDefRepository__name->setDerived(false);
    m_ServiceDefRepository__name->setOrdered(true);
    m_ServiceDefRepository__version->setEType(m_ServiceRepoVersionEClass);
    m_ServiceDefRepository__version->setName("version");
    m_ServiceDefRepository__version->setDefaultValueLiteral("");
    m_ServiceDefRepository__version->setLowerBound(0);
    m_ServiceDefRepository__version->setUpperBound(1);
    m_ServiceDefRepository__version->setTransient(false);
    m_ServiceDefRepository__version->setVolatile(false);
    m_ServiceDefRepository__version->setChangeable(true);
    m_ServiceDefRepository__version->setContainment(true);
    m_ServiceDefRepository__version->setResolveProxies(true);
    m_ServiceDefRepository__version->setUnique(true);
    m_ServiceDefRepository__version->setDerived(false);
    m_ServiceDefRepository__version->setOrdered(true);
    m_ServiceDefRepository__services->setEType(
            m_AbstractServiceDefinitionEClass);
    m_ServiceDefRepository__services->setName("services");
    m_ServiceDefRepository__services->setDefaultValueLiteral("");
    m_ServiceDefRepository__services->setLowerBound(0);
    m_ServiceDefRepository__services->setUpperBound(-1);
    m_ServiceDefRepository__services->setTransient(false);
    m_ServiceDefRepository__services->setVolatile(false);
    m_ServiceDefRepository__services->setChangeable(true);
    m_ServiceDefRepository__services->setContainment(true);
    m_ServiceDefRepository__services->setResolveProxies(true);
    m_ServiceDefRepository__services->setUnique(true);
    m_ServiceDefRepository__services->setDerived(false);
    m_ServiceDefRepository__services->setOrdered(true);
    // AbstractServiceDefinition
    m_AbstractServiceDefinitionEClass->setName("AbstractServiceDefinition");
    m_AbstractServiceDefinitionEClass->setAbstract(true);
    m_AbstractServiceDefinitionEClass->setInterface(false);
    m_AbstractServiceDefinition__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AbstractServiceDefinition__name->setName("name");
    m_AbstractServiceDefinition__name->setDefaultValueLiteral("");
    m_AbstractServiceDefinition__name->setLowerBound(1);
    m_AbstractServiceDefinition__name->setUpperBound(1);
    m_AbstractServiceDefinition__name->setTransient(false);
    m_AbstractServiceDefinition__name->setVolatile(false);
    m_AbstractServiceDefinition__name->setChangeable(true);
    m_AbstractServiceDefinition__name->setUnsettable(false);
    m_AbstractServiceDefinition__name->setID(false);
    m_AbstractServiceDefinition__name->setUnique(true);
    m_AbstractServiceDefinition__name->setDerived(false);
    m_AbstractServiceDefinition__name->setOrdered(true);
    m_AbstractServiceDefinition__properties->setEType(m_ServicePropertyEClass);
    m_AbstractServiceDefinition__properties->setName("properties");
    m_AbstractServiceDefinition__properties->setDefaultValueLiteral("");
    m_AbstractServiceDefinition__properties->setLowerBound(0);
    m_AbstractServiceDefinition__properties->setUpperBound(-1);
    m_AbstractServiceDefinition__properties->setTransient(false);
    m_AbstractServiceDefinition__properties->setVolatile(false);
    m_AbstractServiceDefinition__properties->setChangeable(true);
    m_AbstractServiceDefinition__properties->setContainment(true);
    m_AbstractServiceDefinition__properties->setResolveProxies(true);
    m_AbstractServiceDefinition__properties->setUnique(true);
    m_AbstractServiceDefinition__properties->setDerived(false);
    m_AbstractServiceDefinition__properties->setOrdered(true);
    // CommRepoImport
    m_CommRepoImportEClass->setName("CommRepoImport");
    m_CommRepoImportEClass->setAbstract(false);
    m_CommRepoImportEClass->setInterface(false);
    m_CommRepoImport__importedNamespace->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_CommRepoImport__importedNamespace->setName("importedNamespace");
    m_CommRepoImport__importedNamespace->setDefaultValueLiteral("");
    m_CommRepoImport__importedNamespace->setLowerBound(1);
    m_CommRepoImport__importedNamespace->setUpperBound(1);
    m_CommRepoImport__importedNamespace->setTransient(false);
    m_CommRepoImport__importedNamespace->setVolatile(false);
    m_CommRepoImport__importedNamespace->setChangeable(true);
    m_CommRepoImport__importedNamespace->setUnsettable(false);
    m_CommRepoImport__importedNamespace->setID(false);
    m_CommRepoImport__importedNamespace->setUnique(true);
    m_CommRepoImport__importedNamespace->setDerived(false);
    m_CommRepoImport__importedNamespace->setOrdered(true);
    // ServiceRepoVersion
    m_ServiceRepoVersionEClass->setName("ServiceRepoVersion");
    m_ServiceRepoVersionEClass->setAbstract(false);
    m_ServiceRepoVersionEClass->setInterface(false);
    m_ServiceRepoVersion__major->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_ServiceRepoVersion__major->setName("major");
    m_ServiceRepoVersion__major->setDefaultValueLiteral("");
    m_ServiceRepoVersion__major->setLowerBound(1);
    m_ServiceRepoVersion__major->setUpperBound(1);
    m_ServiceRepoVersion__major->setTransient(false);
    m_ServiceRepoVersion__major->setVolatile(false);
    m_ServiceRepoVersion__major->setChangeable(true);
    m_ServiceRepoVersion__major->setUnsettable(false);
    m_ServiceRepoVersion__major->setID(false);
    m_ServiceRepoVersion__major->setUnique(true);
    m_ServiceRepoVersion__major->setDerived(false);
    m_ServiceRepoVersion__major->setOrdered(true);
    m_ServiceRepoVersion__minor->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_ServiceRepoVersion__minor->setName("minor");
    m_ServiceRepoVersion__minor->setDefaultValueLiteral("");
    m_ServiceRepoVersion__minor->setLowerBound(1);
    m_ServiceRepoVersion__minor->setUpperBound(1);
    m_ServiceRepoVersion__minor->setTransient(false);
    m_ServiceRepoVersion__minor->setVolatile(false);
    m_ServiceRepoVersion__minor->setChangeable(true);
    m_ServiceRepoVersion__minor->setUnsettable(false);
    m_ServiceRepoVersion__minor->setID(false);
    m_ServiceRepoVersion__minor->setUnique(true);
    m_ServiceRepoVersion__minor->setDerived(false);
    m_ServiceRepoVersion__minor->setOrdered(true);
    m_ServiceRepoVersion__patch->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_ServiceRepoVersion__patch->setName("patch");
    m_ServiceRepoVersion__patch->setDefaultValueLiteral("");
    m_ServiceRepoVersion__patch->setLowerBound(0);
    m_ServiceRepoVersion__patch->setUpperBound(1);
    m_ServiceRepoVersion__patch->setTransient(false);
    m_ServiceRepoVersion__patch->setVolatile(false);
    m_ServiceRepoVersion__patch->setChangeable(true);
    m_ServiceRepoVersion__patch->setUnsettable(false);
    m_ServiceRepoVersion__patch->setID(false);
    m_ServiceRepoVersion__patch->setUnique(true);
    m_ServiceRepoVersion__patch->setDerived(false);
    m_ServiceRepoVersion__patch->setOrdered(true);
    // ServiceProperty
    m_ServicePropertyEClass->setName("ServiceProperty");
    m_ServicePropertyEClass->setAbstract(false);
    m_ServicePropertyEClass->setInterface(false);
    m_ServiceProperty__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ServiceProperty__name->setName("name");
    m_ServiceProperty__name->setDefaultValueLiteral("");
    m_ServiceProperty__name->setLowerBound(1);
    m_ServiceProperty__name->setUpperBound(1);
    m_ServiceProperty__name->setTransient(false);
    m_ServiceProperty__name->setVolatile(false);
    m_ServiceProperty__name->setChangeable(true);
    m_ServiceProperty__name->setUnsettable(false);
    m_ServiceProperty__name->setID(false);
    m_ServiceProperty__name->setUnique(true);
    m_ServiceProperty__name->setDerived(false);
    m_ServiceProperty__name->setOrdered(true);
    // CommunicationServiceDefinition
    m_CommunicationServiceDefinitionEClass->setName(
            "CommunicationServiceDefinition");
    m_CommunicationServiceDefinitionEClass->setAbstract(true);
    m_CommunicationServiceDefinitionEClass->setInterface(false);
    // CoordinationServiceDefinition
    m_CoordinationServiceDefinitionEClass->setName(
            "CoordinationServiceDefinition");
    m_CoordinationServiceDefinitionEClass->setAbstract(false);
    m_CoordinationServiceDefinitionEClass->setInterface(false);
    m_CoordinationServiceDefinition__statePattern->setEType(
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getStatePattern());
    m_CoordinationServiceDefinition__statePattern->setName("statePattern");
    m_CoordinationServiceDefinition__statePattern->setDefaultValueLiteral("");
    m_CoordinationServiceDefinition__statePattern->setLowerBound(1);
    m_CoordinationServiceDefinition__statePattern->setUpperBound(1);
    m_CoordinationServiceDefinition__statePattern->setTransient(false);
    m_CoordinationServiceDefinition__statePattern->setVolatile(false);
    m_CoordinationServiceDefinition__statePattern->setChangeable(true);
    m_CoordinationServiceDefinition__statePattern->setContainment(true);
    m_CoordinationServiceDefinition__statePattern->setResolveProxies(true);
    m_CoordinationServiceDefinition__statePattern->setUnique(true);
    m_CoordinationServiceDefinition__statePattern->setDerived(false);
    m_CoordinationServiceDefinition__statePattern->setOrdered(true);
    m_CoordinationServiceDefinition__parameterPattern->setEType(
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getParameterPattern());
    m_CoordinationServiceDefinition__parameterPattern->setName(
            "parameterPattern");
    m_CoordinationServiceDefinition__parameterPattern->setDefaultValueLiteral(
            "");
    m_CoordinationServiceDefinition__parameterPattern->setLowerBound(1);
    m_CoordinationServiceDefinition__parameterPattern->setUpperBound(1);
    m_CoordinationServiceDefinition__parameterPattern->setTransient(false);
    m_CoordinationServiceDefinition__parameterPattern->setVolatile(false);
    m_CoordinationServiceDefinition__parameterPattern->setChangeable(true);
    m_CoordinationServiceDefinition__parameterPattern->setContainment(true);
    m_CoordinationServiceDefinition__parameterPattern->setResolveProxies(true);
    m_CoordinationServiceDefinition__parameterPattern->setUnique(true);
    m_CoordinationServiceDefinition__parameterPattern->setDerived(false);
    m_CoordinationServiceDefinition__parameterPattern->setOrdered(true);
    m_CoordinationServiceDefinition__wiringPattern->setEType(
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getDynamicWiringPattern());
    m_CoordinationServiceDefinition__wiringPattern->setName("wiringPattern");
    m_CoordinationServiceDefinition__wiringPattern->setDefaultValueLiteral("");
    m_CoordinationServiceDefinition__wiringPattern->setLowerBound(0);
    m_CoordinationServiceDefinition__wiringPattern->setUpperBound(1);
    m_CoordinationServiceDefinition__wiringPattern->setTransient(false);
    m_CoordinationServiceDefinition__wiringPattern->setVolatile(false);
    m_CoordinationServiceDefinition__wiringPattern->setChangeable(true);
    m_CoordinationServiceDefinition__wiringPattern->setContainment(true);
    m_CoordinationServiceDefinition__wiringPattern->setResolveProxies(true);
    m_CoordinationServiceDefinition__wiringPattern->setUnique(true);
    m_CoordinationServiceDefinition__wiringPattern->setDerived(false);
    m_CoordinationServiceDefinition__wiringPattern->setOrdered(true);
    m_CoordinationServiceDefinition__monitoringPattern->setEType(
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getMonitoringPattern());
    m_CoordinationServiceDefinition__monitoringPattern->setName(
            "monitoringPattern");
    m_CoordinationServiceDefinition__monitoringPattern->setDefaultValueLiteral(
            "");
    m_CoordinationServiceDefinition__monitoringPattern->setLowerBound(0);
    m_CoordinationServiceDefinition__monitoringPattern->setUpperBound(1);
    m_CoordinationServiceDefinition__monitoringPattern->setTransient(false);
    m_CoordinationServiceDefinition__monitoringPattern->setVolatile(false);
    m_CoordinationServiceDefinition__monitoringPattern->setChangeable(true);
    m_CoordinationServiceDefinition__monitoringPattern->setContainment(true);
    m_CoordinationServiceDefinition__monitoringPattern->setResolveProxies(true);
    m_CoordinationServiceDefinition__monitoringPattern->setUnique(true);
    m_CoordinationServiceDefinition__monitoringPattern->setDerived(false);
    m_CoordinationServiceDefinition__monitoringPattern->setOrdered(true);
    m_CoordinationServiceDefinition__services->setEType(
            m_OptionalCoordinationServiceEClass);
    m_CoordinationServiceDefinition__services->setName("services");
    m_CoordinationServiceDefinition__services->setDefaultValueLiteral("");
    m_CoordinationServiceDefinition__services->setLowerBound(0);
    m_CoordinationServiceDefinition__services->setUpperBound(-1);
    m_CoordinationServiceDefinition__services->setTransient(false);
    m_CoordinationServiceDefinition__services->setVolatile(false);
    m_CoordinationServiceDefinition__services->setChangeable(true);
    m_CoordinationServiceDefinition__services->setContainment(true);
    m_CoordinationServiceDefinition__services->setResolveProxies(true);
    m_CoordinationServiceDefinition__services->setUnique(true);
    m_CoordinationServiceDefinition__services->setDerived(false);
    m_CoordinationServiceDefinition__services->setOrdered(true);
    // ForkingServiceDefinition
    m_ForkingServiceDefinitionEClass->setName("ForkingServiceDefinition");
    m_ForkingServiceDefinitionEClass->setAbstract(false);
    m_ForkingServiceDefinitionEClass->setInterface(false);
    m_ForkingServiceDefinition__pattern->setEType(
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getForkingPattern());
    m_ForkingServiceDefinition__pattern->setName("pattern");
    m_ForkingServiceDefinition__pattern->setDefaultValueLiteral("");
    m_ForkingServiceDefinition__pattern->setLowerBound(1);
    m_ForkingServiceDefinition__pattern->setUpperBound(1);
    m_ForkingServiceDefinition__pattern->setTransient(false);
    m_ForkingServiceDefinition__pattern->setVolatile(false);
    m_ForkingServiceDefinition__pattern->setChangeable(true);
    m_ForkingServiceDefinition__pattern->setContainment(true);
    m_ForkingServiceDefinition__pattern->setResolveProxies(true);
    m_ForkingServiceDefinition__pattern->setUnique(true);
    m_ForkingServiceDefinition__pattern->setDerived(false);
    m_ForkingServiceDefinition__pattern->setOrdered(true);
    // RequestAnswerServiceDefinition
    m_RequestAnswerServiceDefinitionEClass->setName(
            "RequestAnswerServiceDefinition");
    m_RequestAnswerServiceDefinitionEClass->setAbstract(false);
    m_RequestAnswerServiceDefinitionEClass->setInterface(false);
    m_RequestAnswerServiceDefinition__pattern->setEType(
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getRequestAnswerPattern());
    m_RequestAnswerServiceDefinition__pattern->setName("pattern");
    m_RequestAnswerServiceDefinition__pattern->setDefaultValueLiteral("");
    m_RequestAnswerServiceDefinition__pattern->setLowerBound(1);
    m_RequestAnswerServiceDefinition__pattern->setUpperBound(1);
    m_RequestAnswerServiceDefinition__pattern->setTransient(false);
    m_RequestAnswerServiceDefinition__pattern->setVolatile(false);
    m_RequestAnswerServiceDefinition__pattern->setChangeable(true);
    m_RequestAnswerServiceDefinition__pattern->setContainment(true);
    m_RequestAnswerServiceDefinition__pattern->setResolveProxies(true);
    m_RequestAnswerServiceDefinition__pattern->setUnique(true);
    m_RequestAnswerServiceDefinition__pattern->setDerived(false);
    m_RequestAnswerServiceDefinition__pattern->setOrdered(true);
    // OneWayCommunicationService
    m_OneWayCommunicationServiceEClass->setName("OneWayCommunicationService");
    m_OneWayCommunicationServiceEClass->setAbstract(true);
    m_OneWayCommunicationServiceEClass->setInterface(false);
    // TwoWayCommunicationService
    m_TwoWayCommunicationServiceEClass->setName("TwoWayCommunicationService");
    m_TwoWayCommunicationServiceEClass->setAbstract(true);
    m_TwoWayCommunicationServiceEClass->setInterface(false);
    // OptionalCoordinationService
    m_OptionalCoordinationServiceEClass->setName("OptionalCoordinationService");
    m_OptionalCoordinationServiceEClass->setAbstract(false);
    m_OptionalCoordinationServiceEClass->setInterface(false);
    m_OptionalCoordinationService__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_OptionalCoordinationService__name->setName("name");
    m_OptionalCoordinationService__name->setDefaultValueLiteral("");
    m_OptionalCoordinationService__name->setLowerBound(1);
    m_OptionalCoordinationService__name->setUpperBound(1);
    m_OptionalCoordinationService__name->setTransient(false);
    m_OptionalCoordinationService__name->setVolatile(false);
    m_OptionalCoordinationService__name->setChangeable(true);
    m_OptionalCoordinationService__name->setUnsettable(false);
    m_OptionalCoordinationService__name->setID(false);
    m_OptionalCoordinationService__name->setUnique(true);
    m_OptionalCoordinationService__name->setDerived(false);
    m_OptionalCoordinationService__name->setOrdered(true);
    m_OptionalCoordinationService__serviceref->setEType(
            m_CommunicationServiceDefinitionEClass);
    m_OptionalCoordinationService__serviceref->setName("serviceref");
    m_OptionalCoordinationService__serviceref->setDefaultValueLiteral("");
    m_OptionalCoordinationService__serviceref->setLowerBound(1);
    m_OptionalCoordinationService__serviceref->setUpperBound(1);
    m_OptionalCoordinationService__serviceref->setTransient(false);
    m_OptionalCoordinationService__serviceref->setVolatile(false);
    m_OptionalCoordinationService__serviceref->setChangeable(true);
    m_OptionalCoordinationService__serviceref->setContainment(false);
    m_OptionalCoordinationService__serviceref->setResolveProxies(true);
    m_OptionalCoordinationService__serviceref->setUnique(true);
    m_OptionalCoordinationService__serviceref->setDerived(false);
    m_OptionalCoordinationService__serviceref->setOrdered(true);
    // JoiningServiceDefinition
    m_JoiningServiceDefinitionEClass->setName("JoiningServiceDefinition");
    m_JoiningServiceDefinitionEClass->setAbstract(false);
    m_JoiningServiceDefinitionEClass->setInterface(false);
    m_JoiningServiceDefinition__pattern->setEType(
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getJoiningPattern());
    m_JoiningServiceDefinition__pattern->setName("pattern");
    m_JoiningServiceDefinition__pattern->setDefaultValueLiteral("");
    m_JoiningServiceDefinition__pattern->setLowerBound(1);
    m_JoiningServiceDefinition__pattern->setUpperBound(1);
    m_JoiningServiceDefinition__pattern->setTransient(false);
    m_JoiningServiceDefinition__pattern->setVolatile(false);
    m_JoiningServiceDefinition__pattern->setChangeable(true);
    m_JoiningServiceDefinition__pattern->setContainment(true);
    m_JoiningServiceDefinition__pattern->setResolveProxies(true);
    m_JoiningServiceDefinition__pattern->setUnique(true);
    m_JoiningServiceDefinition__pattern->setDerived(false);
    m_JoiningServiceDefinition__pattern->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ServiceDefinitionPackage::getServiceDefModel()
{
    return m_ServiceDefModelEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getServiceDefRepository()
{
    return m_ServiceDefRepositoryEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getAbstractServiceDefinition()
{
    return m_AbstractServiceDefinitionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getCommRepoImport()
{
    return m_CommRepoImportEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getServiceRepoVersion()
{
    return m_ServiceRepoVersionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getServiceProperty()
{
    return m_ServicePropertyEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getCommunicationServiceDefinition()
{
    return m_CommunicationServiceDefinitionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition()
{
    return m_CoordinationServiceDefinitionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getForkingServiceDefinition()
{
    return m_ForkingServiceDefinitionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getRequestAnswerServiceDefinition()
{
    return m_RequestAnswerServiceDefinitionEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getOneWayCommunicationService()
{
    return m_OneWayCommunicationServiceEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getTwoWayCommunicationService()
{
    return m_TwoWayCommunicationServiceEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getOptionalCoordinationService()
{
    return m_OptionalCoordinationServiceEClass;
}
::ecore::EClass_ptr ServiceDefinitionPackage::getJoiningServiceDefinition()
{
    return m_JoiningServiceDefinitionEClass;
}

::ecore::EReference_ptr ServiceDefinitionPackage::getServiceDefModel__imports()
{
    return m_ServiceDefModel__imports;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getServiceDefModel__repository()
{
    return m_ServiceDefModel__repository;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getServiceDefRepository__name()
{
    return m_ServiceDefRepository__name;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getServiceDefRepository__version()
{
    return m_ServiceDefRepository__version;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getServiceDefRepository__services()
{
    return m_ServiceDefRepository__services;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getAbstractServiceDefinition__name()
{
    return m_AbstractServiceDefinition__name;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getAbstractServiceDefinition__properties()
{
    return m_AbstractServiceDefinition__properties;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getCommRepoImport__importedNamespace()
{
    return m_CommRepoImport__importedNamespace;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getServiceRepoVersion__major()
{
    return m_ServiceRepoVersion__major;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getServiceRepoVersion__minor()
{
    return m_ServiceRepoVersion__minor;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getServiceRepoVersion__patch()
{
    return m_ServiceRepoVersion__patch;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getServiceProperty__name()
{
    return m_ServiceProperty__name;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition__statePattern()
{
    return m_CoordinationServiceDefinition__statePattern;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition__parameterPattern()
{
    return m_CoordinationServiceDefinition__parameterPattern;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition__wiringPattern()
{
    return m_CoordinationServiceDefinition__wiringPattern;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition__monitoringPattern()
{
    return m_CoordinationServiceDefinition__monitoringPattern;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getCoordinationServiceDefinition__services()
{
    return m_CoordinationServiceDefinition__services;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getForkingServiceDefinition__pattern()
{
    return m_ForkingServiceDefinition__pattern;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getRequestAnswerServiceDefinition__pattern()
{
    return m_RequestAnswerServiceDefinition__pattern;
}
::ecore::EAttribute_ptr ServiceDefinitionPackage::getOptionalCoordinationService__name()
{
    return m_OptionalCoordinationService__name;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getOptionalCoordinationService__serviceref()
{
    return m_OptionalCoordinationService__serviceref;
}
::ecore::EReference_ptr ServiceDefinitionPackage::getJoiningServiceDefinition__pattern()
{
    return m_JoiningServiceDefinition__pattern;
}

