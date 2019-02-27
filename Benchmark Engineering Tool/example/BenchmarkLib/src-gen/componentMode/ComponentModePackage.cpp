// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModePackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <componentMode/ComponentModePackage.hpp>

using namespace ::componentMode;

::ecore::Ptr< ::componentMode::ComponentModePackage > ComponentModePackage::s_instance;

::componentMode::ComponentModePackage_ptr ComponentModePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< ComponentModePackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < ComponentModePackage
                > (new ComponentModePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::componentMode::ComponentModePackage_ptr ComponentModePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

