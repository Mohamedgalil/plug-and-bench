// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternPackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationPattern/CommunicationPatternPackage.hpp>

using namespace ::communicationPattern;

::ecore::Ptr< ::communicationPattern::CommunicationPatternPackage > CommunicationPatternPackage::s_instance;

::communicationPattern::CommunicationPatternPackage_ptr CommunicationPatternPackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< CommunicationPatternPackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < CommunicationPatternPackage
                > (new CommunicationPatternPackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::communicationPattern::CommunicationPatternPackage_ptr CommunicationPatternPackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

