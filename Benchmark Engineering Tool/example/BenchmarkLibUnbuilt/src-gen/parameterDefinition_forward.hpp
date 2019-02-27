// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _PARAMETERDEFINITION_FORWARD_HPP
#define _PARAMETERDEFINITION_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(parameterDefinition_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace parameterDefinition
{

// EDataType

// EClass

// ParamDefModel
    class ParamDefModel;
    using ParamDefModel_ptr = ::ecore::Ptr<ParamDefModel>;

// ParameterSetRepository
    class ParameterSetRepository;
    using ParameterSetRepository_ptr = ::ecore::Ptr<ParameterSetRepository>;

// ParameterSetDefinition
    class ParameterSetDefinition;
    using ParameterSetDefinition_ptr = ::ecore::Ptr<ParameterSetDefinition>;

// AbstractParameter
    class AbstractParameter;
    using AbstractParameter_ptr = ::ecore::Ptr<AbstractParameter>;

// ParameterDefinition
    class ParameterDefinition;
    using ParameterDefinition_ptr = ::ecore::Ptr<ParameterDefinition>;

// TriggerDefinition
    class TriggerDefinition;
    using TriggerDefinition_ptr = ::ecore::Ptr<TriggerDefinition>;

// ParamDefRepoImport
    class ParamDefRepoImport;
    using ParamDefRepoImport_ptr = ::ecore::Ptr<ParamDefRepoImport>;

// EEnum

// Package & Factory
    class ParameterDefinitionFactory;
    using ParameterDefinitionFactory_ptr = ::ecore::Ptr<ParameterDefinitionFactory>;
    class ParameterDefinitionPackage;
    using ParameterDefinitionPackage_ptr = ::ecore::Ptr<ParameterDefinitionPackage>;

} // parameterDefinition

#endif // _PARAMETERDEFINITION_FORWARD_HPP

