// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONOBJECT_FORWARD_HPP
#define _COMMUNICATIONOBJECT_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(communicationObject_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace communicationObject
{

// EDataType

// EClass

// CommObjectModel
    class CommObjectModel;
    using CommObjectModel_ptr = ::ecore::Ptr<CommObjectModel>;

// CommObjectsRepository
    class CommObjectsRepository;
    using CommObjectsRepository_ptr = ::ecore::Ptr<CommObjectsRepository>;

// AbstractCommElement
    class AbstractCommElement;
    using AbstractCommElement_ptr = ::ecore::Ptr<AbstractCommElement>;

// CommRepositoryImport
    class CommRepositoryImport;
    using CommRepositoryImport_ptr = ::ecore::Ptr<CommRepositoryImport>;

// Version
    class Version;
    using Version_ptr = ::ecore::Ptr<Version>;

// Enumeration
    class Enumeration;
    using Enumeration_ptr = ::ecore::Ptr<Enumeration>;

// CommunicationObject
    class CommunicationObject;
    using CommunicationObject_ptr = ::ecore::Ptr<CommunicationObject>;

// CommElementValue
    class CommElementValue;
    using CommElementValue_ptr = ::ecore::Ptr<CommElementValue>;

// CommElementReference
    class CommElementReference;
    using CommElementReference_ptr = ::ecore::Ptr<CommElementReference>;

// EEnum

// Package & Factory
    class CommunicationObjectFactory;
    using CommunicationObjectFactory_ptr = ::ecore::Ptr<CommunicationObjectFactory>;
    class CommunicationObjectPackage;
    using CommunicationObjectPackage_ptr = ::ecore::Ptr<CommunicationObjectPackage>;

} // communicationObject

#endif // _COMMUNICATIONOBJECT_FORWARD_HPP

