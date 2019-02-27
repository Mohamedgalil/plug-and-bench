// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTDEFINITIONPACKAGE_HPP
#define _COMPONENTDEFINITIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <componentDefinition_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL ComponentDefinitionPackage : public virtual ::ecore::EPackage
{
public:

    static ComponentDefinitionPackage_ptr _instance();
    static ComponentDefinitionPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTCOMPONENTELEMENT = 0;

    static const int ABSTRACTCOMPONENTLINK = 1;

    static const int ACTIVITY = 2;

    static const int ACTIVITYEXTENSION = 3;

    static const int ANSWERPORT = 4;

    static const int COMPONENTDEFINITION = 5;

    static const int COMPONENTDEFMODEL = 6;

    static const int COMPONENTPORT = 7;

    static const int COMPONENTPORTEXTENSION = 8;

    static const int COMPONENTSUBNODE = 9;

    static const int COMPONENTSUBNODEOBSERVER = 10;

    static const int DERIVEDCOMPONENTELEMENT = 11;

    static const int INPUTHANDLER = 12;

    static const int INPUTPORT = 13;

    static const int INPUTPORTLINK = 14;

    static const int NAMEDCOMPONENTELEMENT = 15;

    static const int OUTPUTPORT = 16;

    static const int REQUESTHANDLER = 17;

    static const int REQUESTPORT = 18;

    static const int REQUESTPORTLINK = 19;

    static const int SERVICEREPOIMPORT = 20;

    static const int COMPONENTDEFMODEL__COMPONENT = 0;

    static const int COMPONENTDEFMODEL__IMPORTS = 1;

    static const int COMPONENTDEFINITION__NAME = 2;

    static const int COMPONENTDEFINITION__ELEMENTS = 3;

    static const int ACTIVITY__EXTENSIONS = 4;

    static const int INPUTHANDLER__ACTIVEQUEUE = 5;

    static const int INPUTHANDLER__INPUTPORT = 6;

    static const int SERVICEREPOIMPORT__IMPORTEDNAMESPACE = 7;

    static const int OUTPUTPORT__SERVICE = 8;

    static const int OUTPUTPORT__ACTIVITY = 9;

    static const int REQUESTPORT__SERVICE = 10;

    static const int INPUTPORT__SERVICE = 11;

    static const int ANSWERPORT__SERVICE = 12;

    static const int COMPONENTPORT__EXTENSIONS = 13;

    static const int REQUESTHANDLER__ACTIVEQUEUE = 14;

    static const int REQUESTHANDLER__ANSWERPORT = 15;

    static const int COMPONENTSUBNODE__LINKS = 16;

    static const int COMPONENTSUBNODEOBSERVER__SUBJECT = 17;

    static const int INPUTPORTLINK__OPTIONAL = 18;

    static const int INPUTPORTLINK__INPUTPORT = 19;

    static const int REQUESTPORTLINK__REQUESTPORT = 20;

    static const int ABSTRACTCOMPONENTLINK__NAME = 21;

    static const int NAMEDCOMPONENTELEMENT__NAME = 22;

    static const int DERIVEDCOMPONENTELEMENT__NAME = 23;

    // IDs for classifiers for class AbstractComponentElement 

    // IDs for classifiers for class AbstractComponentLink 

    // IDs for classifiers for class Activity 

    static const int ACTIVITY__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int ACTIVITY__LINKS = COMPONENTSUBNODE__LINKS;

    // IDs for classifiers for class ActivityExtension 

    // IDs for classifiers for class AnswerPort 

    static const int ANSWERPORT__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int ANSWERPORT__EXTENSIONS = COMPONENTPORT__EXTENSIONS;

    // IDs for classifiers for class ComponentDefinition 

    // IDs for classifiers for class ComponentDefModel 

    // IDs for classifiers for class ComponentPort 

    static const int COMPONENTPORT__NAME = NAMEDCOMPONENTELEMENT__NAME;

    // IDs for classifiers for class ComponentPortExtension 

    // IDs for classifiers for class ComponentSubNode 

    static const int COMPONENTSUBNODE__NAME = NAMEDCOMPONENTELEMENT__NAME;

    // IDs for classifiers for class ComponentSubNodeObserver 

    static const int COMPONENTSUBNODEOBSERVER__NAME = ABSTRACTCOMPONENTLINK__NAME;

    // IDs for classifiers for class DerivedComponentElement 

    // IDs for classifiers for class InputHandler 

    static const int INPUTHANDLER__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int INPUTHANDLER__LINKS = COMPONENTSUBNODE__LINKS;

    // IDs for classifiers for class InputPort 

    static const int INPUTPORT__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int INPUTPORT__EXTENSIONS = COMPONENTPORT__EXTENSIONS;

    // IDs for classifiers for class InputPortLink 

    static const int INPUTPORTLINK__NAME = ABSTRACTCOMPONENTLINK__NAME;

    // IDs for classifiers for class NamedComponentElement 

    // IDs for classifiers for class OutputPort 

    static const int OUTPUTPORT__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int OUTPUTPORT__EXTENSIONS = COMPONENTPORT__EXTENSIONS;

    // IDs for classifiers for class RequestHandler 

    static const int REQUESTHANDLER__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int REQUESTHANDLER__LINKS = COMPONENTSUBNODE__LINKS;

    // IDs for classifiers for class RequestPort 

    static const int REQUESTPORT__NAME = NAMEDCOMPONENTELEMENT__NAME;

    static const int REQUESTPORT__EXTENSIONS = COMPONENTPORT__EXTENSIONS;

    // IDs for classifiers for class RequestPortLink 

    static const int REQUESTPORTLINK__NAME = ABSTRACTCOMPONENTLINK__NAME;

    // IDs for classifiers for class ServiceRepoImport 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getComponentDefModel();

    virtual ::ecore::EClass_ptr getComponentDefinition();

    virtual ::ecore::EClass_ptr getActivity();

    virtual ::ecore::EClass_ptr getActivityExtension();

    virtual ::ecore::EClass_ptr getInputHandler();

    virtual ::ecore::EClass_ptr getServiceRepoImport();

    virtual ::ecore::EClass_ptr getOutputPort();

    virtual ::ecore::EClass_ptr getRequestPort();

    virtual ::ecore::EClass_ptr getInputPort();

    virtual ::ecore::EClass_ptr getAnswerPort();

    virtual ::ecore::EClass_ptr getComponentPort();

    virtual ::ecore::EClass_ptr getComponentPortExtension();

    virtual ::ecore::EClass_ptr getRequestHandler();

    virtual ::ecore::EClass_ptr getAbstractComponentElement();

    virtual ::ecore::EClass_ptr getComponentSubNode();

    virtual ::ecore::EClass_ptr getComponentSubNodeObserver();

    virtual ::ecore::EClass_ptr getInputPortLink();

    virtual ::ecore::EClass_ptr getRequestPortLink();

    virtual ::ecore::EClass_ptr getAbstractComponentLink();

    virtual ::ecore::EClass_ptr getNamedComponentElement();

    virtual ::ecore::EClass_ptr getDerivedComponentElement();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getComponentDefModel__component();

    virtual ::ecore::EReference_ptr getComponentDefModel__imports();

    virtual ::ecore::EAttribute_ptr getComponentDefinition__name();

    virtual ::ecore::EReference_ptr getComponentDefinition__elements();

    virtual ::ecore::EAttribute_ptr getNamedComponentElement__name();

    virtual ::ecore::EReference_ptr getComponentSubNode__links();

    virtual ::ecore::EReference_ptr getActivity__extensions();

    virtual ::ecore::EAttribute_ptr getInputHandler__activeQueue();

    virtual ::ecore::EReference_ptr getInputHandler__inputPort();

    virtual ::ecore::EAttribute_ptr getServiceRepoImport__importedNamespace();

    virtual ::ecore::EReference_ptr getComponentPort__extensions();

    virtual ::ecore::EReference_ptr getOutputPort__service();

    virtual ::ecore::EReference_ptr getOutputPort__activity();

    virtual ::ecore::EReference_ptr getRequestPort__service();

    virtual ::ecore::EReference_ptr getInputPort__service();

    virtual ::ecore::EReference_ptr getAnswerPort__service();

    virtual ::ecore::EAttribute_ptr getRequestHandler__activeQueue();

    virtual ::ecore::EReference_ptr getRequestHandler__answerPort();

    virtual ::ecore::EAttribute_ptr getAbstractComponentLink__name();

    virtual ::ecore::EReference_ptr getComponentSubNodeObserver__subject();

    virtual ::ecore::EAttribute_ptr getInputPortLink__optional();

    virtual ::ecore::EReference_ptr getInputPortLink__inputPort();

    virtual ::ecore::EReference_ptr getRequestPortLink__requestPort();

    virtual ::ecore::EAttribute_ptr getDerivedComponentElement__name();

protected:

    static ::ecore::Ptr< ComponentDefinitionPackage > s_instance;

    ComponentDefinitionPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ComponentDefModelEClass;

    ::ecore::EClass_ptr m_ComponentDefinitionEClass;

    ::ecore::EClass_ptr m_ActivityEClass;

    ::ecore::EClass_ptr m_ActivityExtensionEClass;

    ::ecore::EClass_ptr m_InputHandlerEClass;

    ::ecore::EClass_ptr m_ServiceRepoImportEClass;

    ::ecore::EClass_ptr m_OutputPortEClass;

    ::ecore::EClass_ptr m_RequestPortEClass;

    ::ecore::EClass_ptr m_InputPortEClass;

    ::ecore::EClass_ptr m_AnswerPortEClass;

    ::ecore::EClass_ptr m_ComponentPortEClass;

    ::ecore::EClass_ptr m_ComponentPortExtensionEClass;

    ::ecore::EClass_ptr m_RequestHandlerEClass;

    ::ecore::EClass_ptr m_AbstractComponentElementEClass;

    ::ecore::EClass_ptr m_ComponentSubNodeEClass;

    ::ecore::EClass_ptr m_ComponentSubNodeObserverEClass;

    ::ecore::EClass_ptr m_InputPortLinkEClass;

    ::ecore::EClass_ptr m_RequestPortLinkEClass;

    ::ecore::EClass_ptr m_AbstractComponentLinkEClass;

    ::ecore::EClass_ptr m_NamedComponentElementEClass;

    ::ecore::EClass_ptr m_DerivedComponentElementEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_ComponentDefModel__component;

    ::ecore::EReference_ptr m_ComponentDefModel__imports;

    ::ecore::EAttribute_ptr m_ComponentDefinition__name;

    ::ecore::EReference_ptr m_ComponentDefinition__elements;

    ::ecore::EAttribute_ptr m_NamedComponentElement__name;

    ::ecore::EReference_ptr m_ComponentSubNode__links;

    ::ecore::EReference_ptr m_Activity__extensions;

    ::ecore::EAttribute_ptr m_InputHandler__activeQueue;

    ::ecore::EReference_ptr m_InputHandler__inputPort;

    ::ecore::EAttribute_ptr m_ServiceRepoImport__importedNamespace;

    ::ecore::EReference_ptr m_ComponentPort__extensions;

    ::ecore::EReference_ptr m_OutputPort__service;

    ::ecore::EReference_ptr m_OutputPort__activity;

    ::ecore::EReference_ptr m_RequestPort__service;

    ::ecore::EReference_ptr m_InputPort__service;

    ::ecore::EReference_ptr m_AnswerPort__service;

    ::ecore::EAttribute_ptr m_RequestHandler__activeQueue;

    ::ecore::EReference_ptr m_RequestHandler__answerPort;

    ::ecore::EAttribute_ptr m_AbstractComponentLink__name;

    ::ecore::EReference_ptr m_ComponentSubNodeObserver__subject;

    ::ecore::EAttribute_ptr m_InputPortLink__optional;

    ::ecore::EReference_ptr m_InputPortLink__inputPort;

    ::ecore::EReference_ptr m_RequestPortLink__requestPort;

    ::ecore::EAttribute_ptr m_DerivedComponentElement__name;

};

}
 // componentDefinition

#endif // _COMPONENTDEFINITIONPACKAGE_HPP

