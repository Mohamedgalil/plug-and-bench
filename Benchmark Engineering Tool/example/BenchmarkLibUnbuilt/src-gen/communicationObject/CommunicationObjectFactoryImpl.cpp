// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationObject/CommunicationObjectFactory.hpp>
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/CommObjectModel.hpp>
#include <communicationObject/CommObjectsRepository.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <communicationObject/CommRepositoryImport.hpp>
#include <communicationObject/Version.hpp>
#include <communicationObject/Enumeration.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <communicationObject/CommElementValue.hpp>
#include <communicationObject/CommElementReference.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::communicationObject;

CommunicationObjectFactory::CommunicationObjectFactory()
{
}

::ecore::EObject_ptr CommunicationObjectFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CommunicationObjectPackage::COMMOBJECTMODEL:
        return createCommObjectModel();
    case CommunicationObjectPackage::COMMOBJECTSREPOSITORY:
        return createCommObjectsRepository();
    case CommunicationObjectPackage::ABSTRACTCOMMELEMENT:
        return createAbstractCommElement();
    case CommunicationObjectPackage::COMMREPOSITORYIMPORT:
        return createCommRepositoryImport();
    case CommunicationObjectPackage::VERSION:
        return createVersion();
    case CommunicationObjectPackage::ENUMERATION:
        return createEnumeration();
    case CommunicationObjectPackage::COMMUNICATIONOBJECT:
        return createCommunicationObject();
    case CommunicationObjectPackage::COMMELEMENTVALUE:
        return createCommElementValue();
    case CommunicationObjectPackage::COMMELEMENTREFERENCE:
        return createCommElementReference();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CommunicationObjectFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CommunicationObjectFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

CommObjectModel_ptr CommunicationObjectFactory::createCommObjectModel()
{
    return ::ecore::Ptr < CommObjectModel > (new CommObjectModel);
}
CommObjectsRepository_ptr CommunicationObjectFactory::createCommObjectsRepository()
{
    return ::ecore::Ptr < CommObjectsRepository > (new CommObjectsRepository);
}
AbstractCommElement_ptr CommunicationObjectFactory::createAbstractCommElement()
{
    return ::ecore::Ptr < AbstractCommElement > (new AbstractCommElement);
}
CommRepositoryImport_ptr CommunicationObjectFactory::createCommRepositoryImport()
{
    return ::ecore::Ptr < CommRepositoryImport > (new CommRepositoryImport);
}
Version_ptr CommunicationObjectFactory::createVersion()
{
    return ::ecore::Ptr < Version > (new Version);
}
Enumeration_ptr CommunicationObjectFactory::createEnumeration()
{
    return ::ecore::Ptr < Enumeration > (new Enumeration);
}
CommunicationObject_ptr CommunicationObjectFactory::createCommunicationObject()
{
    return ::ecore::Ptr < CommunicationObject > (new CommunicationObject);
}
CommElementValue_ptr CommunicationObjectFactory::createCommElementValue()
{
    return ::ecore::Ptr < CommElementValue > (new CommElementValue);
}
CommElementReference_ptr CommunicationObjectFactory::createCommElementReference()
{
    return ::ecore::Ptr < CommElementReference > (new CommElementReference);
}

