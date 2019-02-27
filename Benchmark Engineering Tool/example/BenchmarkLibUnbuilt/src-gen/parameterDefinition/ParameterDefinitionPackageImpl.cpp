// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/ParameterDefinitionFactory.hpp>
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
#include <basicAttributes/AttributeDefinition.hpp>

using namespace ::parameterDefinition;

ParameterDefinitionPackage::ParameterDefinitionPackage()
{

    // Feature definitions of ParamDefModel
    m_ParamDefModel__repository = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ParamDefModel__imports = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ParameterSetRepository
    m_ParameterSetRepository__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ParameterSetRepository__sets = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ParameterSetDefinition
    m_ParameterSetDefinition__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ParameterSetDefinition__parameters = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ParameterSetDefinition__extends = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractParameter
    m_AbstractParameter__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_AbstractParameter__attributes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ParameterDefinition

    // Feature definitions of TriggerDefinition

    // Feature definitions of ParamDefRepoImport
    m_ParamDefRepoImport__importedNamespace = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void ParameterDefinitionPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ParameterDefinitionFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ParamDefModel
    m_ParamDefModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParamDefModelEClass->setClassifierID(PARAMDEFMODEL);
    m_ParamDefModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParamDefModelEClass);
    // m_ParamDefModel__repository has already been allocated above
    m_ParamDefModel__repository->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY);
    m_ParamDefModelEClass->getEStructuralFeatures().push_back(
            m_ParamDefModel__repository);
    // m_ParamDefModel__imports has already been allocated above
    m_ParamDefModel__imports->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS);
    m_ParamDefModelEClass->getEStructuralFeatures().push_back(
            m_ParamDefModel__imports);

    // ParameterSetRepository
    m_ParameterSetRepositoryEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParameterSetRepositoryEClass->setClassifierID(PARAMETERSETREPOSITORY);
    m_ParameterSetRepositoryEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParameterSetRepositoryEClass);
    // m_ParameterSetRepository__name has already been allocated above
    m_ParameterSetRepository__name->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__NAME);
    m_ParameterSetRepositoryEClass->getEStructuralFeatures().push_back(
            m_ParameterSetRepository__name);
    // m_ParameterSetRepository__sets has already been allocated above
    m_ParameterSetRepository__sets->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS);
    m_ParameterSetRepositoryEClass->getEStructuralFeatures().push_back(
            m_ParameterSetRepository__sets);

    // ParameterSetDefinition
    m_ParameterSetDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParameterSetDefinitionEClass->setClassifierID(PARAMETERSETDEFINITION);
    m_ParameterSetDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParameterSetDefinitionEClass);
    // m_ParameterSetDefinition__name has already been allocated above
    m_ParameterSetDefinition__name->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__NAME);
    m_ParameterSetDefinitionEClass->getEStructuralFeatures().push_back(
            m_ParameterSetDefinition__name);
    // m_ParameterSetDefinition__parameters has already been allocated above
    m_ParameterSetDefinition__parameters->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS);
    m_ParameterSetDefinitionEClass->getEStructuralFeatures().push_back(
            m_ParameterSetDefinition__parameters);
    // m_ParameterSetDefinition__extends has already been allocated above
    m_ParameterSetDefinition__extends->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS);
    m_ParameterSetDefinitionEClass->getEStructuralFeatures().push_back(
            m_ParameterSetDefinition__extends);

    // AbstractParameter
    m_AbstractParameterEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractParameterEClass->setClassifierID(ABSTRACTPARAMETER);
    m_AbstractParameterEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractParameterEClass);
    // m_AbstractParameter__name has already been allocated above
    m_AbstractParameter__name->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__NAME);
    m_AbstractParameterEClass->getEStructuralFeatures().push_back(
            m_AbstractParameter__name);
    // m_AbstractParameter__attributes has already been allocated above
    m_AbstractParameter__attributes->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::ABSTRACTPARAMETER__ATTRIBUTES);
    m_AbstractParameterEClass->getEStructuralFeatures().push_back(
            m_AbstractParameter__attributes);

    // ParameterDefinition
    m_ParameterDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParameterDefinitionEClass->setClassifierID(PARAMETERDEFINITION);
    m_ParameterDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParameterDefinitionEClass);

    // TriggerDefinition
    m_TriggerDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TriggerDefinitionEClass->setClassifierID(TRIGGERDEFINITION);
    m_TriggerDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TriggerDefinitionEClass);

    // ParamDefRepoImport
    m_ParamDefRepoImportEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParamDefRepoImportEClass->setClassifierID(PARAMDEFREPOIMPORT);
    m_ParamDefRepoImportEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParamDefRepoImportEClass);
    // m_ParamDefRepoImport__importedNamespace has already been allocated above
    m_ParamDefRepoImport__importedNamespace->setFeatureID(
            ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFREPOIMPORT__IMPORTEDNAMESPACE);
    m_ParamDefRepoImportEClass->getEStructuralFeatures().push_back(
            m_ParamDefRepoImport__importedNamespace);

    // Create enums

    // Create data types

    // Initialize package
    setName("parameterDefinition");
    setNsPrefix("ParameterDefinition");
    setNsURI("http://www.ecore.org/service/ParameterDefinition");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_ParameterDefinitionEClass->getESuperTypes().push_back(
            m_AbstractParameterEClass);
    m_TriggerDefinitionEClass->getESuperTypes().push_back(
            m_AbstractParameterEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ParamDefModel
    m_ParamDefModelEClass->setName("ParamDefModel");
    m_ParamDefModelEClass->setAbstract(false);
    m_ParamDefModelEClass->setInterface(false);
    m_ParamDefModel__repository->setEType(m_ParameterSetRepositoryEClass);
    m_ParamDefModel__repository->setName("repository");
    m_ParamDefModel__repository->setDefaultValueLiteral("");
    m_ParamDefModel__repository->setLowerBound(0);
    m_ParamDefModel__repository->setUpperBound(1);
    m_ParamDefModel__repository->setTransient(false);
    m_ParamDefModel__repository->setVolatile(false);
    m_ParamDefModel__repository->setChangeable(true);
    m_ParamDefModel__repository->setContainment(true);
    m_ParamDefModel__repository->setResolveProxies(true);
    m_ParamDefModel__repository->setUnique(true);
    m_ParamDefModel__repository->setDerived(false);
    m_ParamDefModel__repository->setOrdered(true);
    m_ParamDefModel__imports->setEType(m_ParamDefRepoImportEClass);
    m_ParamDefModel__imports->setName("imports");
    m_ParamDefModel__imports->setDefaultValueLiteral("");
    m_ParamDefModel__imports->setLowerBound(0);
    m_ParamDefModel__imports->setUpperBound(-1);
    m_ParamDefModel__imports->setTransient(false);
    m_ParamDefModel__imports->setVolatile(false);
    m_ParamDefModel__imports->setChangeable(true);
    m_ParamDefModel__imports->setContainment(true);
    m_ParamDefModel__imports->setResolveProxies(true);
    m_ParamDefModel__imports->setUnique(true);
    m_ParamDefModel__imports->setDerived(false);
    m_ParamDefModel__imports->setOrdered(true);
    // ParameterSetRepository
    m_ParameterSetRepositoryEClass->setName("ParameterSetRepository");
    m_ParameterSetRepositoryEClass->setAbstract(false);
    m_ParameterSetRepositoryEClass->setInterface(false);
    m_ParameterSetRepository__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ParameterSetRepository__name->setName("name");
    m_ParameterSetRepository__name->setDefaultValueLiteral("");
    m_ParameterSetRepository__name->setLowerBound(1);
    m_ParameterSetRepository__name->setUpperBound(1);
    m_ParameterSetRepository__name->setTransient(false);
    m_ParameterSetRepository__name->setVolatile(false);
    m_ParameterSetRepository__name->setChangeable(true);
    m_ParameterSetRepository__name->setUnsettable(false);
    m_ParameterSetRepository__name->setID(false);
    m_ParameterSetRepository__name->setUnique(true);
    m_ParameterSetRepository__name->setDerived(false);
    m_ParameterSetRepository__name->setOrdered(true);
    m_ParameterSetRepository__sets->setEType(m_ParameterSetDefinitionEClass);
    m_ParameterSetRepository__sets->setName("sets");
    m_ParameterSetRepository__sets->setDefaultValueLiteral("");
    m_ParameterSetRepository__sets->setLowerBound(0);
    m_ParameterSetRepository__sets->setUpperBound(-1);
    m_ParameterSetRepository__sets->setTransient(false);
    m_ParameterSetRepository__sets->setVolatile(false);
    m_ParameterSetRepository__sets->setChangeable(true);
    m_ParameterSetRepository__sets->setContainment(true);
    m_ParameterSetRepository__sets->setResolveProxies(true);
    m_ParameterSetRepository__sets->setUnique(true);
    m_ParameterSetRepository__sets->setDerived(false);
    m_ParameterSetRepository__sets->setOrdered(true);
    // ParameterSetDefinition
    m_ParameterSetDefinitionEClass->setName("ParameterSetDefinition");
    m_ParameterSetDefinitionEClass->setAbstract(false);
    m_ParameterSetDefinitionEClass->setInterface(false);
    m_ParameterSetDefinition__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ParameterSetDefinition__name->setName("name");
    m_ParameterSetDefinition__name->setDefaultValueLiteral("");
    m_ParameterSetDefinition__name->setLowerBound(1);
    m_ParameterSetDefinition__name->setUpperBound(1);
    m_ParameterSetDefinition__name->setTransient(false);
    m_ParameterSetDefinition__name->setVolatile(false);
    m_ParameterSetDefinition__name->setChangeable(true);
    m_ParameterSetDefinition__name->setUnsettable(false);
    m_ParameterSetDefinition__name->setID(false);
    m_ParameterSetDefinition__name->setUnique(true);
    m_ParameterSetDefinition__name->setDerived(false);
    m_ParameterSetDefinition__name->setOrdered(true);
    m_ParameterSetDefinition__parameters->setEType(m_AbstractParameterEClass);
    m_ParameterSetDefinition__parameters->setName("parameters");
    m_ParameterSetDefinition__parameters->setDefaultValueLiteral("");
    m_ParameterSetDefinition__parameters->setLowerBound(0);
    m_ParameterSetDefinition__parameters->setUpperBound(-1);
    m_ParameterSetDefinition__parameters->setTransient(false);
    m_ParameterSetDefinition__parameters->setVolatile(false);
    m_ParameterSetDefinition__parameters->setChangeable(true);
    m_ParameterSetDefinition__parameters->setContainment(true);
    m_ParameterSetDefinition__parameters->setResolveProxies(true);
    m_ParameterSetDefinition__parameters->setUnique(true);
    m_ParameterSetDefinition__parameters->setDerived(false);
    m_ParameterSetDefinition__parameters->setOrdered(true);
    m_ParameterSetDefinition__extends->setEType(m_ParameterSetDefinitionEClass);
    m_ParameterSetDefinition__extends->setName("extends");
    m_ParameterSetDefinition__extends->setDefaultValueLiteral("");
    m_ParameterSetDefinition__extends->setLowerBound(0);
    m_ParameterSetDefinition__extends->setUpperBound(-1);
    m_ParameterSetDefinition__extends->setTransient(false);
    m_ParameterSetDefinition__extends->setVolatile(false);
    m_ParameterSetDefinition__extends->setChangeable(true);
    m_ParameterSetDefinition__extends->setContainment(false);
    m_ParameterSetDefinition__extends->setResolveProxies(true);
    m_ParameterSetDefinition__extends->setUnique(true);
    m_ParameterSetDefinition__extends->setDerived(false);
    m_ParameterSetDefinition__extends->setOrdered(true);
    // AbstractParameter
    m_AbstractParameterEClass->setName("AbstractParameter");
    m_AbstractParameterEClass->setAbstract(true);
    m_AbstractParameterEClass->setInterface(false);
    m_AbstractParameter__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AbstractParameter__name->setName("name");
    m_AbstractParameter__name->setDefaultValueLiteral("");
    m_AbstractParameter__name->setLowerBound(1);
    m_AbstractParameter__name->setUpperBound(1);
    m_AbstractParameter__name->setTransient(false);
    m_AbstractParameter__name->setVolatile(false);
    m_AbstractParameter__name->setChangeable(true);
    m_AbstractParameter__name->setUnsettable(false);
    m_AbstractParameter__name->setID(false);
    m_AbstractParameter__name->setUnique(true);
    m_AbstractParameter__name->setDerived(false);
    m_AbstractParameter__name->setOrdered(true);
    m_AbstractParameter__attributes->setEType(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAttributeDefinition());
    m_AbstractParameter__attributes->setName("attributes");
    m_AbstractParameter__attributes->setDefaultValueLiteral("");
    m_AbstractParameter__attributes->setLowerBound(0);
    m_AbstractParameter__attributes->setUpperBound(-1);
    m_AbstractParameter__attributes->setTransient(false);
    m_AbstractParameter__attributes->setVolatile(false);
    m_AbstractParameter__attributes->setChangeable(true);
    m_AbstractParameter__attributes->setContainment(true);
    m_AbstractParameter__attributes->setResolveProxies(true);
    m_AbstractParameter__attributes->setUnique(true);
    m_AbstractParameter__attributes->setDerived(false);
    m_AbstractParameter__attributes->setOrdered(true);
    // ParameterDefinition
    m_ParameterDefinitionEClass->setName("ParameterDefinition");
    m_ParameterDefinitionEClass->setAbstract(false);
    m_ParameterDefinitionEClass->setInterface(false);
    // TriggerDefinition
    m_TriggerDefinitionEClass->setName("TriggerDefinition");
    m_TriggerDefinitionEClass->setAbstract(false);
    m_TriggerDefinitionEClass->setInterface(false);
    // ParamDefRepoImport
    m_ParamDefRepoImportEClass->setName("ParamDefRepoImport");
    m_ParamDefRepoImportEClass->setAbstract(false);
    m_ParamDefRepoImportEClass->setInterface(false);
    m_ParamDefRepoImport__importedNamespace->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ParamDefRepoImport__importedNamespace->setName("importedNamespace");
    m_ParamDefRepoImport__importedNamespace->setDefaultValueLiteral("");
    m_ParamDefRepoImport__importedNamespace->setLowerBound(1);
    m_ParamDefRepoImport__importedNamespace->setUpperBound(1);
    m_ParamDefRepoImport__importedNamespace->setTransient(false);
    m_ParamDefRepoImport__importedNamespace->setVolatile(false);
    m_ParamDefRepoImport__importedNamespace->setChangeable(true);
    m_ParamDefRepoImport__importedNamespace->setUnsettable(false);
    m_ParamDefRepoImport__importedNamespace->setID(false);
    m_ParamDefRepoImport__importedNamespace->setUnique(true);
    m_ParamDefRepoImport__importedNamespace->setDerived(false);
    m_ParamDefRepoImport__importedNamespace->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ParameterDefinitionPackage::getParamDefModel()
{
    return m_ParamDefModelEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getParameterSetRepository()
{
    return m_ParameterSetRepositoryEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getParameterSetDefinition()
{
    return m_ParameterSetDefinitionEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getAbstractParameter()
{
    return m_AbstractParameterEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getParameterDefinition()
{
    return m_ParameterDefinitionEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getTriggerDefinition()
{
    return m_TriggerDefinitionEClass;
}
::ecore::EClass_ptr ParameterDefinitionPackage::getParamDefRepoImport()
{
    return m_ParamDefRepoImportEClass;
}

::ecore::EReference_ptr ParameterDefinitionPackage::getParamDefModel__repository()
{
    return m_ParamDefModel__repository;
}
::ecore::EReference_ptr ParameterDefinitionPackage::getParamDefModel__imports()
{
    return m_ParamDefModel__imports;
}
::ecore::EAttribute_ptr ParameterDefinitionPackage::getParameterSetRepository__name()
{
    return m_ParameterSetRepository__name;
}
::ecore::EReference_ptr ParameterDefinitionPackage::getParameterSetRepository__sets()
{
    return m_ParameterSetRepository__sets;
}
::ecore::EAttribute_ptr ParameterDefinitionPackage::getParameterSetDefinition__name()
{
    return m_ParameterSetDefinition__name;
}
::ecore::EReference_ptr ParameterDefinitionPackage::getParameterSetDefinition__parameters()
{
    return m_ParameterSetDefinition__parameters;
}
::ecore::EReference_ptr ParameterDefinitionPackage::getParameterSetDefinition__extends()
{
    return m_ParameterSetDefinition__extends;
}
::ecore::EAttribute_ptr ParameterDefinitionPackage::getAbstractParameter__name()
{
    return m_AbstractParameter__name;
}
::ecore::EReference_ptr ParameterDefinitionPackage::getAbstractParameter__attributes()
{
    return m_AbstractParameter__attributes;
}
::ecore::EAttribute_ptr ParameterDefinitionPackage::getParamDefRepoImport__importedNamespace()
{
    return m_ParamDefRepoImport__importedNamespace;
}

