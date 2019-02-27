// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/CommunicationObjectFactory.hpp>
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
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <basicAttributes/ArrayType.hpp>

using namespace ::communicationObject;

CommunicationObjectPackage::CommunicationObjectPackage()
{

    // Feature definitions of CommObjectModel
    m_CommObjectModel__repository = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_CommObjectModel__imports = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CommObjectsRepository
    m_CommObjectsRepository__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_CommObjectsRepository__dependency = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_CommObjectsRepository__elements = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_CommObjectsRepository__version = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractCommElement
    m_AbstractCommElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of CommRepositoryImport
    m_CommRepositoryImport__importedNamespace = ::ecore::Ptr
            < ::ecore::EAttribute > (new ::ecore::EAttribute);

    // Feature definitions of Version
    m_Version__major = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Version__minor = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Version__patch = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of Enumeration
    m_Enumeration__enums = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CommunicationObject
    m_CommunicationObject__attributes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CommElementValue
    m_CommElementValue__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of CommElementReference
    m_CommElementReference__typeName = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

}

void CommunicationObjectPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = CommunicationObjectFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // CommObjectModel
    m_CommObjectModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommObjectModelEClass->setClassifierID(COMMOBJECTMODEL);
    m_CommObjectModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommObjectModelEClass);
    // m_CommObjectModel__repository has already been allocated above
    m_CommObjectModel__repository->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__REPOSITORY);
    m_CommObjectModelEClass->getEStructuralFeatures().push_back(
            m_CommObjectModel__repository);
    // m_CommObjectModel__imports has already been allocated above
    m_CommObjectModel__imports->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTMODEL__IMPORTS);
    m_CommObjectModelEClass->getEStructuralFeatures().push_back(
            m_CommObjectModel__imports);

    // CommObjectsRepository
    m_CommObjectsRepositoryEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommObjectsRepositoryEClass->setClassifierID(COMMOBJECTSREPOSITORY);
    m_CommObjectsRepositoryEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommObjectsRepositoryEClass);
    // m_CommObjectsRepository__name has already been allocated above
    m_CommObjectsRepository__name->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__NAME);
    m_CommObjectsRepositoryEClass->getEStructuralFeatures().push_back(
            m_CommObjectsRepository__name);
    // m_CommObjectsRepository__dependency has already been allocated above
    m_CommObjectsRepository__dependency->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__DEPENDENCY);
    m_CommObjectsRepositoryEClass->getEStructuralFeatures().push_back(
            m_CommObjectsRepository__dependency);
    // m_CommObjectsRepository__elements has already been allocated above
    m_CommObjectsRepository__elements->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__ELEMENTS);
    m_CommObjectsRepositoryEClass->getEStructuralFeatures().push_back(
            m_CommObjectsRepository__elements);
    // m_CommObjectsRepository__version has already been allocated above
    m_CommObjectsRepository__version->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMOBJECTSREPOSITORY__VERSION);
    m_CommObjectsRepositoryEClass->getEStructuralFeatures().push_back(
            m_CommObjectsRepository__version);

    // AbstractCommElement
    m_AbstractCommElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractCommElementEClass->setClassifierID(ABSTRACTCOMMELEMENT);
    m_AbstractCommElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractCommElementEClass);
    // m_AbstractCommElement__name has already been allocated above
    m_AbstractCommElement__name->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::ABSTRACTCOMMELEMENT__NAME);
    m_AbstractCommElementEClass->getEStructuralFeatures().push_back(
            m_AbstractCommElement__name);

    // CommRepositoryImport
    m_CommRepositoryImportEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommRepositoryImportEClass->setClassifierID(COMMREPOSITORYIMPORT);
    m_CommRepositoryImportEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommRepositoryImportEClass);
    // m_CommRepositoryImport__importedNamespace has already been allocated above
    m_CommRepositoryImport__importedNamespace->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMREPOSITORYIMPORT__IMPORTEDNAMESPACE);
    m_CommRepositoryImportEClass->getEStructuralFeatures().push_back(
            m_CommRepositoryImport__importedNamespace);

    // Version
    m_VersionEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_VersionEClass->setClassifierID(VERSION);
    m_VersionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_VersionEClass);
    // m_Version__major has already been allocated above
    m_Version__major->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::VERSION__MAJOR);
    m_VersionEClass->getEStructuralFeatures().push_back(m_Version__major);
    // m_Version__minor has already been allocated above
    m_Version__minor->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::VERSION__MINOR);
    m_VersionEClass->getEStructuralFeatures().push_back(m_Version__minor);
    // m_Version__patch has already been allocated above
    m_Version__patch->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::VERSION__PATCH);
    m_VersionEClass->getEStructuralFeatures().push_back(m_Version__patch);

    // Enumeration
    m_EnumerationEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EnumerationEClass->setClassifierID(ENUMERATION);
    m_EnumerationEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EnumerationEClass);
    // m_Enumeration__enums has already been allocated above
    m_Enumeration__enums->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::ENUMERATION__ENUMS);
    m_EnumerationEClass->getEStructuralFeatures().push_back(
            m_Enumeration__enums);

    // CommunicationObject
    m_CommunicationObjectEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommunicationObjectEClass->setClassifierID(COMMUNICATIONOBJECT);
    m_CommunicationObjectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommunicationObjectEClass);
    // m_CommunicationObject__attributes has already been allocated above
    m_CommunicationObject__attributes->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMUNICATIONOBJECT__ATTRIBUTES);
    m_CommunicationObjectEClass->getEStructuralFeatures().push_back(
            m_CommunicationObject__attributes);

    // CommElementValue
    m_CommElementValueEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommElementValueEClass->setClassifierID(COMMELEMENTVALUE);
    m_CommElementValueEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommElementValueEClass);
    // m_CommElementValue__value has already been allocated above
    m_CommElementValue__value->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMELEMENTVALUE__VALUE);
    m_CommElementValueEClass->getEStructuralFeatures().push_back(
            m_CommElementValue__value);

    // CommElementReference
    m_CommElementReferenceEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommElementReferenceEClass->setClassifierID(COMMELEMENTREFERENCE);
    m_CommElementReferenceEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommElementReferenceEClass);
    // m_CommElementReference__typeName has already been allocated above
    m_CommElementReference__typeName->setFeatureID(
            ::communicationObject::CommunicationObjectPackage::COMMELEMENTREFERENCE__TYPENAME);
    m_CommElementReferenceEClass->getEStructuralFeatures().push_back(
            m_CommElementReference__typeName);

    // Create enums

    // Create data types

    // Initialize package
    setName("communicationObject");
    setNsPrefix("CommunicationObject");
    setNsURI("http://www.ecore.org/service/CommunicationObject");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_EnumerationEClass->getESuperTypes().push_back(
            m_AbstractCommElementEClass);
    m_CommunicationObjectEClass->getESuperTypes().push_back(
            m_AbstractCommElementEClass);
    m_CommElementValueEClass->getESuperTypes().push_back(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getSingleValue());
    m_CommElementReferenceEClass->getESuperTypes().push_back(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAbstractAttributeType());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // CommObjectModel
    m_CommObjectModelEClass->setName("CommObjectModel");
    m_CommObjectModelEClass->setAbstract(false);
    m_CommObjectModelEClass->setInterface(false);
    m_CommObjectModel__repository->setEType(m_CommObjectsRepositoryEClass);
    m_CommObjectModel__repository->setName("repository");
    m_CommObjectModel__repository->setDefaultValueLiteral("");
    m_CommObjectModel__repository->setLowerBound(0);
    m_CommObjectModel__repository->setUpperBound(1);
    m_CommObjectModel__repository->setTransient(false);
    m_CommObjectModel__repository->setVolatile(false);
    m_CommObjectModel__repository->setChangeable(true);
    m_CommObjectModel__repository->setContainment(true);
    m_CommObjectModel__repository->setResolveProxies(true);
    m_CommObjectModel__repository->setUnique(true);
    m_CommObjectModel__repository->setDerived(false);
    m_CommObjectModel__repository->setOrdered(true);
    m_CommObjectModel__imports->setEType(m_CommRepositoryImportEClass);
    m_CommObjectModel__imports->setName("imports");
    m_CommObjectModel__imports->setDefaultValueLiteral("");
    m_CommObjectModel__imports->setLowerBound(0);
    m_CommObjectModel__imports->setUpperBound(-1);
    m_CommObjectModel__imports->setTransient(false);
    m_CommObjectModel__imports->setVolatile(false);
    m_CommObjectModel__imports->setChangeable(true);
    m_CommObjectModel__imports->setContainment(true);
    m_CommObjectModel__imports->setResolveProxies(true);
    m_CommObjectModel__imports->setUnique(true);
    m_CommObjectModel__imports->setDerived(false);
    m_CommObjectModel__imports->setOrdered(true);
    // CommObjectsRepository
    m_CommObjectsRepositoryEClass->setName("CommObjectsRepository");
    m_CommObjectsRepositoryEClass->setAbstract(false);
    m_CommObjectsRepositoryEClass->setInterface(false);
    m_CommObjectsRepository__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_CommObjectsRepository__name->setName("name");
    m_CommObjectsRepository__name->setDefaultValueLiteral("");
    m_CommObjectsRepository__name->setLowerBound(1);
    m_CommObjectsRepository__name->setUpperBound(1);
    m_CommObjectsRepository__name->setTransient(false);
    m_CommObjectsRepository__name->setVolatile(false);
    m_CommObjectsRepository__name->setChangeable(true);
    m_CommObjectsRepository__name->setUnsettable(false);
    m_CommObjectsRepository__name->setID(false);
    m_CommObjectsRepository__name->setUnique(true);
    m_CommObjectsRepository__name->setDerived(false);
    m_CommObjectsRepository__name->setOrdered(true);
    m_CommObjectsRepository__dependency->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_CommObjectsRepository__dependency->setName("dependency");
    m_CommObjectsRepository__dependency->setDefaultValueLiteral("");
    m_CommObjectsRepository__dependency->setLowerBound(0);
    m_CommObjectsRepository__dependency->setUpperBound(1);
    m_CommObjectsRepository__dependency->setTransient(false);
    m_CommObjectsRepository__dependency->setVolatile(false);
    m_CommObjectsRepository__dependency->setChangeable(true);
    m_CommObjectsRepository__dependency->setUnsettable(false);
    m_CommObjectsRepository__dependency->setID(false);
    m_CommObjectsRepository__dependency->setUnique(true);
    m_CommObjectsRepository__dependency->setDerived(false);
    m_CommObjectsRepository__dependency->setOrdered(true);
    m_CommObjectsRepository__elements->setEType(m_AbstractCommElementEClass);
    m_CommObjectsRepository__elements->setName("elements");
    m_CommObjectsRepository__elements->setDefaultValueLiteral("");
    m_CommObjectsRepository__elements->setLowerBound(0);
    m_CommObjectsRepository__elements->setUpperBound(-1);
    m_CommObjectsRepository__elements->setTransient(false);
    m_CommObjectsRepository__elements->setVolatile(false);
    m_CommObjectsRepository__elements->setChangeable(true);
    m_CommObjectsRepository__elements->setContainment(true);
    m_CommObjectsRepository__elements->setResolveProxies(true);
    m_CommObjectsRepository__elements->setUnique(true);
    m_CommObjectsRepository__elements->setDerived(false);
    m_CommObjectsRepository__elements->setOrdered(true);
    m_CommObjectsRepository__version->setEType(m_VersionEClass);
    m_CommObjectsRepository__version->setName("version");
    m_CommObjectsRepository__version->setDefaultValueLiteral("");
    m_CommObjectsRepository__version->setLowerBound(0);
    m_CommObjectsRepository__version->setUpperBound(1);
    m_CommObjectsRepository__version->setTransient(false);
    m_CommObjectsRepository__version->setVolatile(false);
    m_CommObjectsRepository__version->setChangeable(true);
    m_CommObjectsRepository__version->setContainment(true);
    m_CommObjectsRepository__version->setResolveProxies(true);
    m_CommObjectsRepository__version->setUnique(true);
    m_CommObjectsRepository__version->setDerived(false);
    m_CommObjectsRepository__version->setOrdered(true);
    // AbstractCommElement
    m_AbstractCommElementEClass->setName("AbstractCommElement");
    m_AbstractCommElementEClass->setAbstract(true);
    m_AbstractCommElementEClass->setInterface(false);
    m_AbstractCommElement__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AbstractCommElement__name->setName("name");
    m_AbstractCommElement__name->setDefaultValueLiteral("");
    m_AbstractCommElement__name->setLowerBound(1);
    m_AbstractCommElement__name->setUpperBound(1);
    m_AbstractCommElement__name->setTransient(false);
    m_AbstractCommElement__name->setVolatile(false);
    m_AbstractCommElement__name->setChangeable(true);
    m_AbstractCommElement__name->setUnsettable(false);
    m_AbstractCommElement__name->setID(false);
    m_AbstractCommElement__name->setUnique(true);
    m_AbstractCommElement__name->setDerived(false);
    m_AbstractCommElement__name->setOrdered(true);
    // CommRepositoryImport
    m_CommRepositoryImportEClass->setName("CommRepositoryImport");
    m_CommRepositoryImportEClass->setAbstract(false);
    m_CommRepositoryImportEClass->setInterface(false);
    m_CommRepositoryImport__importedNamespace->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_CommRepositoryImport__importedNamespace->setName("importedNamespace");
    m_CommRepositoryImport__importedNamespace->setDefaultValueLiteral("");
    m_CommRepositoryImport__importedNamespace->setLowerBound(1);
    m_CommRepositoryImport__importedNamespace->setUpperBound(1);
    m_CommRepositoryImport__importedNamespace->setTransient(false);
    m_CommRepositoryImport__importedNamespace->setVolatile(false);
    m_CommRepositoryImport__importedNamespace->setChangeable(true);
    m_CommRepositoryImport__importedNamespace->setUnsettable(false);
    m_CommRepositoryImport__importedNamespace->setID(false);
    m_CommRepositoryImport__importedNamespace->setUnique(true);
    m_CommRepositoryImport__importedNamespace->setDerived(false);
    m_CommRepositoryImport__importedNamespace->setOrdered(true);
    // Version
    m_VersionEClass->setName("Version");
    m_VersionEClass->setAbstract(false);
    m_VersionEClass->setInterface(false);
    m_Version__major->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_Version__major->setName("major");
    m_Version__major->setDefaultValueLiteral("");
    m_Version__major->setLowerBound(1);
    m_Version__major->setUpperBound(1);
    m_Version__major->setTransient(false);
    m_Version__major->setVolatile(false);
    m_Version__major->setChangeable(true);
    m_Version__major->setUnsettable(false);
    m_Version__major->setID(false);
    m_Version__major->setUnique(true);
    m_Version__major->setDerived(false);
    m_Version__major->setOrdered(true);
    m_Version__minor->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_Version__minor->setName("minor");
    m_Version__minor->setDefaultValueLiteral("");
    m_Version__minor->setLowerBound(1);
    m_Version__minor->setUpperBound(1);
    m_Version__minor->setTransient(false);
    m_Version__minor->setVolatile(false);
    m_Version__minor->setChangeable(true);
    m_Version__minor->setUnsettable(false);
    m_Version__minor->setID(false);
    m_Version__minor->setUnique(true);
    m_Version__minor->setDerived(false);
    m_Version__minor->setOrdered(true);
    m_Version__patch->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEInt());
    m_Version__patch->setName("patch");
    m_Version__patch->setDefaultValueLiteral("");
    m_Version__patch->setLowerBound(0);
    m_Version__patch->setUpperBound(1);
    m_Version__patch->setTransient(false);
    m_Version__patch->setVolatile(false);
    m_Version__patch->setChangeable(true);
    m_Version__patch->setUnsettable(false);
    m_Version__patch->setID(false);
    m_Version__patch->setUnique(true);
    m_Version__patch->setDerived(false);
    m_Version__patch->setOrdered(true);
    // Enumeration
    m_EnumerationEClass->setName("Enumeration");
    m_EnumerationEClass->setAbstract(false);
    m_EnumerationEClass->setInterface(false);
    m_Enumeration__enums->setEType(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getEnumerationElement());
    m_Enumeration__enums->setName("enums");
    m_Enumeration__enums->setDefaultValueLiteral("");
    m_Enumeration__enums->setLowerBound(0);
    m_Enumeration__enums->setUpperBound(-1);
    m_Enumeration__enums->setTransient(false);
    m_Enumeration__enums->setVolatile(false);
    m_Enumeration__enums->setChangeable(true);
    m_Enumeration__enums->setContainment(true);
    m_Enumeration__enums->setResolveProxies(true);
    m_Enumeration__enums->setUnique(true);
    m_Enumeration__enums->setDerived(false);
    m_Enumeration__enums->setOrdered(true);
    // CommunicationObject
    m_CommunicationObjectEClass->setName("CommunicationObject");
    m_CommunicationObjectEClass->setAbstract(false);
    m_CommunicationObjectEClass->setInterface(false);
    m_CommunicationObject__attributes->setEType(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAttributeDefinition());
    m_CommunicationObject__attributes->setName("attributes");
    m_CommunicationObject__attributes->setDefaultValueLiteral("");
    m_CommunicationObject__attributes->setLowerBound(0);
    m_CommunicationObject__attributes->setUpperBound(-1);
    m_CommunicationObject__attributes->setTransient(false);
    m_CommunicationObject__attributes->setVolatile(false);
    m_CommunicationObject__attributes->setChangeable(true);
    m_CommunicationObject__attributes->setContainment(true);
    m_CommunicationObject__attributes->setResolveProxies(true);
    m_CommunicationObject__attributes->setUnique(true);
    m_CommunicationObject__attributes->setDerived(false);
    m_CommunicationObject__attributes->setOrdered(true);
    // CommElementValue
    m_CommElementValueEClass->setName("CommElementValue");
    m_CommElementValueEClass->setAbstract(false);
    m_CommElementValueEClass->setInterface(false);
    m_CommElementValue__value->setEType(m_AbstractCommElementEClass);
    m_CommElementValue__value->setName("value");
    m_CommElementValue__value->setDefaultValueLiteral("");
    m_CommElementValue__value->setLowerBound(1);
    m_CommElementValue__value->setUpperBound(1);
    m_CommElementValue__value->setTransient(false);
    m_CommElementValue__value->setVolatile(false);
    m_CommElementValue__value->setChangeable(true);
    m_CommElementValue__value->setContainment(false);
    m_CommElementValue__value->setResolveProxies(true);
    m_CommElementValue__value->setUnique(true);
    m_CommElementValue__value->setDerived(false);
    m_CommElementValue__value->setOrdered(true);
    // CommElementReference
    m_CommElementReferenceEClass->setName("CommElementReference");
    m_CommElementReferenceEClass->setAbstract(false);
    m_CommElementReferenceEClass->setInterface(false);
    m_CommElementReference__typeName->setEType(m_AbstractCommElementEClass);
    m_CommElementReference__typeName->setName("typeName");
    m_CommElementReference__typeName->setDefaultValueLiteral("");
    m_CommElementReference__typeName->setLowerBound(1);
    m_CommElementReference__typeName->setUpperBound(1);
    m_CommElementReference__typeName->setTransient(false);
    m_CommElementReference__typeName->setVolatile(false);
    m_CommElementReference__typeName->setChangeable(true);
    m_CommElementReference__typeName->setContainment(false);
    m_CommElementReference__typeName->setResolveProxies(true);
    m_CommElementReference__typeName->setUnique(true);
    m_CommElementReference__typeName->setDerived(false);
    m_CommElementReference__typeName->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr CommunicationObjectPackage::getCommObjectModel()
{
    return m_CommObjectModelEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getCommObjectsRepository()
{
    return m_CommObjectsRepositoryEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getAbstractCommElement()
{
    return m_AbstractCommElementEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getCommRepositoryImport()
{
    return m_CommRepositoryImportEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getVersion()
{
    return m_VersionEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getEnumeration()
{
    return m_EnumerationEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getCommunicationObject()
{
    return m_CommunicationObjectEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getCommElementValue()
{
    return m_CommElementValueEClass;
}
::ecore::EClass_ptr CommunicationObjectPackage::getCommElementReference()
{
    return m_CommElementReferenceEClass;
}

::ecore::EReference_ptr CommunicationObjectPackage::getCommObjectModel__repository()
{
    return m_CommObjectModel__repository;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommObjectModel__imports()
{
    return m_CommObjectModel__imports;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getCommObjectsRepository__name()
{
    return m_CommObjectsRepository__name;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommObjectsRepository__elements()
{
    return m_CommObjectsRepository__elements;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommObjectsRepository__version()
{
    return m_CommObjectsRepository__version;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getCommObjectsRepository__dependency()
{
    return m_CommObjectsRepository__dependency;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getAbstractCommElement__name()
{
    return m_AbstractCommElement__name;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getCommRepositoryImport__importedNamespace()
{
    return m_CommRepositoryImport__importedNamespace;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getVersion__major()
{
    return m_Version__major;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getVersion__minor()
{
    return m_Version__minor;
}
::ecore::EAttribute_ptr CommunicationObjectPackage::getVersion__patch()
{
    return m_Version__patch;
}
::ecore::EReference_ptr CommunicationObjectPackage::getEnumeration__enums()
{
    return m_Enumeration__enums;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommunicationObject__attributes()
{
    return m_CommunicationObject__attributes;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommElementValue__value()
{
    return m_CommElementValue__value;
}
::ecore::EReference_ptr CommunicationObjectPackage::getAbstractAttributeType__array()
{
    return m_AbstractAttributeType__array;
}
::ecore::EReference_ptr CommunicationObjectPackage::getCommElementReference__typeName()
{
    return m_CommElementReference__typeName;
}

