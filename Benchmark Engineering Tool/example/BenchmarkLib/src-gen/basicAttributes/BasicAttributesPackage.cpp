// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <basicAttributes/BasicAttributesPackage.hpp>

using namespace ::basicAttributes;

::ecore::Ptr< ::basicAttributes::BasicAttributesPackage > BasicAttributesPackage::s_instance;

::basicAttributes::BasicAttributesPackage_ptr BasicAttributesPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< BasicAttributesPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < BasicAttributesPackage
                > (new BasicAttributesPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::basicAttributes::BasicAttributesPackage_ptr BasicAttributesPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

