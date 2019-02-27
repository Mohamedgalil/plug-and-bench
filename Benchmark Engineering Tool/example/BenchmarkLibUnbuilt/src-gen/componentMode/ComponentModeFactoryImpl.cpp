// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentMode/ComponentModeFactory.hpp>
#include <componentMode/ComponentModePackage.hpp>
#include <componentMode/ComponentModeModel.hpp>
#include <componentMode/ComponentModeRepository.hpp>
#include <componentMode/ComponentModeCollection.hpp>
#include <componentMode/ComponentModeDefinition.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::componentMode;

ComponentModeFactory::ComponentModeFactory()
{
}

::ecore::EObject_ptr ComponentModeFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ComponentModePackage::COMPONENTMODEMODEL:
        return createComponentModeModel();
    case ComponentModePackage::COMPONENTMODEREPOSITORY:
        return createComponentModeRepository();
    case ComponentModePackage::COMPONENTMODECOLLECTION:
        return createComponentModeCollection();
    case ComponentModePackage::COMPONENTMODEDEFINITION:
        return createComponentModeDefinition();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ComponentModeFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ComponentModeFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ComponentModeModel_ptr ComponentModeFactory::createComponentModeModel()
{
    return ::ecore::Ptr < ComponentModeModel > (new ComponentModeModel);
}
ComponentModeRepository_ptr ComponentModeFactory::createComponentModeRepository()
{
    return ::ecore::Ptr < ComponentModeRepository
            > (new ComponentModeRepository);
}
ComponentModeCollection_ptr ComponentModeFactory::createComponentModeCollection()
{
    return ::ecore::Ptr < ComponentModeCollection
            > (new ComponentModeCollection);
}
ComponentModeDefinition_ptr ComponentModeFactory::createComponentModeDefinition()
{
    return ::ecore::Ptr < ComponentModeDefinition
            > (new ComponentModeDefinition);
}

