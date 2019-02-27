// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModePackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentMode/ComponentModePackage.hpp>
#include <componentMode/ComponentModeFactory.hpp>
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

using namespace ::componentMode;

ComponentModePackage::ComponentModePackage()
{

    // Feature definitions of ComponentModeModel
    m_ComponentModeModel__repository = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentModeRepository
    m_ComponentModeRepository__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ComponentModeRepository__collections = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentModeCollection
    m_ComponentModeCollection__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ComponentModeCollection__modes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ComponentModeDefinition
    m_ComponentModeDefinition__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

}

void ComponentModePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = ComponentModeFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // ComponentModeModel
    m_ComponentModeModelEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentModeModelEClass->setClassifierID(COMPONENTMODEMODEL);
    m_ComponentModeModelEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentModeModelEClass);
    // m_ComponentModeModel__repository has already been allocated above
    m_ComponentModeModel__repository->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY);
    m_ComponentModeModelEClass->getEStructuralFeatures().push_back(
            m_ComponentModeModel__repository);

    // ComponentModeRepository
    m_ComponentModeRepositoryEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentModeRepositoryEClass->setClassifierID(COMPONENTMODEREPOSITORY);
    m_ComponentModeRepositoryEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentModeRepositoryEClass);
    // m_ComponentModeRepository__name has already been allocated above
    m_ComponentModeRepository__name->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__NAME);
    m_ComponentModeRepositoryEClass->getEStructuralFeatures().push_back(
            m_ComponentModeRepository__name);
    // m_ComponentModeRepository__collections has already been allocated above
    m_ComponentModeRepository__collections->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS);
    m_ComponentModeRepositoryEClass->getEStructuralFeatures().push_back(
            m_ComponentModeRepository__collections);

    // ComponentModeCollection
    m_ComponentModeCollectionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentModeCollectionEClass->setClassifierID(COMPONENTMODECOLLECTION);
    m_ComponentModeCollectionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentModeCollectionEClass);
    // m_ComponentModeCollection__name has already been allocated above
    m_ComponentModeCollection__name->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__NAME);
    m_ComponentModeCollectionEClass->getEStructuralFeatures().push_back(
            m_ComponentModeCollection__name);
    // m_ComponentModeCollection__modes has already been allocated above
    m_ComponentModeCollection__modes->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES);
    m_ComponentModeCollectionEClass->getEStructuralFeatures().push_back(
            m_ComponentModeCollection__modes);

    // ComponentModeDefinition
    m_ComponentModeDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ComponentModeDefinitionEClass->setClassifierID(COMPONENTMODEDEFINITION);
    m_ComponentModeDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ComponentModeDefinitionEClass);
    // m_ComponentModeDefinition__name has already been allocated above
    m_ComponentModeDefinition__name->setFeatureID(
            ::componentMode::ComponentModePackage::COMPONENTMODEDEFINITION__NAME);
    m_ComponentModeDefinitionEClass->getEStructuralFeatures().push_back(
            m_ComponentModeDefinition__name);

    // Create enums

    // Create data types

    // Initialize package
    setName("componentMode");
    setNsPrefix("ComponentMode");
    setNsURI("http://www.ecore.org/service/ComponentMode");

    // TODO: bounds for type parameters

    // Add supertypes to classes

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // ComponentModeModel
    m_ComponentModeModelEClass->setName("ComponentModeModel");
    m_ComponentModeModelEClass->setAbstract(false);
    m_ComponentModeModelEClass->setInterface(false);
    m_ComponentModeModel__repository->setEType(m_ComponentModeRepositoryEClass);
    m_ComponentModeModel__repository->setName("repository");
    m_ComponentModeModel__repository->setDefaultValueLiteral("");
    m_ComponentModeModel__repository->setLowerBound(0);
    m_ComponentModeModel__repository->setUpperBound(1);
    m_ComponentModeModel__repository->setTransient(false);
    m_ComponentModeModel__repository->setVolatile(false);
    m_ComponentModeModel__repository->setChangeable(true);
    m_ComponentModeModel__repository->setContainment(true);
    m_ComponentModeModel__repository->setResolveProxies(true);
    m_ComponentModeModel__repository->setUnique(true);
    m_ComponentModeModel__repository->setDerived(false);
    m_ComponentModeModel__repository->setOrdered(true);
    // ComponentModeRepository
    m_ComponentModeRepositoryEClass->setName("ComponentModeRepository");
    m_ComponentModeRepositoryEClass->setAbstract(false);
    m_ComponentModeRepositoryEClass->setInterface(false);
    m_ComponentModeRepository__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ComponentModeRepository__name->setName("name");
    m_ComponentModeRepository__name->setDefaultValueLiteral("");
    m_ComponentModeRepository__name->setLowerBound(1);
    m_ComponentModeRepository__name->setUpperBound(1);
    m_ComponentModeRepository__name->setTransient(false);
    m_ComponentModeRepository__name->setVolatile(false);
    m_ComponentModeRepository__name->setChangeable(true);
    m_ComponentModeRepository__name->setUnsettable(false);
    m_ComponentModeRepository__name->setID(false);
    m_ComponentModeRepository__name->setUnique(true);
    m_ComponentModeRepository__name->setDerived(false);
    m_ComponentModeRepository__name->setOrdered(true);
    m_ComponentModeRepository__collections->setEType(
            m_ComponentModeCollectionEClass);
    m_ComponentModeRepository__collections->setName("collections");
    m_ComponentModeRepository__collections->setDefaultValueLiteral("");
    m_ComponentModeRepository__collections->setLowerBound(0);
    m_ComponentModeRepository__collections->setUpperBound(-1);
    m_ComponentModeRepository__collections->setTransient(false);
    m_ComponentModeRepository__collections->setVolatile(false);
    m_ComponentModeRepository__collections->setChangeable(true);
    m_ComponentModeRepository__collections->setContainment(true);
    m_ComponentModeRepository__collections->setResolveProxies(true);
    m_ComponentModeRepository__collections->setUnique(true);
    m_ComponentModeRepository__collections->setDerived(false);
    m_ComponentModeRepository__collections->setOrdered(true);
    // ComponentModeCollection
    m_ComponentModeCollectionEClass->setName("ComponentModeCollection");
    m_ComponentModeCollectionEClass->setAbstract(false);
    m_ComponentModeCollectionEClass->setInterface(false);
    m_ComponentModeCollection__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ComponentModeCollection__name->setName("name");
    m_ComponentModeCollection__name->setDefaultValueLiteral("");
    m_ComponentModeCollection__name->setLowerBound(1);
    m_ComponentModeCollection__name->setUpperBound(1);
    m_ComponentModeCollection__name->setTransient(false);
    m_ComponentModeCollection__name->setVolatile(false);
    m_ComponentModeCollection__name->setChangeable(true);
    m_ComponentModeCollection__name->setUnsettable(false);
    m_ComponentModeCollection__name->setID(false);
    m_ComponentModeCollection__name->setUnique(true);
    m_ComponentModeCollection__name->setDerived(false);
    m_ComponentModeCollection__name->setOrdered(true);
    m_ComponentModeCollection__modes->setEType(m_ComponentModeDefinitionEClass);
    m_ComponentModeCollection__modes->setName("modes");
    m_ComponentModeCollection__modes->setDefaultValueLiteral("");
    m_ComponentModeCollection__modes->setLowerBound(0);
    m_ComponentModeCollection__modes->setUpperBound(-1);
    m_ComponentModeCollection__modes->setTransient(false);
    m_ComponentModeCollection__modes->setVolatile(false);
    m_ComponentModeCollection__modes->setChangeable(true);
    m_ComponentModeCollection__modes->setContainment(true);
    m_ComponentModeCollection__modes->setResolveProxies(true);
    m_ComponentModeCollection__modes->setUnique(true);
    m_ComponentModeCollection__modes->setDerived(false);
    m_ComponentModeCollection__modes->setOrdered(true);
    // ComponentModeDefinition
    m_ComponentModeDefinitionEClass->setName("ComponentModeDefinition");
    m_ComponentModeDefinitionEClass->setAbstract(false);
    m_ComponentModeDefinitionEClass->setInterface(false);
    m_ComponentModeDefinition__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_ComponentModeDefinition__name->setName("name");
    m_ComponentModeDefinition__name->setDefaultValueLiteral("");
    m_ComponentModeDefinition__name->setLowerBound(1);
    m_ComponentModeDefinition__name->setUpperBound(1);
    m_ComponentModeDefinition__name->setTransient(false);
    m_ComponentModeDefinition__name->setVolatile(false);
    m_ComponentModeDefinition__name->setChangeable(true);
    m_ComponentModeDefinition__name->setUnsettable(false);
    m_ComponentModeDefinition__name->setID(false);
    m_ComponentModeDefinition__name->setUnique(true);
    m_ComponentModeDefinition__name->setDerived(false);
    m_ComponentModeDefinition__name->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr ComponentModePackage::getComponentModeModel()
{
    return m_ComponentModeModelEClass;
}
::ecore::EClass_ptr ComponentModePackage::getComponentModeRepository()
{
    return m_ComponentModeRepositoryEClass;
}
::ecore::EClass_ptr ComponentModePackage::getComponentModeCollection()
{
    return m_ComponentModeCollectionEClass;
}
::ecore::EClass_ptr ComponentModePackage::getComponentModeDefinition()
{
    return m_ComponentModeDefinitionEClass;
}

::ecore::EReference_ptr ComponentModePackage::getComponentModeModel__repository()
{
    return m_ComponentModeModel__repository;
}
::ecore::EAttribute_ptr ComponentModePackage::getComponentModeRepository__name()
{
    return m_ComponentModeRepository__name;
}
::ecore::EReference_ptr ComponentModePackage::getComponentModeRepository__collections()
{
    return m_ComponentModeRepository__collections;
}
::ecore::EAttribute_ptr ComponentModePackage::getComponentModeCollection__name()
{
    return m_ComponentModeCollection__name;
}
::ecore::EReference_ptr ComponentModePackage::getComponentModeCollection__modes()
{
    return m_ComponentModeCollection__modes;
}
::ecore::EAttribute_ptr ComponentModePackage::getComponentModeDefinition__name()
{
    return m_ComponentModeDefinition__name;
}

