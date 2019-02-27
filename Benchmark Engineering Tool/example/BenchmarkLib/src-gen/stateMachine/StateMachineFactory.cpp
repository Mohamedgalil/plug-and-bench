// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachineFactory.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <stateMachine/StateMachineFactory.hpp>

using namespace ::stateMachine;

::ecore::Ptr< ::stateMachine::StateMachineFactory > StateMachineFactory::s_holder;

::stateMachine::StateMachineFactory_ptr StateMachineFactory::_instance()
{
    if (!s_holder.get())
        s_holder = ::ecore::Ptr < StateMachineFactory
                > (new StateMachineFactory());

    return s_holder;
}

