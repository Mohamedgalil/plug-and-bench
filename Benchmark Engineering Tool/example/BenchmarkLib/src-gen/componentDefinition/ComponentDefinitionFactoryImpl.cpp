// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentDefinition/ComponentDefinitionFactory.hpp>
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/ComponentDefModel.hpp>
#include <componentDefinition/ComponentDefinition.hpp>
#include <componentDefinition/Activity.hpp>
#include <componentDefinition/ActivityExtension.hpp>
#include <componentDefinition/InputHandler.hpp>
#include <componentDefinition/ServiceRepoImport.hpp>
#include <componentDefinition/OutputPort.hpp>
#include <componentDefinition/RequestPort.hpp>
#include <componentDefinition/InputPort.hpp>
#include <componentDefinition/AnswerPort.hpp>
#include <componentDefinition/ComponentPort.hpp>
#include <componentDefinition/ComponentPortExtension.hpp>
#include <componentDefinition/RequestHandler.hpp>
#include <componentDefinition/AbstractComponentElement.hpp>
#include <componentDefinition/ComponentSubNode.hpp>
#include <componentDefinition/ComponentSubNodeObserver.hpp>
#include <componentDefinition/InputPortLink.hpp>
#include <componentDefinition/RequestPortLink.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/NamedComponentElement.hpp>
#include <componentDefinition/DerivedComponentElement.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::componentDefinition;

ComponentDefinitionFactory::ComponentDefinitionFactory()
{
}

::ecore::EObject_ptr ComponentDefinitionFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ComponentDefinitionPackage::COMPONENTDEFMODEL:
        return createComponentDefModel();
    case ComponentDefinitionPackage::COMPONENTDEFINITION:
        return createComponentDefinition();
    case ComponentDefinitionPackage::ACTIVITY:
        return createActivity();
    case ComponentDefinitionPackage::ACTIVITYEXTENSION:
        return createActivityExtension();
    case ComponentDefinitionPackage::INPUTHANDLER:
        return createInputHandler();
    case ComponentDefinitionPackage::SERVICEREPOIMPORT:
        return createServiceRepoImport();
    case ComponentDefinitionPackage::OUTPUTPORT:
        return createOutputPort();
    case ComponentDefinitionPackage::REQUESTPORT:
        return createRequestPort();
    case ComponentDefinitionPackage::INPUTPORT:
        return createInputPort();
    case ComponentDefinitionPackage::ANSWERPORT:
        return createAnswerPort();
    case ComponentDefinitionPackage::COMPONENTPORT:
        return createComponentPort();
    case ComponentDefinitionPackage::COMPONENTPORTEXTENSION:
        return createComponentPortExtension();
    case ComponentDefinitionPackage::REQUESTHANDLER:
        return createRequestHandler();
    case ComponentDefinitionPackage::ABSTRACTCOMPONENTELEMENT:
        return createAbstractComponentElement();
    case ComponentDefinitionPackage::COMPONENTSUBNODE:
        return createComponentSubNode();
    case ComponentDefinitionPackage::COMPONENTSUBNODEOBSERVER:
        return createComponentSubNodeObserver();
    case ComponentDefinitionPackage::INPUTPORTLINK:
        return createInputPortLink();
    case ComponentDefinitionPackage::REQUESTPORTLINK:
        return createRequestPortLink();
    case ComponentDefinitionPackage::ABSTRACTCOMPONENTLINK:
        return createAbstractComponentLink();
    case ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT:
        return createNamedComponentElement();
    case ComponentDefinitionPackage::DERIVEDCOMPONENTELEMENT:
        return createDerivedComponentElement();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ComponentDefinitionFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ComponentDefinitionFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ComponentDefModel_ptr ComponentDefinitionFactory::createComponentDefModel()
{
    return ::ecore::Ptr < ComponentDefModel > (new ComponentDefModel);
}
ComponentDefinition_ptr ComponentDefinitionFactory::createComponentDefinition()
{
    return ::ecore::Ptr < ComponentDefinition > (new ComponentDefinition);
}
Activity_ptr ComponentDefinitionFactory::createActivity()
{
    return ::ecore::Ptr < Activity > (new Activity);
}
ActivityExtension_ptr ComponentDefinitionFactory::createActivityExtension()
{
    return ::ecore::Ptr < ActivityExtension > (new ActivityExtension);
}
InputHandler_ptr ComponentDefinitionFactory::createInputHandler()
{
    return ::ecore::Ptr < InputHandler > (new InputHandler);
}
ServiceRepoImport_ptr ComponentDefinitionFactory::createServiceRepoImport()
{
    return ::ecore::Ptr < ServiceRepoImport > (new ServiceRepoImport);
}
OutputPort_ptr ComponentDefinitionFactory::createOutputPort()
{
    return ::ecore::Ptr < OutputPort > (new OutputPort);
}
RequestPort_ptr ComponentDefinitionFactory::createRequestPort()
{
    return ::ecore::Ptr < RequestPort > (new RequestPort);
}
InputPort_ptr ComponentDefinitionFactory::createInputPort()
{
    return ::ecore::Ptr < InputPort > (new InputPort);
}
AnswerPort_ptr ComponentDefinitionFactory::createAnswerPort()
{
    return ::ecore::Ptr < AnswerPort > (new AnswerPort);
}
ComponentPort_ptr ComponentDefinitionFactory::createComponentPort()
{
    return ::ecore::Ptr < ComponentPort > (new ComponentPort);
}
ComponentPortExtension_ptr ComponentDefinitionFactory::createComponentPortExtension()
{
    return ::ecore::Ptr < ComponentPortExtension > (new ComponentPortExtension);
}
RequestHandler_ptr ComponentDefinitionFactory::createRequestHandler()
{
    return ::ecore::Ptr < RequestHandler > (new RequestHandler);
}
AbstractComponentElement_ptr ComponentDefinitionFactory::createAbstractComponentElement()
{
    return ::ecore::Ptr < AbstractComponentElement
            > (new AbstractComponentElement);
}
ComponentSubNode_ptr ComponentDefinitionFactory::createComponentSubNode()
{
    return ::ecore::Ptr < ComponentSubNode > (new ComponentSubNode);
}
ComponentSubNodeObserver_ptr ComponentDefinitionFactory::createComponentSubNodeObserver()
{
    return ::ecore::Ptr < ComponentSubNodeObserver
            > (new ComponentSubNodeObserver);
}
InputPortLink_ptr ComponentDefinitionFactory::createInputPortLink()
{
    return ::ecore::Ptr < InputPortLink > (new InputPortLink);
}
RequestPortLink_ptr ComponentDefinitionFactory::createRequestPortLink()
{
    return ::ecore::Ptr < RequestPortLink > (new RequestPortLink);
}
AbstractComponentLink_ptr ComponentDefinitionFactory::createAbstractComponentLink()
{
    return ::ecore::Ptr < AbstractComponentLink > (new AbstractComponentLink);
}
NamedComponentElement_ptr ComponentDefinitionFactory::createNamedComponentElement()
{
    return ::ecore::Ptr < NamedComponentElement > (new NamedComponentElement);
}
DerivedComponentElement_ptr ComponentDefinitionFactory::createDerivedComponentElement()
{
    return ::ecore::Ptr < DerivedComponentElement
            > (new DerivedComponentElement);
}

