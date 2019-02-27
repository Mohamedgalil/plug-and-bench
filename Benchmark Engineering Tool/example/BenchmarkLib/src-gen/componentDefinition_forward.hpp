// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTDEFINITION_FORWARD_HPP
#define _COMPONENTDEFINITION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(componentDefinition_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace componentDefinition
{

// EDataType

// EClass

// ComponentDefModel
    class ComponentDefModel;
    using ComponentDefModel_ptr = ::ecore::Ptr<ComponentDefModel>;

// ComponentDefinition
    class ComponentDefinition;
    using ComponentDefinition_ptr = ::ecore::Ptr<ComponentDefinition>;

// Activity
    class Activity;
    using Activity_ptr = ::ecore::Ptr<Activity>;

// ActivityExtension
    class ActivityExtension;
    using ActivityExtension_ptr = ::ecore::Ptr<ActivityExtension>;

// InputHandler
    class InputHandler;
    using InputHandler_ptr = ::ecore::Ptr<InputHandler>;

// ServiceRepoImport
    class ServiceRepoImport;
    using ServiceRepoImport_ptr = ::ecore::Ptr<ServiceRepoImport>;

// OutputPort
    class OutputPort;
    using OutputPort_ptr = ::ecore::Ptr<OutputPort>;

// RequestPort
    class RequestPort;
    using RequestPort_ptr = ::ecore::Ptr<RequestPort>;

// InputPort
    class InputPort;
    using InputPort_ptr = ::ecore::Ptr<InputPort>;

// AnswerPort
    class AnswerPort;
    using AnswerPort_ptr = ::ecore::Ptr<AnswerPort>;

// ComponentPort
    class ComponentPort;
    using ComponentPort_ptr = ::ecore::Ptr<ComponentPort>;

// ComponentPortExtension
    class ComponentPortExtension;
    using ComponentPortExtension_ptr = ::ecore::Ptr<ComponentPortExtension>;

// RequestHandler
    class RequestHandler;
    using RequestHandler_ptr = ::ecore::Ptr<RequestHandler>;

// AbstractComponentElement
    class AbstractComponentElement;
    using AbstractComponentElement_ptr = ::ecore::Ptr<AbstractComponentElement>;

// ComponentSubNode
    class ComponentSubNode;
    using ComponentSubNode_ptr = ::ecore::Ptr<ComponentSubNode>;

// ComponentSubNodeObserver
    class ComponentSubNodeObserver;
    using ComponentSubNodeObserver_ptr = ::ecore::Ptr<ComponentSubNodeObserver>;

// InputPortLink
    class InputPortLink;
    using InputPortLink_ptr = ::ecore::Ptr<InputPortLink>;

// RequestPortLink
    class RequestPortLink;
    using RequestPortLink_ptr = ::ecore::Ptr<RequestPortLink>;

// AbstractComponentLink
    class AbstractComponentLink;
    using AbstractComponentLink_ptr = ::ecore::Ptr<AbstractComponentLink>;

// NamedComponentElement
    class NamedComponentElement;
    using NamedComponentElement_ptr = ::ecore::Ptr<NamedComponentElement>;

// DerivedComponentElement
    class DerivedComponentElement;
    using DerivedComponentElement_ptr = ::ecore::Ptr<DerivedComponentElement>;

// EEnum

// Package & Factory
    class ComponentDefinitionFactory;
    using ComponentDefinitionFactory_ptr = ::ecore::Ptr<ComponentDefinitionFactory>;
    class ComponentDefinitionPackage;
    using ComponentDefinitionPackage_ptr = ::ecore::Ptr<ComponentDefinitionPackage>;

} // componentDefinition

#endif // _COMPONENTDEFINITION_FORWARD_HPP

