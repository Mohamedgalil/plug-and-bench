// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationObject/CommunicationObjectPackage.hpp>

using namespace ::communicationObject;

::ecore::Ptr< ::communicationObject::CommunicationObjectPackage > CommunicationObjectPackage::s_instance;

::communicationObject::CommunicationObjectPackage_ptr CommunicationObjectPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< CommunicationObjectPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < CommunicationObjectPackage
                > (new CommunicationObjectPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::communicationObject::CommunicationObjectPackage_ptr CommunicationObjectPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

