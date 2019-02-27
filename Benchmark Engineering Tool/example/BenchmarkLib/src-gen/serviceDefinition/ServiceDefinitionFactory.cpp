// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <serviceDefinition/ServiceDefinitionFactory.hpp>

using namespace ::serviceDefinition;

::ecore::Ptr< ::serviceDefinition::ServiceDefinitionFactory > ServiceDefinitionFactory::s_holder;

::serviceDefinition::ServiceDefinitionFactory_ptr ServiceDefinitionFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < ServiceDefinitionFactory
                > (new ServiceDefinitionFactory());

    return s_holder;
}

