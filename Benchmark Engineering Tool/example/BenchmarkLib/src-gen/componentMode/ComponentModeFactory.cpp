// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentMode/ComponentModeFactory.hpp>

using namespace ::componentMode;

::ecore::Ptr< ::componentMode::ComponentModeFactory > ComponentModeFactory::s_holder;

::componentMode::ComponentModeFactory_ptr ComponentModeFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < ComponentModeFactory
                > (new ComponentModeFactory());

    return s_holder;
}

