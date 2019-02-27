// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <coordinationPattern/CoordinationPatternPackage.hpp>

using namespace ::coordinationPattern;

::ecore::Ptr< ::coordinationPattern::CoordinationPatternPackage > CoordinationPatternPackage::s_instance;

::coordinationPattern::CoordinationPatternPackage_ptr CoordinationPatternPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< CoordinationPatternPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < CoordinationPatternPackage
                > (new CoordinationPatternPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::coordinationPattern::CoordinationPatternPackage_ptr CoordinationPatternPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

