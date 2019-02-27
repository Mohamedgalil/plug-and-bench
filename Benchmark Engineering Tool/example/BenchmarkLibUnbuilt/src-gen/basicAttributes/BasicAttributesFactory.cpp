// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/BasicAttributesFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <basicAttributes/BasicAttributesFactory.hpp>

using namespace ::basicAttributes;

::ecore::Ptr< ::basicAttributes::BasicAttributesFactory > BasicAttributesFactory::s_holder;

::basicAttributes::BasicAttributesFactory_ptr BasicAttributesFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < BasicAttributesFactory
                > (new BasicAttributesFactory());

    return s_holder;
}

