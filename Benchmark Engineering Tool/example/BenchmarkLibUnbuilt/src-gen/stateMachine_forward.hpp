// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STATEMACHINE_FORWARD_HPP
#define _STATEMACHINE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(stateMachine_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace stateMachine
{

// EDataType

// EClass

// StateTransition
    class StateTransition;
    using StateTransition_ptr = ::ecore::Ptr<StateTransition>;

// StateMachine
    class StateMachine;
    using StateMachine_ptr = ::ecore::Ptr<StateMachine>;

// AbstractMachineElement
    class AbstractMachineElement;
    using AbstractMachineElement_ptr = ::ecore::Ptr<AbstractMachineElement>;

// AbstractStateElement
    class AbstractStateElement;
    using AbstractStateElement_ptr = ::ecore::Ptr<AbstractStateElement>;

// State
    class State;
    using State_ptr = ::ecore::Ptr<State>;

// EEnum

// VisibilityType
    enum class VisibilityType
    ;

// Package & Factory
    class StateMachineFactory;
    using StateMachineFactory_ptr = ::ecore::Ptr<StateMachineFactory>;
    class StateMachinePackage;
    using StateMachinePackage_ptr = ::ecore::Ptr<StateMachinePackage>;

} // stateMachine

#endif // _STATEMACHINE_FORWARD_HPP

