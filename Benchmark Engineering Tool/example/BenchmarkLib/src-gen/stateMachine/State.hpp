// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/State.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STATEMACHINE_STATE_HPP
#define STATEMACHINE_STATE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <stateMachine/dllStateMachine.hpp>
#include <stateMachine_forward.hpp>

#include <ecore_forward.hpp>
#include <stateMachine/AbstractStateElement.hpp>

#include "StateMachinePackage.hpp"

/*PROTECTED REGION ID(State_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace stateMachine
{

class EXPORT_STATEMACHINE_DLL State : public virtual ::stateMachine::AbstractStateElement
{
public:
    State();

    virtual ~State();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = StateMachinePackage::STATE;

    /*PROTECTED REGION ID(State) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(StateImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    State_ptr _this()
    {   return State_ptr(this);}

    // Attributes

    // References

};

}
 // stateMachine

#endif // STATEMACHINE_STATE_HPP

