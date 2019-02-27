// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateTransitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StateTransition.hpp"
#include <stateMachine/StateMachinePackage.hpp>
#include <stateMachine/AbstractMachineElement.hpp>
#include <stateMachine/AbstractStateElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StateTransitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::stateMachine;

void StateTransition::_initialize()
{
    // Supertypes
    ::stateMachine::AbstractMachineElement::_initialize();

    // References

    /*PROTECTED REGION ID(StateTransitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StateTransition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATETRANSITION__FROM:
    {
        if (m_from)
            _any = ::ecore::as < ::ecore::EObject > (m_from);
    }
        return _any;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__TO:
    {
        if (m_to)
            _any = ::ecore::as < ::ecore::EObject > (m_to);
    }
        return _any;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__VISIBILITY:
    {
        ::ecorecpp::mapping::any_traits < ::stateMachine::VisibilityType
                > ::toAny(_any, m_visibility);
    }
        return _any;

    }
    throw "Error";
}

void StateTransition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATETRANSITION__FROM:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::stateMachine::AbstractStateElement_ptr _t1 =
                dynamic_cast< ::stateMachine::AbstractStateElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::stateMachine::AbstractStateElement >(_t0);*/
        ::stateMachine::StateTransition::setFrom(_t1);
    }
        return;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__TO:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::stateMachine::AbstractStateElement_ptr _t1 =
                dynamic_cast< ::stateMachine::AbstractStateElement* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::stateMachine::AbstractStateElement >(_t0);*/
        ::stateMachine::StateTransition::setTo(_t1);
    }
        return;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__VISIBILITY:
    {
        ::stateMachine::VisibilityType _t0;
        ::ecorecpp::mapping::any_traits < ::stateMachine::VisibilityType
                > ::fromAny(_newValue, _t0);
        ::stateMachine::StateTransition::setVisibility(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean StateTransition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATETRANSITION__FROM:
        return (bool) m_from;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__TO:
        return (bool) m_to;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__VISIBILITY:
        return ::ecorecpp::mapping::set_traits < ::stateMachine::VisibilityType
                > ::is_set(m_visibility);

    }
    throw "Error";
}

void StateTransition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr StateTransition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::stateMachine::StateMachinePackage* >(::stateMachine::StateMachinePackage::_instance().get())->getStateTransition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void StateTransition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATETRANSITION__FROM:
    {
    }
        return;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__TO:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void StateTransition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATETRANSITION__FROM:
    {
    }
        return;
    case ::stateMachine::StateMachinePackage::STATETRANSITION__TO:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

