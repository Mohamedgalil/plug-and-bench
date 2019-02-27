// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/OutputPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OutputPort.hpp"
#include <componentDefinition/ComponentPort.hpp>
#include <componentDefinition/ComponentPortExtension.hpp>
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <componentDefinition/Activity.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OutputPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
OutputPort::OutputPort() :
        m_service(0), m_activity(0)
{

    /*PROTECTED REGION ID(OutputPortImpl__OutputPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

OutputPort::~OutputPort()
{
}

// Attributes

// References

::serviceDefinition::OneWayCommunicationService_ptr OutputPort::getService() const
{
    return m_service;
}

void OutputPort::setService(
        ::serviceDefinition::OneWayCommunicationService_ptr _service)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::OneWayCommunicationService_ptr _old_service = m_service;
#endif
    m_service = _service;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getOutputPort__service(),
                _old_service,
                m_service
        );
        eNotify(&notification);
    }
#endif
}

::componentDefinition::Activity_ptr OutputPort::getActivity() const
{
    return m_activity;
}

void OutputPort::setActivity(::componentDefinition::Activity_ptr _activity)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::Activity_ptr _old_activity = m_activity;
#endif
    m_activity = _activity;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getOutputPort__activity(),
                _old_activity,
                m_activity
        );
        eNotify(&notification);
    }
#endif
}

