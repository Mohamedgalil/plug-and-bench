// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/EventPattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventPattern.hpp"
#include <communicationPattern/ForkingPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationPattern/CommunicationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EventPattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

// Default constructor
EventPattern::EventPattern() :
        m_eventType(0), m_activationType(0), m_eventStateType(0)
{

    /*PROTECTED REGION ID(EventPatternImpl__EventPatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EventPattern::~EventPattern()
{
}

// Attributes

// References

::communicationObject::CommunicationObject_ptr EventPattern::getEventType() const
{
    return m_eventType;
}

void EventPattern::setEventType(
        ::communicationObject::CommunicationObject_ptr _eventType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_eventType = m_eventType;
#endif
    m_eventType = _eventType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getEventPattern__eventType(),
                _old_eventType,
                m_eventType
        );
        eNotify(&notification);
    }
#endif
}

::communicationObject::CommunicationObject_ptr EventPattern::getActivationType() const
{
    return m_activationType;
}

void EventPattern::setActivationType(
        ::communicationObject::CommunicationObject_ptr _activationType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_activationType = m_activationType;
#endif
    m_activationType = _activationType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getEventPattern__activationType(),
                _old_activationType,
                m_activationType
        );
        eNotify(&notification);
    }
#endif
}

::communicationObject::CommunicationObject_ptr EventPattern::getEventStateType() const
{
    return m_eventStateType;
}

void EventPattern::setEventStateType(
        ::communicationObject::CommunicationObject_ptr _eventStateType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_eventStateType = m_eventStateType;
#endif
    m_eventStateType = _eventStateType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getEventPattern__eventStateType(),
                _old_eventStateType,
                m_eventStateType
        );
        eNotify(&notification);
    }
#endif
}

