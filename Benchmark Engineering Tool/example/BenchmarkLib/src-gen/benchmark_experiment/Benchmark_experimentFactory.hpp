// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _BENCHMARK_EXPERIMENTFACTORY_HPP
#define _BENCHMARK_EXPERIMENTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <benchmark_experiment.hpp>

#include <benchmark_experiment/dllBenchmark_experiment.hpp>

namespace benchmark_experiment
{

    class EXPORT_BENCHMARK_EXPERIMENT_DLL Benchmark_experimentFactory : public virtual ::ecore::EFactory
    {
    public:

        static Benchmark_experimentFactory_ptr _instance();

        virtual Scenario_ptr createScenario();
        virtual BenchmarkExperiment_ptr createBenchmarkExperiment();
        virtual PerfValue_ptr createPerfValue();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< Benchmark_experimentFactory > s_holder;

        Benchmark_experimentFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline Scenario_ptr create< Scenario >()
    {
        auto eFactory =
                Benchmark_experimentPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Benchmark_experimentFactory* >(eFactory.get());
        return packageFactory->createScenario();
    }

    template< > inline BenchmarkExperiment_ptr create< BenchmarkExperiment >()
    {
        auto eFactory =
                Benchmark_experimentPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Benchmark_experimentFactory* >(eFactory.get());
        return packageFactory->createBenchmarkExperiment();
    }

    template< > inline PerfValue_ptr create< PerfValue >()
    {
        auto eFactory =
                Benchmark_experimentPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Benchmark_experimentFactory* >(eFactory.get());
        return packageFactory->createPerfValue();
    }

} // benchmark_experiment

#endif // _BENCHMARK_EXPERIMENTFACTORY_HPP

