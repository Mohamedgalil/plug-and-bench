// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <parameterDefinition/ParameterDefinitionPackage.hpp>

using namespace ::parameterDefinition;

::ecore::Ptr< ::parameterDefinition::ParameterDefinitionPackage > ParameterDefinitionPackage::s_instance;

::parameterDefinition::ParameterDefinitionPackage_ptr ParameterDefinitionPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< ParameterDefinitionPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < ParameterDefinitionPackage
                > (new ParameterDefinitionPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::parameterDefinition::ParameterDefinitionPackage_ptr ParameterDefinitionPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

