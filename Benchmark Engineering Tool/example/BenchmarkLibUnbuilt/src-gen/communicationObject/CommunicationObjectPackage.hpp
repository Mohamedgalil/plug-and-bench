// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONOBJECTPACKAGE_HPP
#define _COMMUNICATIONOBJECTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <communicationObject_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <basicAttributes/BasicAttributesPackage.hpp>

#include <communicationObject/dllCommunicationObject.hpp>

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL CommunicationObjectPackage : public virtual ::ecore::EPackage
{
public:

    static CommunicationObjectPackage_ptr _instance();
    static CommunicationObjectPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTCOMMELEMENT = 0;

    static const int COMMELEMENTREFERENCE = 1;

    static const int COMMELEMENTVALUE = 2;

    static const int COMMOBJECTMODEL = 3;

    static const int COMMOBJECTSREPOSITORY = 4;

    static const int COMMREPOSITORYIMPORT = 5;

    static const int COMMUNICATIONOBJECT = 6;

    static const int ENUMERATION = 7;

    static const int VERSION = 8;

    static const int COMMOBJECTMODEL__REPOSITORY = 0;

    static const int COMMOBJECTMODEL__IMPORTS = 1;

    static const int COMMOBJECTSREPOSITORY__NAME = 2;

    static const int COMMOBJECTSREPOSITORY__ELEMENTS = 3;

    static const int COMMOBJECTSREPOSITORY__VERSION = 4;

    static const int COMMOBJECTSREPOSITORY__DEPENDENCY = 5;

    static const int ABSTRACTCOMMELEMENT__NAME = 6;

    static const int COMMREPOSITORYIMPORT__IMPORTEDNAMESPACE = 7;

    static const int VERSION__MAJOR = 8;

    static const int VERSION__MINOR = 9;

    static const int VERSION__PATCH = 10;

    static const int ENUMERATION__ENUMS = 11;

    static const int COMMUNICATIONOBJECT__ATTRIBUTES = 12;

    static const int COMMELEMENTVALUE__VALUE = 13;

    static const int COMMELEMENTREFERENCE__TYPENAME = 14;

    // IDs for classifiers for class AbstractCommElement 

    // IDs for classifiers for class CommElementReference 

    static const int COMMELEMENTREFERENCE__ARRAY = ::basicAttributes::BasicAttributesPackage::ABSTRACTATTRIBUTETYPE__ARRAY;

    // IDs for classifiers for class CommElementValue 

    // IDs for classifiers for class CommObjectModel 

    // IDs for classifiers for class CommObjectsRepository 

    // IDs for classifiers for class CommRepositoryImport 

    // IDs for classifiers for class CommunicationObject 

    static const int COMMUNICATIONOBJECT__NAME = ABSTRACTCOMMELEMENT__NAME;

    // IDs for classifiers for class Enumeration 

    static const int ENUMERATION__NAME = ABSTRACTCOMMELEMENT__NAME;

    // IDs for classifiers for class Version 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getCommObjectModel();

    virtual ::ecore::EClass_ptr getCommObjectsRepository();

    virtual ::ecore::EClass_ptr getAbstractCommElement();

    virtual ::ecore::EClass_ptr getCommRepositoryImport();

    virtual ::ecore::EClass_ptr getVersion();

    virtual ::ecore::EClass_ptr getEnumeration();

    virtual ::ecore::EClass_ptr getCommunicationObject();

    virtual ::ecore::EClass_ptr getCommElementValue();

    virtual ::ecore::EClass_ptr getCommElementReference();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getCommObjectModel__repository();

    virtual ::ecore::EReference_ptr getCommObjectModel__imports();

    virtual ::ecore::EAttribute_ptr getCommObjectsRepository__name();

    virtual ::ecore::EReference_ptr getCommObjectsRepository__elements();

    virtual ::ecore::EReference_ptr getCommObjectsRepository__version();

    virtual ::ecore::EAttribute_ptr getCommObjectsRepository__dependency();

    virtual ::ecore::EAttribute_ptr getAbstractCommElement__name();

    virtual ::ecore::EAttribute_ptr getCommRepositoryImport__importedNamespace();

    virtual ::ecore::EAttribute_ptr getVersion__major();

    virtual ::ecore::EAttribute_ptr getVersion__minor();

    virtual ::ecore::EAttribute_ptr getVersion__patch();

    virtual ::ecore::EReference_ptr getEnumeration__enums();

    virtual ::ecore::EReference_ptr getCommunicationObject__attributes();

    virtual ::ecore::EReference_ptr getCommElementValue__value();

    virtual ::ecore::EReference_ptr getAbstractAttributeType__array();

    virtual ::ecore::EReference_ptr getCommElementReference__typeName();

protected:

    static ::ecore::Ptr< CommunicationObjectPackage > s_instance;

    CommunicationObjectPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_CommObjectModelEClass;

    ::ecore::EClass_ptr m_CommObjectsRepositoryEClass;

    ::ecore::EClass_ptr m_AbstractCommElementEClass;

    ::ecore::EClass_ptr m_CommRepositoryImportEClass;

    ::ecore::EClass_ptr m_VersionEClass;

    ::ecore::EClass_ptr m_EnumerationEClass;

    ::ecore::EClass_ptr m_CommunicationObjectEClass;

    ::ecore::EClass_ptr m_CommElementValueEClass;

    ::ecore::EClass_ptr m_CommElementReferenceEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_CommObjectModel__repository;

    ::ecore::EReference_ptr m_CommObjectModel__imports;

    ::ecore::EAttribute_ptr m_CommObjectsRepository__name;

    ::ecore::EReference_ptr m_CommObjectsRepository__elements;

    ::ecore::EReference_ptr m_CommObjectsRepository__version;

    ::ecore::EAttribute_ptr m_CommObjectsRepository__dependency;

    ::ecore::EAttribute_ptr m_AbstractCommElement__name;

    ::ecore::EAttribute_ptr m_CommRepositoryImport__importedNamespace;

    ::ecore::EAttribute_ptr m_Version__major;

    ::ecore::EAttribute_ptr m_Version__minor;

    ::ecore::EAttribute_ptr m_Version__patch;

    ::ecore::EReference_ptr m_Enumeration__enums;

    ::ecore::EReference_ptr m_CommunicationObject__attributes;

    ::ecore::EReference_ptr m_CommElementValue__value;

    ::ecore::EReference_ptr m_AbstractAttributeType__array;

    ::ecore::EReference_ptr m_CommElementReference__typeName;

};

}
 // communicationObject

#endif // _COMMUNICATIONOBJECTPACKAGE_HPP

