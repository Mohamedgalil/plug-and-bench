// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Benchmark_experimentFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <benchmark_experiment/Benchmark_experimentFactory.hpp>

using namespace ::benchmark_experiment;

::ecore::Ptr< ::benchmark_experiment::Benchmark_experimentFactory > Benchmark_experimentFactory::s_holder;

::benchmark_experiment::Benchmark_experimentFactory_ptr Benchmark_experimentFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Benchmark_experimentFactory
                > (new Benchmark_experimentFactory());

    return s_holder;
}

