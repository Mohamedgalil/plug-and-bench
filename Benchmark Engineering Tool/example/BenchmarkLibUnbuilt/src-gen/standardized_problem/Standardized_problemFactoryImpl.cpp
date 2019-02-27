// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <standardized_problem/Standardized_problemFactory.hpp>
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/StandardizedProblem.hpp>
#include <standardized_problem/ScenarioDef.hpp>
#include <standardized_problem/PerformanceMeasure.hpp>
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/EnvironmentVariableDefinition.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <standardized_problem/EnvironmentVariable.hpp>
#include <standardized_problem/BenchmarkConstraint.hpp>
#include <standardized_problem/BenchmarkConstraintDefinition.hpp>
#include <standardized_problem/BenchmarkAttributeDefinition.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::standardized_problem;

Standardized_problemFactory::Standardized_problemFactory()
{
}

::ecore::EObject_ptr Standardized_problemFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Standardized_problemPackage::STANDARDIZEDPROBLEM:
        return createStandardizedProblem();
    case Standardized_problemPackage::SCENARIODEF:
        return createScenarioDef();
    case Standardized_problemPackage::PERFORMANCEMEASURE:
        return createPerformanceMeasure();
    case Standardized_problemPackage::DESCRIPTOROBJECT:
        return createDescriptorObject();
    case Standardized_problemPackage::ENVIRONMENTVARIABLEDEFINITION:
        return createEnvironmentVariableDefinition();
    case Standardized_problemPackage::ISCOREELEMENT:
        return createIScoreElement();
    case Standardized_problemPackage::ISCORE:
        return createIScore();
    case Standardized_problemPackage::TUPLE:
        return createTuple();
    case Standardized_problemPackage::WEIGHTEDPERFMEASURE:
        return createWeightedPerfMeasure();
    case Standardized_problemPackage::ENVIRONMENTVARIABLE:
        return createEnvironmentVariable();
    case Standardized_problemPackage::BENCHMARKCONSTRAINT:
        return createBenchmarkConstraint();
    case Standardized_problemPackage::BENCHMARKCONSTRAINTDEFINITION:
        return createBenchmarkConstraintDefinition();
    case Standardized_problemPackage::BENCHMARKATTRIBUTEDEFINITION:
        return createBenchmarkAttributeDefinition();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Standardized_problemFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Standardized_problemFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

StandardizedProblem_ptr Standardized_problemFactory::createStandardizedProblem()
{
    return ::ecore::Ptr < StandardizedProblem > (new StandardizedProblem);
}
ScenarioDef_ptr Standardized_problemFactory::createScenarioDef()
{
    return ::ecore::Ptr < ScenarioDef > (new ScenarioDef);
}
PerformanceMeasure_ptr Standardized_problemFactory::createPerformanceMeasure()
{
    return ::ecore::Ptr < PerformanceMeasure > (new PerformanceMeasure);
}
DescriptorObject_ptr Standardized_problemFactory::createDescriptorObject()
{
    return ::ecore::Ptr < DescriptorObject > (new DescriptorObject);
}
EnvironmentVariableDefinition_ptr Standardized_problemFactory::createEnvironmentVariableDefinition()
{
    return ::ecore::Ptr < EnvironmentVariableDefinition
            > (new EnvironmentVariableDefinition);
}
IScoreElement_ptr Standardized_problemFactory::createIScoreElement()
{
    return ::ecore::Ptr < IScoreElement > (new IScoreElement);
}
IScore_ptr Standardized_problemFactory::createIScore()
{
    return ::ecore::Ptr < IScore > (new IScore);
}
Tuple_ptr Standardized_problemFactory::createTuple()
{
    return ::ecore::Ptr < Tuple > (new Tuple);
}
WeightedPerfMeasure_ptr Standardized_problemFactory::createWeightedPerfMeasure()
{
    return ::ecore::Ptr < WeightedPerfMeasure > (new WeightedPerfMeasure);
}
EnvironmentVariable_ptr Standardized_problemFactory::createEnvironmentVariable()
{
    return ::ecore::Ptr < EnvironmentVariable > (new EnvironmentVariable);
}
BenchmarkConstraint_ptr Standardized_problemFactory::createBenchmarkConstraint()
{
    return ::ecore::Ptr < BenchmarkConstraint > (new BenchmarkConstraint);
}
BenchmarkConstraintDefinition_ptr Standardized_problemFactory::createBenchmarkConstraintDefinition()
{
    return ::ecore::Ptr < BenchmarkConstraintDefinition
            > (new BenchmarkConstraintDefinition);
}
BenchmarkAttributeDefinition_ptr Standardized_problemFactory::createBenchmarkAttributeDefinition()
{
    return ::ecore::Ptr < BenchmarkAttributeDefinition
            > (new BenchmarkAttributeDefinition);
}

