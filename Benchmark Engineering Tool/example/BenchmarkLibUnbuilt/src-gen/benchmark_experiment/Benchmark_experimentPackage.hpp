// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BENCHMARK_EXPERIMENTPACKAGE_HPP
#define _BENCHMARK_EXPERIMENTPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <benchmark_experiment_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <benchmark_experiment/dllBenchmark_experiment.hpp>

namespace benchmark_experiment
{

class EXPORT_BENCHMARK_EXPERIMENT_DLL Benchmark_experimentPackage : public virtual ::ecore::EPackage
{
public:

    static Benchmark_experimentPackage_ptr _instance();
    static Benchmark_experimentPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int BENCHMARKEXPERIMENT = 0;

    static const int PERFVALUE = 1;

    static const int SCENARIO = 2;

    static const int SCENARIO__TESTDATA = 0;

    static const int SCENARIO__GROUNDTRUTHDATA = 1;

    static const int SCENARIO__RECIEVEDDATA = 2;

    static const int SCENARIO__PERFVALUE = 3;

    static const int SCENARIO__TUPLE = 4;

    static const int BENCHMARKEXPERIMENT__SCENARIO = 5;

    static const int BENCHMARKEXPERIMENT__STANDARDIZEDPROBLEM = 6;

    static const int PERFVALUE__VALUE = 7;

    static const int PERFVALUE__WEIGHTEDPERFMEASURE = 8;

    // IDs for classifiers for class BenchmarkExperiment 

    // IDs for classifiers for class PerfValue 

    // IDs for classifiers for class Scenario 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getScenario();

    virtual ::ecore::EClass_ptr getBenchmarkExperiment();

    virtual ::ecore::EClass_ptr getPerfValue();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getScenario__testData();

    virtual ::ecore::EReference_ptr getScenario__groundTruthData();

    virtual ::ecore::EReference_ptr getScenario__recievedData();

    virtual ::ecore::EReference_ptr getScenario__perfvalue();

    virtual ::ecore::EReference_ptr getScenario__tuple();

    virtual ::ecore::EReference_ptr getBenchmarkExperiment__scenario();

    virtual ::ecore::EReference_ptr getBenchmarkExperiment__standardizedProblem();

    virtual ::ecore::EAttribute_ptr getPerfValue__value();

    virtual ::ecore::EReference_ptr getPerfValue__weightedPerfMeasure();

protected:

    static ::ecore::Ptr< Benchmark_experimentPackage > s_instance;

    Benchmark_experimentPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ScenarioEClass;

    ::ecore::EClass_ptr m_BenchmarkExperimentEClass;

    ::ecore::EClass_ptr m_PerfValueEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_Scenario__testData;

    ::ecore::EReference_ptr m_Scenario__groundTruthData;

    ::ecore::EReference_ptr m_Scenario__recievedData;

    ::ecore::EReference_ptr m_Scenario__perfvalue;

    ::ecore::EReference_ptr m_Scenario__tuple;

    ::ecore::EReference_ptr m_BenchmarkExperiment__scenario;

    ::ecore::EReference_ptr m_BenchmarkExperiment__standardizedProblem;

    ::ecore::EAttribute_ptr m_PerfValue__value;

    ::ecore::EReference_ptr m_PerfValue__weightedPerfMeasure;

};

}
 // benchmark_experiment

#endif // _BENCHMARK_EXPERIMENTPACKAGE_HPP

