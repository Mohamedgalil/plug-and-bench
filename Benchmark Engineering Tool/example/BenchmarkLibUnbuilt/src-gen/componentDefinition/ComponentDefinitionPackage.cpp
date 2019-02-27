// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinitionPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentDefinition/ComponentDefinitionPackage.hpp>

using namespace ::componentDefinition;

::ecore::Ptr< ::componentDefinition::ComponentDefinitionPackage > ComponentDefinitionPackage::s_instance;

::componentDefinition::ComponentDefinitionPackage_ptr ComponentDefinitionPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< ComponentDefinitionPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < ComponentDefinitionPackage
                > (new ComponentDefinitionPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::componentDefinition::ComponentDefinitionPackage_ptr ComponentDefinitionPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

