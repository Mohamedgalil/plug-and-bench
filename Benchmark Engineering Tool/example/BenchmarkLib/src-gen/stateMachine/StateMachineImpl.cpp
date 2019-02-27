// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachineImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StateMachine.hpp"
#include <stateMachine/StateMachinePackage.hpp>
#include <stateMachine/AbstractMachineElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StateMachineImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::stateMachine;

void StateMachine::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_elements->size(); i++)
    {
        (*m_elements)[i]->_initialize();
    }

    /*PROTECTED REGION ID(StateMachineImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StateMachine::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS:
    {
        _any = m_elements->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::stateMachine::StateMachinePackage::STATEMACHINE__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void StateMachine::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::stateMachine::StateMachine::getElements().clear();
        ::stateMachine::StateMachine::getElements().insert_all(*_t0);
    }
        return;
    case ::stateMachine::StateMachinePackage::STATEMACHINE__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::stateMachine::StateMachine::setName(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean StateMachine::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS:
        return m_elements && m_elements->size();
    case ::stateMachine::StateMachinePackage::STATEMACHINE__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);

    }
    throw "Error";
}

void StateMachine::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr StateMachine::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::stateMachine::StateMachinePackage* >(::stateMachine::StateMachinePackage::_instance().get())->getStateMachine();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void StateMachine::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void StateMachine::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

