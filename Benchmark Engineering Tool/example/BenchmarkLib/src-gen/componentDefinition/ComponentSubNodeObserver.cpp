// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentSubNodeObserver.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentSubNodeObserver.hpp"
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/ComponentSubNode.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentSubNodeObserver.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
ComponentSubNodeObserver::ComponentSubNodeObserver() :
        m_subject(0)
{

    /*PROTECTED REGION ID(ComponentSubNodeObserverImpl__ComponentSubNodeObserverImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentSubNodeObserver::~ComponentSubNodeObserver()
{
}

// Attributes

// References

::componentDefinition::ComponentSubNode_ptr ComponentSubNodeObserver::getSubject() const
{
    return m_subject;
}

void ComponentSubNodeObserver::setSubject(
        ::componentDefinition::ComponentSubNode_ptr _subject)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::ComponentSubNode_ptr _old_subject = m_subject;
#endif
    m_subject = _subject;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentSubNodeObserver__subject(),
                _old_subject,
                m_subject
        );
        eNotify(&notification);
    }
#endif
}

