// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <coordinationPattern/CoordinationPatternFactory.hpp>

using namespace ::coordinationPattern;

::ecore::Ptr< ::coordinationPattern::CoordinationPatternFactory > CoordinationPatternFactory::s_holder;

::coordinationPattern::CoordinationPatternFactory_ptr CoordinationPatternFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < CoordinationPatternFactory
                > (new CoordinationPatternFactory());

    return s_holder;
}

