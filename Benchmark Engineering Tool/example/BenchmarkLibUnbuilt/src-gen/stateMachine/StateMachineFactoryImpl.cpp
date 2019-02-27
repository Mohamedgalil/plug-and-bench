// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachineFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <stateMachine/StateMachineFactory.hpp>
#include <stateMachine/StateMachinePackage.hpp>
#include <stateMachine/StateTransition.hpp>
#include <stateMachine/StateMachine.hpp>
#include <stateMachine/AbstractMachineElement.hpp>
#include <stateMachine/AbstractStateElement.hpp>
#include <stateMachine/State.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::stateMachine;

StateMachineFactory::StateMachineFactory()
{
}

::ecore::EObject_ptr StateMachineFactory::create(::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case StateMachinePackage::STATETRANSITION:
        return createStateTransition();
    case StateMachinePackage::STATEMACHINE:
        return createStateMachine();
    case StateMachinePackage::ABSTRACTMACHINEELEMENT:
        return createAbstractMachineElement();
    case StateMachinePackage::ABSTRACTSTATEELEMENT:
        return createAbstractStateElement();
    case StateMachinePackage::STATE:
        return createState();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject StateMachineFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    case StateMachinePackage::VISIBILITYTYPE:
    {
        ::ecore::EJavaObject _any;
        StateMachinePackage_ptr _epkg =
                dynamic_cast< ::stateMachine::StateMachinePackage* >(getEPackage().get());
        return _epkg->getVisibilityType()->getEEnumLiteralByLiteral(
                _literalValue)->getValue();
    }
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString StateMachineFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    case StateMachinePackage::VISIBILITYTYPE:
    {
        StateMachinePackage_ptr _epkg = ::ecore::as
                < ::stateMachine::StateMachinePackage > (getEPackage());
        ::ecore::EInt _value = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EInt > (_instanceValue);
        return _epkg->getVisibilityType()->getEEnumLiteral(_value)->getName();
    }
    default:
        throw "IllegalArgumentException";
    }
}

StateTransition_ptr StateMachineFactory::createStateTransition()
{
    return ::ecore::Ptr < StateTransition > (new StateTransition);
}
StateMachine_ptr StateMachineFactory::createStateMachine()
{
    return ::ecore::Ptr < StateMachine > (new StateMachine);
}
AbstractMachineElement_ptr StateMachineFactory::createAbstractMachineElement()
{
    return ::ecore::Ptr < AbstractMachineElement > (new AbstractMachineElement);
}
AbstractStateElement_ptr StateMachineFactory::createAbstractStateElement()
{
    return ::ecore::Ptr < AbstractStateElement > (new AbstractStateElement);
}
State_ptr StateMachineFactory::createState()
{
    return ::ecore::Ptr < State > (new State);
}

