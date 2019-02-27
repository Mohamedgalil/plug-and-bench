// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/ComponentDefinitionFactory.hpp>
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
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <serviceDefinition/TwoWayCommunicationService.hpp>

using namespace ::componentDefinition;

ComponentDefinitionPackage::ComponentDefinitionPackage()
{

    // Feature definitions of ComponentDefModel
    m_ComponentDefModel__component = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ComponentDefModel__imports = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentDefinition
    m_ComponentDefinition__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ComponentDefinition__elements = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of Activity
    m_Activity__extensions = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ActivityExtension

    // Feature definitions of InputHandler
    m_InputHandler__activeQueue = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_InputHandler__inputPort = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ServiceRepoImport
    m_ServiceRepoImport__importedNamespace = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of OutputPort
    m_OutputPort__service = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_OutputPort__activity = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of RequestPort
    m_RequestPort__service = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of InputPort
    m_InputPort__service = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AnswerPort
    m_AnswerPort__service = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentPort
    m_ComponentPort__extensions = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentPortExtension

    // Feature definitions of RequestHandler
    m_RequestHandler__activeQueue = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_RequestHandler__answerPort = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractComponentElement

    // Feature definitions of ComponentSubNode
    m_ComponentSubNode__links = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentSubNodeObserver
    m_ComponentSubNodeObserver__subject = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of InputPortLink
    m_InputPortLink__optional = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_InputPortLink__inputPort = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of RequestPortLink
    m_RequestPortLink__requestPort = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractComponentLink
    m_AbstractComponentLink__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of NamedComponentElement
    m_NamedComponentElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of DerivedComponentElement
    m_DerivedComponentElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void ComponentDefinitionPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ComponentDefinitionFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ComponentDefModel
    m_ComponentDefModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentDefModelEClass->setClassifierID(COMPONENTDEFMODEL);
    m_ComponentDefModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentDefModelEClass);
    // m_ComponentDefModel__component has already been allocated above
    m_ComponentDefModel__component->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT);
    m_ComponentDefModelEClass->getEStructuralFeatures().push_back(
            m_ComponentDefModel__component);
    // m_ComponentDefModel__imports has already been allocated above
    m_ComponentDefModel__imports->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS);
    m_ComponentDefModelEClass->getEStructuralFeatures().push_back(
            m_ComponentDefModel__imports);

    // ComponentDefinition
    m_ComponentDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentDefinitionEClass->setClassifierID(COMPONENTDEFINITION);
    m_ComponentDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentDefinitionEClass);
    // m_ComponentDefinition__name has already been allocated above
    m_ComponentDefinition__name->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFINITION__NAME);
    m_ComponentDefinitionEClass->getEStructuralFeatures().push_back(
            m_ComponentDefinition__name);
    // m_ComponentDefinition__elements has already been allocated above
    m_ComponentDefinition__elements->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFINITION__ELEMENTS);
    m_ComponentDefinitionEClass->getEStructuralFeatures().push_back(
            m_ComponentDefinition__elements);

    // Activity
    m_ActivityEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_ActivityEClass->setClassifierID(ACTIVITY);
    m_ActivityEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ActivityEClass);
    // m_Activity__extensions has already been allocated above
    m_Activity__extensions->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS);
    m_ActivityEClass->getEStructuralFeatures().push_back(
            m_Activity__extensions);

    // ActivityExtension
    m_ActivityExtensionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ActivityExtensionEClass->setClassifierID(ACTIVITYEXTENSION);
    m_ActivityExtensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ActivityExtensionEClass);

    // InputHandler
    m_InputHandlerEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_InputHandlerEClass->setClassifierID(INPUTHANDLER);
    m_InputHandlerEClass->setEPackage(_this());
    getEClassifiers().push_back(m_InputHandlerEClass);
    // m_InputHandler__activeQueue has already been allocated above
    m_InputHandler__activeQueue->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::INPUTHANDLER__ACTIVEQUEUE);
    m_InputHandlerEClass->getEStructuralFeatures().push_back(
            m_InputHandler__activeQueue);
    // m_InputHandler__inputPort has already been allocated above
    m_InputHandler__inputPort->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::INPUTHANDLER__INPUTPORT);
    m_InputHandlerEClass->getEStructuralFeatures().push_back(
            m_InputHandler__inputPort);

    // ServiceRepoImport
    m_ServiceRepoImportEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ServiceRepoImportEClass->setClassifierID(SERVICEREPOIMPORT);
    m_ServiceRepoImportEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ServiceRepoImportEClass);
    // m_ServiceRepoImport__importedNamespace has already been allocated above
    m_ServiceRepoImport__importedNamespace->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::SERVICEREPOIMPORT__IMPORTEDNAMESPACE);
    m_ServiceRepoImportEClass->getEStructuralFeatures().push_back(
            m_ServiceRepoImport__importedNamespace);

    // OutputPort
    m_OutputPortEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_OutputPortEClass->setClassifierID(OUTPUTPORT);
    m_OutputPortEClass->setEPackage(_this());
    getEClassifiers().push_back(m_OutputPortEClass);
    // m_OutputPort__service has already been allocated above
    m_OutputPort__service->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::OUTPUTPORT__SERVICE);
    m_OutputPortEClass->getEStructuralFeatures().push_back(
            m_OutputPort__service);
    // m_OutputPort__activity has already been allocated above
    m_OutputPort__activity->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::OUTPUTPORT__ACTIVITY);
    m_OutputPortEClass->getEStructuralFeatures().push_back(
            m_OutputPort__activity);

    // RequestPort
    m_RequestPortEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RequestPortEClass->setClassifierID(REQUESTPORT);
    m_RequestPortEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RequestPortEClass);
    // m_RequestPort__service has already been allocated above
    m_RequestPort__service->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::REQUESTPORT__SERVICE);
    m_RequestPortEClass->getEStructuralFeatures().push_back(
            m_RequestPort__service);

    // InputPort
    m_InputPortEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_InputPortEClass->setClassifierID(INPUTPORT);
    m_InputPortEClass->setEPackage(_this());
    getEClassifiers().push_back(m_InputPortEClass);
    // m_InputPort__service has already been allocated above
    m_InputPort__service->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::INPUTPORT__SERVICE);
    m_InputPortEClass->getEStructuralFeatures().push_back(m_InputPort__service);

    // AnswerPort
    m_AnswerPortEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_AnswerPortEClass->setClassifierID(ANSWERPORT);
    m_AnswerPortEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AnswerPortEClass);
    // m_AnswerPort__service has already been allocated above
    m_AnswerPort__service->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE);
    m_AnswerPortEClass->getEStructuralFeatures().push_back(
            m_AnswerPort__service);

    // ComponentPort
    m_ComponentPortEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentPortEClass->setClassifierID(COMPONENTPORT);
    m_ComponentPortEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentPortEClass);
    // m_ComponentPort__extensions has already been allocated above
    m_ComponentPort__extensions->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS);
    m_ComponentPortEClass->getEStructuralFeatures().push_back(
            m_ComponentPort__extensions);

    // ComponentPortExtension
    m_ComponentPortExtensionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentPortExtensionEClass->setClassifierID(COMPONENTPORTEXTENSION);
    m_ComponentPortExtensionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentPortExtensionEClass);

    // RequestHandler
    m_RequestHandlerEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RequestHandlerEClass->setClassifierID(REQUESTHANDLER);
    m_RequestHandlerEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RequestHandlerEClass);
    // m_RequestHandler__activeQueue has already been allocated above
    m_RequestHandler__activeQueue->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::REQUESTHANDLER__ACTIVEQUEUE);
    m_RequestHandlerEClass->getEStructuralFeatures().push_back(
            m_RequestHandler__activeQueue);
    // m_RequestHandler__answerPort has already been allocated above
    m_RequestHandler__answerPort->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::REQUESTHANDLER__ANSWERPORT);
    m_RequestHandlerEClass->getEStructuralFeatures().push_back(
            m_RequestHandler__answerPort);

    // AbstractComponentElement
    m_AbstractComponentElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractComponentElementEClass->setClassifierID(ABSTRACTCOMPONENTELEMENT);
    m_AbstractComponentElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractComponentElementEClass);

    // ComponentSubNode
    m_ComponentSubNodeEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentSubNodeEClass->setClassifierID(COMPONENTSUBNODE);
    m_ComponentSubNodeEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentSubNodeEClass);
    // m_ComponentSubNode__links has already been allocated above
    m_ComponentSubNode__links->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS);
    m_ComponentSubNodeEClass->getEStructuralFeatures().push_back(
            m_ComponentSubNode__links);

    // ComponentSubNodeObserver
    m_ComponentSubNodeObserverEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentSubNodeObserverEClass->setClassifierID(COMPONENTSUBNODEOBSERVER);
    m_ComponentSubNodeObserverEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentSubNodeObserverEClass);
    // m_ComponentSubNodeObserver__subject has already been allocated above
    m_ComponentSubNodeObserver__subject->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER__SUBJECT);
    m_ComponentSubNodeObserverEClass->getEStructuralFeatures().push_back(
            m_ComponentSubNodeObserver__subject);

    // InputPortLink
    m_InputPortLinkEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_InputPortLinkEClass->setClassifierID(INPUTPORTLINK);
    m_InputPortLinkEClass->setEPackage(_this());
    getEClassifiers().push_back(m_InputPortLinkEClass);
    // m_InputPortLink__optional has already been allocated above
    m_InputPortLink__optional->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__OPTIONAL);
    m_InputPortLinkEClass->getEStructuralFeatures().push_back(
            m_InputPortLink__optional);
    // m_InputPortLink__inputPort has already been allocated above
    m_InputPortLink__inputPort->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::INPUTPORTLINK__INPUTPORT);
    m_InputPortLinkEClass->getEStructuralFeatures().push_back(
            m_InputPortLink__inputPort);

    // RequestPortLink
    m_RequestPortLinkEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RequestPortLinkEClass->setClassifierID(REQUESTPORTLINK);
    m_RequestPortLinkEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RequestPortLinkEClass);
    // m_RequestPortLink__requestPort has already been allocated above
    m_RequestPortLink__requestPort->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::REQUESTPORTLINK__REQUESTPORT);
    m_RequestPortLinkEClass->getEStructuralFeatures().push_back(
            m_RequestPortLink__requestPort);

    // AbstractComponentLink
    m_AbstractComponentLinkEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractComponentLinkEClass->setClassifierID(ABSTRACTCOMPONENTLINK);
    m_AbstractComponentLinkEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractComponentLinkEClass);
    // m_AbstractComponentLink__name has already been allocated above
    m_AbstractComponentLink__name->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::ABSTRACTCOMPONENTLINK__NAME);
    m_AbstractComponentLinkEClass->getEStructuralFeatures().push_back(
            m_AbstractComponentLink__name);

    // NamedComponentElement
    m_NamedComponentElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_NamedComponentElementEClass->setClassifierID(NAMEDCOMPONENTELEMENT);
    m_NamedComponentElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_NamedComponentElementEClass);
    // m_NamedComponentElement__name has already been allocated above
    m_NamedComponentElement__name->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME);
    m_NamedComponentElementEClass->getEStructuralFeatures().push_back(
            m_NamedComponentElement__name);

    // DerivedComponentElement
    m_DerivedComponentElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DerivedComponentElementEClass->setClassifierID(DERIVEDCOMPONENTELEMENT);
    m_DerivedComponentElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DerivedComponentElementEClass);
    // m_DerivedComponentElement__name has already been allocated above
    m_DerivedComponentElement__name->setFeatureID(
            ::componentDefinition::ComponentDefinitionPackage::DERIVEDCOMPONENTELEMENT__NAME);
    m_DerivedComponentElementEClass->getEStructuralFeatures().push_back(
            m_DerivedComponentElement__name);

    // Create enums

    // Create data types

    // Initialize package
    setName("componentDefinition");
    setNsPrefix("ComponentDefinition");
    setNsURI("http://www.ecore.org/component/ComponentDefinition");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ActivityEClass->getESuperTypes().push_back(m_ComponentSubNodeEClass);
    m_InputHandlerEClass->getESuperTypes().push_back(m_ComponentSubNodeEClass);
    m_OutputPortEClass->getESuperTypes().push_back(m_ComponentPortEClass);
    m_RequestPortEClass->getESuperTypes().push_back(m_ComponentPortEClass);
    m_InputPortEClass->getESuperTypes().push_back(m_ComponentPortEClass);
    m_AnswerPortEClass->getESuperTypes().push_back(m_ComponentPortEClass);
    m_ComponentPortEClass->getESuperTypes().push_back(
            m_NamedComponentElementEClass);
    m_RequestHandlerEClass->getESuperTypes().push_back(
            m_ComponentSubNodeEClass);
    m_ComponentSubNodeEClass->getESuperTypes().push_back(
            m_NamedComponentElementEClass);
    m_ComponentSubNodeObserverEClass->getESuperTypes().push_back(
            m_AbstractComponentLinkEClass);
    m_InputPortLinkEClass->getESuperTypes().push_back(
            m_AbstractComponentLinkEClass);
    m_RequestPortLinkEClass->getESuperTypes().push_back(
            m_AbstractComponentLinkEClass);
    m_NamedComponentElementEClass->getESuperTypes().push_back(
            m_AbstractComponentElementEClass);
    m_DerivedComponentElementEClass->getESuperTypes().push_back(
            m_AbstractComponentElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ComponentDefModel
    m_ComponentDefModelEClass->setName("ComponentDefModel");
    m_ComponentDefModelEClass->setAbstract(false);
    m_ComponentDefModelEClass->setInterface(false);
    m_ComponentDefModel__component->setEType(m_ComponentDefinitionEClass);
    m_ComponentDefModel__component->setName("component");
    m_ComponentDefModel__component->setDefaultValueLiteral("");
    m_ComponentDefModel__component->setLowerBound(0);
    m_ComponentDefModel__component->setUpperBound(1);
    m_ComponentDefModel__component->setTransient(false);
    m_ComponentDefModel__component->setVolatile(false);
    m_ComponentDefModel__component->setChangeable(true);
    m_ComponentDefModel__component->setContainment(true);
    m_ComponentDefModel__component->setResolveProxies(true);
    m_ComponentDefModel__component->setUnique(true);
    m_ComponentDefModel__component->setDerived(false);
    m_ComponentDefModel__component->setOrdered(true);
    m_ComponentDefModel__imports->setEType(m_ServiceRepoImportEClass);
    m_ComponentDefModel__imports->setName("imports");
    m_ComponentDefModel__imports->setDefaultValueLiteral("");
    m_ComponentDefModel__imports->setLowerBound(0);
    m_ComponentDefModel__imports->setUpperBound(-1);
    m_ComponentDefModel__imports->setTransient(false);
    m_ComponentDefModel__imports->setVolatile(false);
    m_ComponentDefModel__imports->setChangeable(true);
    m_ComponentDefModel__imports->setContainment(true);
    m_ComponentDefModel__imports->setResolveProxies(true);
    m_ComponentDefModel__imports->setUnique(true);
    m_ComponentDefModel__imports->setDerived(false);
    m_ComponentDefModel__imports->setOrdered(true);
    // ComponentDefinition
    m_ComponentDefinitionEClass->setName("ComponentDefinition");
    m_ComponentDefinitionEClass->setAbstract(false);
    m_ComponentDefinitionEClass->setInterface(false);
    m_ComponentDefinition__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ComponentDefinition__name->setName("name");
    m_ComponentDefinition__name->setDefaultValueLiteral("");
    m_ComponentDefinition__name->setLowerBound(1);
    m_ComponentDefinition__name->setUpperBound(1);
    m_ComponentDefinition__name->setTransient(false);
    m_ComponentDefinition__name->setVolatile(false);
    m_ComponentDefinition__name->setChangeable(true);
    m_ComponentDefinition__name->setUnsettable(false);
    m_ComponentDefinition__name->setID(false);
    m_ComponentDefinition__name->setUnique(true);
    m_ComponentDefinition__name->setDerived(false);
    m_ComponentDefinition__name->setOrdered(true);
    m_ComponentDefinition__elements->setEType(m_AbstractComponentElementEClass);
    m_ComponentDefinition__elements->setName("elements");
    m_ComponentDefinition__elements->setDefaultValueLiteral("");
    m_ComponentDefinition__elements->setLowerBound(0);
    m_ComponentDefinition__elements->setUpperBound(-1);
    m_ComponentDefinition__elements->setTransient(false);
    m_ComponentDefinition__elements->setVolatile(false);
    m_ComponentDefinition__elements->setChangeable(true);
    m_ComponentDefinition__elements->setContainment(true);
    m_ComponentDefinition__elements->setResolveProxies(true);
    m_ComponentDefinition__elements->setUnique(true);
    m_ComponentDefinition__elements->setDerived(false);
    m_ComponentDefinition__elements->setOrdered(true);
    // Activity
    m_ActivityEClass->setName("Activity");
    m_ActivityEClass->setAbstract(false);
    m_ActivityEClass->setInterface(false);
    m_Activity__extensions->setEType(m_ActivityExtensionEClass);
    m_Activity__extensions->setName("extensions");
    m_Activity__extensions->setDefaultValueLiteral("");
    m_Activity__extensions->setLowerBound(0);
    m_Activity__extensions->setUpperBound(-1);
    m_Activity__extensions->setTransient(false);
    m_Activity__extensions->setVolatile(false);
    m_Activity__extensions->setChangeable(true);
    m_Activity__extensions->setContainment(true);
    m_Activity__extensions->setResolveProxies(true);
    m_Activity__extensions->setUnique(true);
    m_Activity__extensions->setDerived(false);
    m_Activity__extensions->setOrdered(true);
    // ActivityExtension
    m_ActivityExtensionEClass->setName("ActivityExtension");
    m_ActivityExtensionEClass->setAbstract(true);
    m_ActivityExtensionEClass->setInterface(false);
    // InputHandler
    m_InputHandlerEClass->setName("InputHandler");
    m_InputHandlerEClass->setAbstract(false);
    m_InputHandlerEClass->setInterface(false);
    m_InputHandler__activeQueue->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_InputHandler__activeQueue->setName("activeQueue");
    m_InputHandler__activeQueue->setDefaultValueLiteral("");
    m_InputHandler__activeQueue->setLowerBound(1);
    m_InputHandler__activeQueue->setUpperBound(1);
    m_InputHandler__activeQueue->setTransient(false);
    m_InputHandler__activeQueue->setVolatile(false);
    m_InputHandler__activeQueue->setChangeable(true);
    m_InputHandler__activeQueue->setUnsettable(false);
    m_InputHandler__activeQueue->setID(false);
    m_InputHandler__activeQueue->setUnique(true);
    m_InputHandler__activeQueue->setDerived(false);
    m_InputHandler__activeQueue->setOrdered(true);
    m_InputHandler__inputPort->setEType(m_InputPortEClass);
    m_InputHandler__inputPort->setName("inputPort");
    m_InputHandler__inputPort->setDefaultValueLiteral("");
    m_InputHandler__inputPort->setLowerBound(1);
    m_InputHandler__inputPort->setUpperBound(1);
    m_InputHandler__inputPort->setTransient(false);
    m_InputHandler__inputPort->setVolatile(false);
    m_InputHandler__inputPort->setChangeable(true);
    m_InputHandler__inputPort->setContainment(false);
    m_InputHandler__inputPort->setResolveProxies(true);
    m_InputHandler__inputPort->setUnique(true);
    m_InputHandler__inputPort->setDerived(false);
    m_InputHandler__inputPort->setOrdered(true);
    // ServiceRepoImport
    m_ServiceRepoImportEClass->setName("ServiceRepoImport");
    m_ServiceRepoImportEClass->setAbstract(false);
    m_ServiceRepoImportEClass->setInterface(false);
    m_ServiceRepoImport__importedNamespace->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ServiceRepoImport__importedNamespace->setName("importedNamespace");
    m_ServiceRepoImport__importedNamespace->setDefaultValueLiteral("");
    m_ServiceRepoImport__importedNamespace->setLowerBound(1);
    m_ServiceRepoImport__importedNamespace->setUpperBound(1);
    m_ServiceRepoImport__importedNamespace->setTransient(false);
    m_ServiceRepoImport__importedNamespace->setVolatile(false);
    m_ServiceRepoImport__importedNamespace->setChangeable(true);
    m_ServiceRepoImport__importedNamespace->setUnsettable(false);
    m_ServiceRepoImport__importedNamespace->setID(false);
    m_ServiceRepoImport__importedNamespace->setUnique(true);
    m_ServiceRepoImport__importedNamespace->setDerived(false);
    m_ServiceRepoImport__importedNamespace->setOrdered(true);
    // OutputPort
    m_OutputPortEClass->setName("OutputPort");
    m_OutputPortEClass->setAbstract(false);
    m_OutputPortEClass->setInterface(false);
    m_OutputPort__service->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getOneWayCommunicationService());
    m_OutputPort__service->setName("service");
    m_OutputPort__service->setDefaultValueLiteral("");
    m_OutputPort__service->setLowerBound(1);
    m_OutputPort__service->setUpperBound(1);
    m_OutputPort__service->setTransient(false);
    m_OutputPort__service->setVolatile(false);
    m_OutputPort__service->setChangeable(true);
    m_OutputPort__service->setContainment(false);
    m_OutputPort__service->setResolveProxies(true);
    m_OutputPort__service->setUnique(true);
    m_OutputPort__service->setDerived(false);
    m_OutputPort__service->setOrdered(true);
    m_OutputPort__activity->setEType(m_ActivityEClass);
    m_OutputPort__activity->setName("activity");
    m_OutputPort__activity->setDefaultValueLiteral("");
    m_OutputPort__activity->setLowerBound(1);
    m_OutputPort__activity->setUpperBound(1);
    m_OutputPort__activity->setTransient(false);
    m_OutputPort__activity->setVolatile(false);
    m_OutputPort__activity->setChangeable(true);
    m_OutputPort__activity->setContainment(false);
    m_OutputPort__activity->setResolveProxies(true);
    m_OutputPort__activity->setUnique(true);
    m_OutputPort__activity->setDerived(false);
    m_OutputPort__activity->setOrdered(true);
    // RequestPort
    m_RequestPortEClass->setName("RequestPort");
    m_RequestPortEClass->setAbstract(false);
    m_RequestPortEClass->setInterface(false);
    m_RequestPort__service->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getTwoWayCommunicationService());
    m_RequestPort__service->setName("service");
    m_RequestPort__service->setDefaultValueLiteral("");
    m_RequestPort__service->setLowerBound(1);
    m_RequestPort__service->setUpperBound(1);
    m_RequestPort__service->setTransient(false);
    m_RequestPort__service->setVolatile(false);
    m_RequestPort__service->setChangeable(true);
    m_RequestPort__service->setContainment(false);
    m_RequestPort__service->setResolveProxies(true);
    m_RequestPort__service->setUnique(true);
    m_RequestPort__service->setDerived(false);
    m_RequestPort__service->setOrdered(true);
    // InputPort
    m_InputPortEClass->setName("InputPort");
    m_InputPortEClass->setAbstract(false);
    m_InputPortEClass->setInterface(false);
    m_InputPort__service->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getOneWayCommunicationService());
    m_InputPort__service->setName("service");
    m_InputPort__service->setDefaultValueLiteral("");
    m_InputPort__service->setLowerBound(1);
    m_InputPort__service->setUpperBound(1);
    m_InputPort__service->setTransient(false);
    m_InputPort__service->setVolatile(false);
    m_InputPort__service->setChangeable(true);
    m_InputPort__service->setContainment(false);
    m_InputPort__service->setResolveProxies(true);
    m_InputPort__service->setUnique(true);
    m_InputPort__service->setDerived(false);
    m_InputPort__service->setOrdered(true);
    // AnswerPort
    m_AnswerPortEClass->setName("AnswerPort");
    m_AnswerPortEClass->setAbstract(false);
    m_AnswerPortEClass->setInterface(false);
    m_AnswerPort__service->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getTwoWayCommunicationService());
    m_AnswerPort__service->setName("service");
    m_AnswerPort__service->setDefaultValueLiteral("");
    m_AnswerPort__service->setLowerBound(1);
    m_AnswerPort__service->setUpperBound(1);
    m_AnswerPort__service->setTransient(false);
    m_AnswerPort__service->setVolatile(false);
    m_AnswerPort__service->setChangeable(true);
    m_AnswerPort__service->setContainment(false);
    m_AnswerPort__service->setResolveProxies(true);
    m_AnswerPort__service->setUnique(true);
    m_AnswerPort__service->setDerived(false);
    m_AnswerPort__service->setOrdered(true);
    // ComponentPort
    m_ComponentPortEClass->setName("ComponentPort");
    m_ComponentPortEClass->setAbstract(true);
    m_ComponentPortEClass->setInterface(false);
    m_ComponentPort__extensions->setEType(m_ComponentPortExtensionEClass);
    m_ComponentPort__extensions->setName("extensions");
    m_ComponentPort__extensions->setDefaultValueLiteral("");
    m_ComponentPort__extensions->setLowerBound(0);
    m_ComponentPort__extensions->setUpperBound(-1);
    m_ComponentPort__extensions->setTransient(false);
    m_ComponentPort__extensions->setVolatile(false);
    m_ComponentPort__extensions->setChangeable(true);
    m_ComponentPort__extensions->setContainment(true);
    m_ComponentPort__extensions->setResolveProxies(true);
    m_ComponentPort__extensions->setUnique(true);
    m_ComponentPort__extensions->setDerived(false);
    m_ComponentPort__extensions->setOrdered(true);
    // ComponentPortExtension
    m_ComponentPortExtensionEClass->setName("ComponentPortExtension");
    m_ComponentPortExtensionEClass->setAbstract(true);
    m_ComponentPortExtensionEClass->setInterface(false);
    // RequestHandler
    m_RequestHandlerEClass->setName("RequestHandler");
    m_RequestHandlerEClass->setAbstract(false);
    m_RequestHandlerEClass->setInterface(false);
    m_RequestHandler__activeQueue->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_RequestHandler__activeQueue->setName("activeQueue");
    m_RequestHandler__activeQueue->setDefaultValueLiteral("");
    m_RequestHandler__activeQueue->setLowerBound(1);
    m_RequestHandler__activeQueue->setUpperBound(1);
    m_RequestHandler__activeQueue->setTransient(false);
    m_RequestHandler__activeQueue->setVolatile(false);
    m_RequestHandler__activeQueue->setChangeable(true);
    m_RequestHandler__activeQueue->setUnsettable(false);
    m_RequestHandler__activeQueue->setID(false);
    m_RequestHandler__activeQueue->setUnique(true);
    m_RequestHandler__activeQueue->setDerived(false);
    m_RequestHandler__activeQueue->setOrdered(true);
    m_RequestHandler__answerPort->setEType(m_AnswerPortEClass);
    m_RequestHandler__answerPort->setName("answerPort");
    m_RequestHandler__answerPort->setDefaultValueLiteral("");
    m_RequestHandler__answerPort->setLowerBound(1);
    m_RequestHandler__answerPort->setUpperBound(1);
    m_RequestHandler__answerPort->setTransient(false);
    m_RequestHandler__answerPort->setVolatile(false);
    m_RequestHandler__answerPort->setChangeable(true);
    m_RequestHandler__answerPort->setContainment(false);
    m_RequestHandler__answerPort->setResolveProxies(true);
    m_RequestHandler__answerPort->setUnique(true);
    m_RequestHandler__answerPort->setDerived(false);
    m_RequestHandler__answerPort->setOrdered(true);
    // AbstractComponentElement
    m_AbstractComponentElementEClass->setName("AbstractComponentElement");
    m_AbstractComponentElementEClass->setAbstract(true);
    m_AbstractComponentElementEClass->setInterface(false);
    // ComponentSubNode
    m_ComponentSubNodeEClass->setName("ComponentSubNode");
    m_ComponentSubNodeEClass->setAbstract(true);
    m_ComponentSubNodeEClass->setInterface(false);
    m_ComponentSubNode__links->setEType(m_AbstractComponentLinkEClass);
    m_ComponentSubNode__links->setName("links");
    m_ComponentSubNode__links->setDefaultValueLiteral("");
    m_ComponentSubNode__links->setLowerBound(0);
    m_ComponentSubNode__links->setUpperBound(-1);
    m_ComponentSubNode__links->setTransient(false);
    m_ComponentSubNode__links->setVolatile(false);
    m_ComponentSubNode__links->setChangeable(true);
    m_ComponentSubNode__links->setContainment(true);
    m_ComponentSubNode__links->setResolveProxies(true);
    m_ComponentSubNode__links->setUnique(true);
    m_ComponentSubNode__links->setDerived(false);
    m_ComponentSubNode__links->setOrdered(true);
    // ComponentSubNodeObserver
    m_ComponentSubNodeObserverEClass->setName("ComponentSubNodeObserver");
    m_ComponentSubNodeObserverEClass->setAbstract(false);
    m_ComponentSubNodeObserverEClass->setInterface(false);
    m_ComponentSubNodeObserver__subject->setEType(m_ComponentSubNodeEClass);
    m_ComponentSubNodeObserver__subject->setName("subject");
    m_ComponentSubNodeObserver__subject->setDefaultValueLiteral("");
    m_ComponentSubNodeObserver__subject->setLowerBound(1);
    m_ComponentSubNodeObserver__subject->setUpperBound(1);
    m_ComponentSubNodeObserver__subject->setTransient(false);
    m_ComponentSubNodeObserver__subject->setVolatile(false);
    m_ComponentSubNodeObserver__subject->setChangeable(true);
    m_ComponentSubNodeObserver__subject->setContainment(false);
    m_ComponentSubNodeObserver__subject->setResolveProxies(true);
    m_ComponentSubNodeObserver__subject->setUnique(true);
    m_ComponentSubNodeObserver__subject->setDerived(false);
    m_ComponentSubNodeObserver__subject->setOrdered(true);
    // InputPortLink
    m_InputPortLinkEClass->setName("InputPortLink");
    m_InputPortLinkEClass->setAbstract(false);
    m_InputPortLinkEClass->setInterface(false);
    m_InputPortLink__optional->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBoolean());
    m_InputPortLink__optional->setName("optional");
    m_InputPortLink__optional->setDefaultValueLiteral("");
    m_InputPortLink__optional->setLowerBound(1);
    m_InputPortLink__optional->setUpperBound(1);
    m_InputPortLink__optional->setTransient(false);
    m_InputPortLink__optional->setVolatile(false);
    m_InputPortLink__optional->setChangeable(true);
    m_InputPortLink__optional->setUnsettable(false);
    m_InputPortLink__optional->setID(false);
    m_InputPortLink__optional->setUnique(true);
    m_InputPortLink__optional->setDerived(false);
    m_InputPortLink__optional->setOrdered(true);
    m_InputPortLink__inputPort->setEType(m_InputPortEClass);
    m_InputPortLink__inputPort->setName("inputPort");
    m_InputPortLink__inputPort->setDefaultValueLiteral("");
    m_InputPortLink__inputPort->setLowerBound(1);
    m_InputPortLink__inputPort->setUpperBound(1);
    m_InputPortLink__inputPort->setTransient(false);
    m_InputPortLink__inputPort->setVolatile(false);
    m_InputPortLink__inputPort->setChangeable(true);
    m_InputPortLink__inputPort->setContainment(false);
    m_InputPortLink__inputPort->setResolveProxies(true);
    m_InputPortLink__inputPort->setUnique(true);
    m_InputPortLink__inputPort->setDerived(false);
    m_InputPortLink__inputPort->setOrdered(true);
    // RequestPortLink
    m_RequestPortLinkEClass->setName("RequestPortLink");
    m_RequestPortLinkEClass->setAbstract(false);
    m_RequestPortLinkEClass->setInterface(false);
    m_RequestPortLink__requestPort->setEType(m_RequestPortEClass);
    m_RequestPortLink__requestPort->setName("requestPort");
    m_RequestPortLink__requestPort->setDefaultValueLiteral("");
    m_RequestPortLink__requestPort->setLowerBound(1);
    m_RequestPortLink__requestPort->setUpperBound(1);
    m_RequestPortLink__requestPort->setTransient(false);
    m_RequestPortLink__requestPort->setVolatile(false);
    m_RequestPortLink__requestPort->setChangeable(true);
    m_RequestPortLink__requestPort->setContainment(false);
    m_RequestPortLink__requestPort->setResolveProxies(true);
    m_RequestPortLink__requestPort->setUnique(true);
    m_RequestPortLink__requestPort->setDerived(false);
    m_RequestPortLink__requestPort->setOrdered(true);
    // AbstractComponentLink
    m_AbstractComponentLinkEClass->setName("AbstractComponentLink");
    m_AbstractComponentLinkEClass->setAbstract(true);
    m_AbstractComponentLinkEClass->setInterface(false);
    m_AbstractComponentLink__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AbstractComponentLink__name->setName("name");
    m_AbstractComponentLink__name->setDefaultValueLiteral("");
    m_AbstractComponentLink__name->setLowerBound(1);
    m_AbstractComponentLink__name->setUpperBound(1);
    m_AbstractComponentLink__name->setTransient(true);
    m_AbstractComponentLink__name->setVolatile(true);
    m_AbstractComponentLink__name->setChangeable(false);
    m_AbstractComponentLink__name->setUnsettable(false);
    m_AbstractComponentLink__name->setID(false);
    m_AbstractComponentLink__name->setUnique(true);
    m_AbstractComponentLink__name->setDerived(true);
    m_AbstractComponentLink__name->setOrdered(true);
    // NamedComponentElement
    m_NamedComponentElementEClass->setName("NamedComponentElement");
    m_NamedComponentElementEClass->setAbstract(true);
    m_NamedComponentElementEClass->setInterface(false);
    m_NamedComponentElement__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_NamedComponentElement__name->setName("name");
    m_NamedComponentElement__name->setDefaultValueLiteral("");
    m_NamedComponentElement__name->setLowerBound(1);
    m_NamedComponentElement__name->setUpperBound(1);
    m_NamedComponentElement__name->setTransient(false);
    m_NamedComponentElement__name->setVolatile(false);
    m_NamedComponentElement__name->setChangeable(true);
    m_NamedComponentElement__name->setUnsettable(false);
    m_NamedComponentElement__name->setID(false);
    m_NamedComponentElement__name->setUnique(true);
    m_NamedComponentElement__name->setDerived(false);
    m_NamedComponentElement__name->setOrdered(true);
    // DerivedComponentElement
    m_DerivedComponentElementEClass->setName("DerivedComponentElement");
    m_DerivedComponentElementEClass->setAbstract(true);
    m_DerivedComponentElementEClass->setInterface(false);
    m_DerivedComponentElement__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_DerivedComponentElement__name->setName("name");
    m_DerivedComponentElement__name->setDefaultValueLiteral("");
    m_DerivedComponentElement__name->setLowerBound(1);
    m_DerivedComponentElement__name->setUpperBound(1);
    m_DerivedComponentElement__name->setTransient(true);
    m_DerivedComponentElement__name->setVolatile(true);
    m_DerivedComponentElement__name->setChangeable(false);
    m_DerivedComponentElement__name->setUnsettable(true);
    m_DerivedComponentElement__name->setID(false);
    m_DerivedComponentElement__name->setUnique(true);
    m_DerivedComponentElement__name->setDerived(true);
    m_DerivedComponentElement__name->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ComponentDefinitionPackage::getComponentDefModel()
{
    return m_ComponentDefModelEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getComponentDefinition()
{
    return m_ComponentDefinitionEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getActivity()
{
    return m_ActivityEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getActivityExtension()
{
    return m_ActivityExtensionEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getInputHandler()
{
    return m_InputHandlerEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getServiceRepoImport()
{
    return m_ServiceRepoImportEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getOutputPort()
{
    return m_OutputPortEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getRequestPort()
{
    return m_RequestPortEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getInputPort()
{
    return m_InputPortEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getAnswerPort()
{
    return m_AnswerPortEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getComponentPort()
{
    return m_ComponentPortEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getComponentPortExtension()
{
    return m_ComponentPortExtensionEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getRequestHandler()
{
    return m_RequestHandlerEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getAbstractComponentElement()
{
    return m_AbstractComponentElementEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getComponentSubNode()
{
    return m_ComponentSubNodeEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getComponentSubNodeObserver()
{
    return m_ComponentSubNodeObserverEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getInputPortLink()
{
    return m_InputPortLinkEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getRequestPortLink()
{
    return m_RequestPortLinkEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getAbstractComponentLink()
{
    return m_AbstractComponentLinkEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getNamedComponentElement()
{
    return m_NamedComponentElementEClass;
}
::ecore::EClass_ptr ComponentDefinitionPackage::getDerivedComponentElement()
{
    return m_DerivedComponentElementEClass;
}

::ecore::EReference_ptr ComponentDefinitionPackage::getComponentDefModel__component()
{
    return m_ComponentDefModel__component;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getComponentDefModel__imports()
{
    return m_ComponentDefModel__imports;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getComponentDefinition__name()
{
    return m_ComponentDefinition__name;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getComponentDefinition__elements()
{
    return m_ComponentDefinition__elements;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getNamedComponentElement__name()
{
    return m_NamedComponentElement__name;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getComponentSubNode__links()
{
    return m_ComponentSubNode__links;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getActivity__extensions()
{
    return m_Activity__extensions;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getInputHandler__activeQueue()
{
    return m_InputHandler__activeQueue;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getInputHandler__inputPort()
{
    return m_InputHandler__inputPort;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getServiceRepoImport__importedNamespace()
{
    return m_ServiceRepoImport__importedNamespace;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getComponentPort__extensions()
{
    return m_ComponentPort__extensions;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getOutputPort__service()
{
    return m_OutputPort__service;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getOutputPort__activity()
{
    return m_OutputPort__activity;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getRequestPort__service()
{
    return m_RequestPort__service;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getInputPort__service()
{
    return m_InputPort__service;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getAnswerPort__service()
{
    return m_AnswerPort__service;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getRequestHandler__activeQueue()
{
    return m_RequestHandler__activeQueue;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getRequestHandler__answerPort()
{
    return m_RequestHandler__answerPort;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getAbstractComponentLink__name()
{
    return m_AbstractComponentLink__name;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getComponentSubNodeObserver__subject()
{
    return m_ComponentSubNodeObserver__subject;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getInputPortLink__optional()
{
    return m_InputPortLink__optional;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getInputPortLink__inputPort()
{
    return m_InputPortLink__inputPort;
}
::ecore::EReference_ptr ComponentDefinitionPackage::getRequestPortLink__requestPort()
{
    return m_RequestPortLink__requestPort;
}
::ecore::EAttribute_ptr ComponentDefinitionPackage::getDerivedComponentElement__name()
{
    return m_DerivedComponentElement__name;
}

