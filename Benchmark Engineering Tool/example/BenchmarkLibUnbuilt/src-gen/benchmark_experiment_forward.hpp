// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BENCHMARK_EXPERIMENT_FORWARD_HPP
#define _BENCHMARK_EXPERIMENT_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(benchmark_experiment_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace benchmark_experiment
{

// EDataType

// EClass

// Scenario
    class Scenario;
    using Scenario_ptr = ::ecore::Ptr<Scenario>;

// BenchmarkExperiment
    class BenchmarkExperiment;
    using BenchmarkExperiment_ptr = ::ecore::Ptr<BenchmarkExperiment>;

// PerfValue
    class PerfValue;
    using PerfValue_ptr = ::ecore::Ptr<PerfValue>;

// EEnum

// Package & Factory
    class Benchmark_experimentFactory;
    using Benchmark_experimentFactory_ptr = ::ecore::Ptr<Benchmark_experimentFactory>;
    class Benchmark_experimentPackage;
    using Benchmark_experimentPackage_ptr = ::ecore::Ptr<Benchmark_experimentPackage>;

} // benchmark_experiment

#endif // _BENCHMARK_EXPERIMENT_FORWARD_HPP

