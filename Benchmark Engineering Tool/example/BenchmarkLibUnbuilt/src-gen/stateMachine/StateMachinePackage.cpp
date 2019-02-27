// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachinePackage.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <stateMachine/StateMachinePackage.hpp>

using namespace ::stateMachine;

::ecore::Ptr< ::stateMachine::StateMachinePackage > StateMachinePackage::s_instance;

::stateMachine::StateMachinePackage_ptr StateMachinePackage::_instance()
{
    static bool duringConstruction = false;
    if (!s_instance.get())
    {
        if (duringConstruction)
            return ::ecore::Ptr< StateMachinePackage >();
        duringConstruction = true;
        s_instance = ::ecore::Ptr < StateMachinePackage
                > (new StateMachinePackage());
        s_instance->_initPackage();
        duringConstruction = false;
    }

    return s_instance;
}

::stateMachine::StateMachinePackage_ptr StateMachinePackage::_getInstanceAndRemoveOwnership()
{
    return _instance();
}

