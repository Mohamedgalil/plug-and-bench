// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateTransition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STATEMACHINE_STATETRANSITION_HPP
#define STATEMACHINE_STATETRANSITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <stateMachine/dllStateMachine.hpp>
#include <stateMachine_forward.hpp>

#include <stateMachine/AbstractMachineElement.hpp>
#include <stateMachine/VisibilityType.hpp>

#include "StateMachinePackage.hpp"

/*PROTECTED REGION ID(StateTransition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace stateMachine
{

class EXPORT_STATEMACHINE_DLL StateTransition : public virtual ::stateMachine::AbstractMachineElement
{
public:
    StateTransition();

    virtual ~StateTransition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::stateMachine::VisibilityType getVisibility () const;
    virtual void setVisibility (::stateMachine::VisibilityType _visibility);

    // References
    virtual ::stateMachine::AbstractStateElement_ptr getFrom () const;
    virtual void setFrom (::stateMachine::AbstractStateElement_ptr _from);

    virtual ::stateMachine::AbstractStateElement_ptr getTo () const;
    virtual void setTo (::stateMachine::AbstractStateElement_ptr _to);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = StateMachinePackage::STATETRANSITION;

    /*PROTECTED REGION ID(StateTransition) START*/
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

    /*PROTECTED REGION ID(StateTransitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    StateTransition_ptr _this()
    {   return StateTransition_ptr(this);}

    // Attributes

    ::stateMachine::VisibilityType m_visibility;

    // References

    ::stateMachine::AbstractStateElement_ptr m_from;

    ::stateMachine::AbstractStateElement_ptr m_to;

};

}
 // stateMachine

#endif // STATEMACHINE_STATETRANSITION_HPP

