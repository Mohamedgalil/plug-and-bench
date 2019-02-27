// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <benchmark_experiment/Benchmark_experimentPackage.hpp>

using namespace ::benchmark_experiment;

::ecore::Ptr< ::benchmark_experiment::Benchmark_experimentPackage > Benchmark_experimentPackage::s_instance;

::benchmark_experiment::Benchmark_experimentPackage_ptr Benchmark_experimentPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< Benchmark_experimentPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < Benchmark_experimentPackage
                > (new Benchmark_experimentPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::benchmark_experiment::Benchmark_experimentPackage_ptr Benchmark_experimentPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

