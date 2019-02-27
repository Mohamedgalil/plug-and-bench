// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <parameterDefinition/ParameterDefinitionFactory.hpp>

using namespace ::parameterDefinition;

::ecore::Ptr< ::parameterDefinition::ParameterDefinitionFactory > ParameterDefinitionFactory::s_holder;

::parameterDefinition::ParameterDefinitionFactory_ptr ParameterDefinitionFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < ParameterDefinitionFactory
                > (new ParameterDefinitionFactory());

    return s_holder;
}

