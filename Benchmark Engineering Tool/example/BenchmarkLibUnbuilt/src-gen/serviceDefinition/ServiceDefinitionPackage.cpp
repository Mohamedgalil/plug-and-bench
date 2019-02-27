// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <serviceDefinition/ServiceDefinitionPackage.hpp>

using namespace ::serviceDefinition;

::ecore::Ptr< ::serviceDefinition::ServiceDefinitionPackage > ServiceDefinitionPackage::s_instance;

::serviceDefinition::ServiceDefinitionPackage_ptr ServiceDefinitionPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< ServiceDefinitionPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < ServiceDefinitionPackage
                > (new ServiceDefinitionPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::serviceDefinition::ServiceDefinitionPackage_ptr ServiceDefinitionPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

