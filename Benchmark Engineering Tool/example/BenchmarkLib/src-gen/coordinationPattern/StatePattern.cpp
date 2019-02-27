// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/StatePattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StatePattern.hpp"
#include <coordinationPattern/CoordinationPattern.hpp>
#include <stateMachine/StateMachine.hpp>
#include <componentMode/ComponentModeCollection.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "coordinationPattern/CoordinationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StatePattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

// Default constructor
StatePattern::StatePattern() :
        m_lifecycle(0), m_modes(0)
{

    /*PROTECTED REGION ID(StatePatternImpl__StatePatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StatePattern::~StatePattern()
{
}

// Attributes

// References

::stateMachine::StateMachine_ptr StatePattern::getLifecycle() const
{
    return m_lifecycle;
}

void StatePattern::setLifecycle(::stateMachine::StateMachine_ptr _lifecycle)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::stateMachine::StateMachine_ptr _old_lifecycle = m_lifecycle;
#endif
    m_lifecycle = _lifecycle;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::coordinationPattern::CoordinationPatternPackage::_instance()->getStatePattern__lifecycle(),
                _old_lifecycle,
                m_lifecycle
        );
        eNotify(&notification);
    }
#endif
}

::componentMode::ComponentModeCollection_ptr StatePattern::getModes() const
{
    return m_modes;
}

void StatePattern::setModes(::componentMode::ComponentModeCollection_ptr _modes)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentMode::ComponentModeCollection_ptr _old_modes = m_modes;
#endif
    m_modes = _modes;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::coordinationPattern::CoordinationPatternPackage::_instance()->getStatePattern__modes(),
                _old_modes,
                m_modes
        );
        eNotify(&notification);
    }
#endif
}

