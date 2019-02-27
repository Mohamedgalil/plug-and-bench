// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STANDARDIZED_PROBLEM_FORWARD_HPP
#define _STANDARDIZED_PROBLEM_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(standardized_problem_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace standardized_problem
{

// EDataType

// EClass

// StandardizedProblem
    class StandardizedProblem;
    using StandardizedProblem_ptr = ::ecore::Ptr<StandardizedProblem>;

// ScenarioDef
    class ScenarioDef;
    using ScenarioDef_ptr = ::ecore::Ptr<ScenarioDef>;

// PerformanceMeasure
    class PerformanceMeasure;
    using PerformanceMeasure_ptr = ::ecore::Ptr<PerformanceMeasure>;

// DescriptorObject
    class DescriptorObject;
    using DescriptorObject_ptr = ::ecore::Ptr<DescriptorObject>;

// EnvironmentVariableDefinition
    class EnvironmentVariableDefinition;
    using EnvironmentVariableDefinition_ptr = ::ecore::Ptr<EnvironmentVariableDefinition>;

// IScoreElement
    class IScoreElement;
    using IScoreElement_ptr = ::ecore::Ptr<IScoreElement>;

// IScore
    class IScore;
    using IScore_ptr = ::ecore::Ptr<IScore>;

// Tuple
    class Tuple;
    using Tuple_ptr = ::ecore::Ptr<Tuple>;

// WeightedPerfMeasure
    class WeightedPerfMeasure;
    using WeightedPerfMeasure_ptr = ::ecore::Ptr<WeightedPerfMeasure>;

// EnvironmentVariable
    class EnvironmentVariable;
    using EnvironmentVariable_ptr = ::ecore::Ptr<EnvironmentVariable>;

// BenchmarkConstraint
    class BenchmarkConstraint;
    using BenchmarkConstraint_ptr = ::ecore::Ptr<BenchmarkConstraint>;

// BenchmarkConstraintDefinition
    class BenchmarkConstraintDefinition;
    using BenchmarkConstraintDefinition_ptr = ::ecore::Ptr<BenchmarkConstraintDefinition>;

// BenchmarkAttributeDefinition
    class BenchmarkAttributeDefinition;
    using BenchmarkAttributeDefinition_ptr = ::ecore::Ptr<BenchmarkAttributeDefinition>;

// EEnum

// Package & Factory
    class Standardized_problemFactory;
    using Standardized_problemFactory_ptr = ::ecore::Ptr<Standardized_problemFactory>;
    class Standardized_problemPackage;
    using Standardized_problemPackage_ptr = ::ecore::Ptr<Standardized_problemPackage>;

} // standardized_problem

#endif // _STANDARDIZED_PROBLEM_FORWARD_HPP

