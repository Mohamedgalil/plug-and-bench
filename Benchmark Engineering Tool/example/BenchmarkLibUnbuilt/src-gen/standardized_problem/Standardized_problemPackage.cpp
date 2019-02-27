// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <standardized_problem/Standardized_problemPackage.hpp>

using namespace ::standardized_problem;

::ecore::Ptr< ::standardized_problem::Standardized_problemPackage > Standardized_problemPackage::s_instance;

::standardized_problem::Standardized_problemPackage_ptr Standardized_problemPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< Standardized_problemPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < Standardized_problemPackage
                > (new Standardized_problemPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::standardized_problem::Standardized_problemPackage_ptr Standardized_problemPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

