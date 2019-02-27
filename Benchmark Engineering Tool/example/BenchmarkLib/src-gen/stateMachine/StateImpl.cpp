// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "State.hpp"
#include <stateMachine/StateMachinePackage.hpp>
#include <stateMachine/AbstractStateElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StateImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::stateMachine;

void State::_initialize()
{
    // Supertypes
    ::stateMachine::AbstractStateElement::_initialize();

    // References

    /*PROTECTED REGION ID(StateImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject State::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::ABSTRACTSTATEELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void State::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::ABSTRACTSTATEELEMENT__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::stateMachine::AbstractStateElement::setName(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean State::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::ABSTRACTSTATEELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);

    }
    throw "Error";
}

void State::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr State::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::stateMachine::StateMachinePackage* >(::stateMachine::StateMachinePackage::_instance().get())->getState();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void State::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void State::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

