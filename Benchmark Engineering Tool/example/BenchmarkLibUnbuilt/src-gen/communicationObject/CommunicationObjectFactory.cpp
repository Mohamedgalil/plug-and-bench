// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationObject/CommunicationObjectFactory.hpp>

using namespace ::communicationObject;

::ecore::Ptr< ::communicationObject::CommunicationObjectFactory > CommunicationObjectFactory::s_holder;

::communicationObject::CommunicationObjectFactory_ptr CommunicationObjectFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < CommunicationObjectFactory
                > (new CommunicationObjectFactory());

    return s_holder;
}

