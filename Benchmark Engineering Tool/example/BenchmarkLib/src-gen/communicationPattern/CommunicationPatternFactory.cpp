// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationPattern/CommunicationPatternFactory.hpp>

using namespace ::communicationPattern;

::ecore::Ptr< ::communicationPattern::CommunicationPatternFactory > CommunicationPatternFactory::s_holder;

::communicationPattern::CommunicationPatternFactory_ptr CommunicationPatternFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < CommunicationPatternFactory
                > (new CommunicationPatternFactory());

    return s_holder;
}

