// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentDefinition/ComponentDefinitionFactory.hpp>

using namespace ::componentDefinition;

::ecore::Ptr< ::componentDefinition::ComponentDefinitionFactory > ComponentDefinitionFactory::s_holder;

::componentDefinition::ComponentDefinitionFactory_ptr ComponentDefinitionFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < ComponentDefinitionFactory
                > (new ComponentDefinitionFactory());

    return s_holder;
}

