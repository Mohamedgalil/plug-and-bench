// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <benchmark_experiment/Benchmark_experimentFactory.hpp>
#include <benchmark_experiment/Benchmark_experimentPackage.hpp>
#include <benchmark_experiment/Scenario.hpp>
#include <benchmark_experiment/BenchmarkExperiment.hpp>
#include <benchmark_experiment/PerfValue.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::benchmark_experiment;

Benchmark_experimentFactory::Benchmark_experimentFactory()
{
}

::ecore::EObject_ptr Benchmark_experimentFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case Benchmark_experimentPackage::SCENARIO:
        return createScenario();
    case Benchmark_experimentPackage::BENCHMARKEXPERIMENT:
        return createBenchmarkExperiment();
    case Benchmark_experimentPackage::PERFVALUE:
        return createPerfValue();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject Benchmark_experimentFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString Benchmark_experimentFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

Scenario_ptr Benchmark_experimentFactory::createScenario()
{
    return ::ecore::Ptr < Scenario > (new Scenario);
}
BenchmarkExperiment_ptr Benchmark_experimentFactory::createBenchmarkExperiment()
{
    return ::ecore::Ptr < BenchmarkExperiment > (new BenchmarkExperiment);
}
PerfValue_ptr Benchmark_experimentFactory::createPerfValue()
{
    return ::ecore::Ptr < PerfValue > (new PerfValue);
}

