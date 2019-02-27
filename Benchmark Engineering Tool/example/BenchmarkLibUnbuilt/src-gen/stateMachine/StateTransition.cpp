// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateTransition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StateTransition.hpp"
#include <stateMachine/AbstractMachineElement.hpp>
#include <stateMachine/AbstractStateElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "stateMachine/StateMachinePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StateTransition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::stateMachine;

// Default constructor
StateTransition::StateTransition() :
        m_from(0), m_to(0)
{

    /*PROTECTED REGION ID(StateTransitionImpl__StateTransitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StateTransition::~StateTransition()
{
}

// Attributes

::stateMachine::VisibilityType StateTransition::getVisibility() const
{
    return m_visibility;
}

void StateTransition::setVisibility(::stateMachine::VisibilityType _visibility)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::stateMachine::VisibilityType _old_visibility = m_visibility;
#endif
    m_visibility = _visibility;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::stateMachine::StateMachinePackage::_instance()->getStateTransition__visibility(),
                _old_visibility,
                m_visibility
        );
        eNotify(&notification);
    }
#endif
}

// References

::stateMachine::AbstractStateElement_ptr StateTransition::getFrom() const
{
    return m_from;
}

void StateTransition::setFrom(::stateMachine::AbstractStateElement_ptr _from)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::stateMachine::AbstractStateElement_ptr _old_from = m_from;
#endif
    m_from = _from;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::stateMachine::StateMachinePackage::_instance()->getStateTransition__from(),
                _old_from,
                m_from
        );
        eNotify(&notification);
    }
#endif
}

::stateMachine::AbstractStateElement_ptr StateTransition::getTo() const
{
    return m_to;
}

void StateTransition::setTo(::stateMachine::AbstractStateElement_ptr _to)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::stateMachine::AbstractStateElement_ptr _old_to = m_to;
#endif
    m_to = _to;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::stateMachine::StateMachinePackage::_instance()->getStateTransition__to(),
                _old_to,
                m_to
        );
        eNotify(&notification);
    }
#endif
}

