// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <parameterDefinition/ParameterDefinitionFactory.hpp>
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/ParamDefModel.hpp>
#include <parameterDefinition/ParameterSetRepository.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <parameterDefinition/AbstractParameter.hpp>
#include <parameterDefinition/ParameterDefinition.hpp>
#include <parameterDefinition/TriggerDefinition.hpp>
#include <parameterDefinition/ParamDefRepoImport.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::parameterDefinition;

ParameterDefinitionFactory::ParameterDefinitionFactory()
{
}

::ecore::EObject_ptr ParameterDefinitionFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case ParameterDefinitionPackage::PARAMDEFMODEL:
        return createParamDefModel();
    case ParameterDefinitionPackage::PARAMETERSETREPOSITORY:
        return createParameterSetRepository();
    case ParameterDefinitionPackage::PARAMETERSETDEFINITION:
        return createParameterSetDefinition();
    case ParameterDefinitionPackage::ABSTRACTPARAMETER:
        return createAbstractParameter();
    case ParameterDefinitionPackage::PARAMETERDEFINITION:
        return createParameterDefinition();
    case ParameterDefinitionPackage::TRIGGERDEFINITION:
        return createTriggerDefinition();
    case ParameterDefinitionPackage::PARAMDEFREPOIMPORT:
        return createParamDefRepoImport();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject ParameterDefinitionFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString ParameterDefinitionFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

ParamDefModel_ptr ParameterDefinitionFactory::createParamDefModel()
{
    return ::ecore::Ptr < ParamDefModel > (new ParamDefModel);
}
ParameterSetRepository_ptr ParameterDefinitionFactory::createParameterSetRepository()
{
    return ::ecore::Ptr < ParameterSetRepository > (new ParameterSetRepository);
}
ParameterSetDefinition_ptr ParameterDefinitionFactory::createParameterSetDefinition()
{
    return ::ecore::Ptr < ParameterSetDefinition > (new ParameterSetDefinition);
}
AbstractParameter_ptr ParameterDefinitionFactory::createAbstractParameter()
{
    return ::ecore::Ptr < AbstractParameter > (new AbstractParameter);
}
ParameterDefinition_ptr ParameterDefinitionFactory::createParameterDefinition()
{
    return ::ecore::Ptr < ParameterDefinition > (new ParameterDefinition);
}
TriggerDefinition_ptr ParameterDefinitionFactory::createTriggerDefinition()
{
    return ::ecore::Ptr < TriggerDefinition > (new TriggerDefinition);
}
ParamDefRepoImport_ptr ParameterDefinitionFactory::createParamDefRepoImport()
{
    return ::ecore::Ptr < ParamDefRepoImport > (new ParamDefRepoImport);
}

