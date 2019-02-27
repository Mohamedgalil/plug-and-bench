// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <standardized_problem/Standardized_problemFactory.hpp>

using namespace ::standardized_problem;

::ecore::Ptr< ::standardized_problem::Standardized_problemFactory > Standardized_problemFactory::s_holder;

::standardized_problem::Standardized_problemFactory_ptr Standardized_problemFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < Standardized_problemFactory
                > (new Standardized_problemFactory());

    return s_holder;
}

