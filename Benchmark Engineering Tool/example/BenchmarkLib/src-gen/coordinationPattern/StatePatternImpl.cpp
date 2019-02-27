// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/StatePatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StatePattern.hpp"
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>
#include <stateMachine/StateMachine.hpp>
#include <componentMode/ComponentModeCollection.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(StatePatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

void StatePattern::_initialize()
{
    // Supertypes
    ::coordinationPattern::CoordinationPattern::_initialize();

    // References

    /*PROTECTED REGION ID(StatePatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject StatePattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE:
    {
        if (m_lifecycle)
            _any = ::ecore::as < ::ecore::EObject > (m_lifecycle);
    }
        return _any;
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES:
    {
        if (m_modes)
            _any = ::ecore::as < ::ecore::EObject > (m_modes);
    }
        return _any;

    }
    throw "Error";
}

void StatePattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::stateMachine::StateMachine_ptr _t1 =
                dynamic_cast< ::stateMachine::StateMachine* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::stateMachine::StateMachine >(_t0);*/
        ::coordinationPattern::StatePattern::setLifecycle(_t1);
    }
        return;
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentMode::ComponentModeCollection_ptr _t1 =
                dynamic_cast< ::componentMode::ComponentModeCollection* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentMode::ComponentModeCollection >(_t0);*/
        ::coordinationPattern::StatePattern::setModes(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean StatePattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE:
        return (bool) m_lifecycle;
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES:
        return (bool) m_modes;

    }
    throw "Error";
}

void StatePattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr StatePattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getStatePattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void StatePattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE:
    {
    }
        return;
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void StatePattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE:
    {
    }
        return;
    case ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

