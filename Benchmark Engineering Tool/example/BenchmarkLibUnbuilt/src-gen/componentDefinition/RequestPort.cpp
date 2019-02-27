// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequestPort.hpp"
#include <componentDefinition/ComponentPort.hpp>
#include <componentDefinition/ComponentPortExtension.hpp>
#include <serviceDefinition/TwoWayCommunicationService.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RequestPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
RequestPort::RequestPort() :
        m_service(0)
{

    /*PROTECTED REGION ID(RequestPortImpl__RequestPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RequestPort::~RequestPort()
{
}

// Attributes

// References

::serviceDefinition::TwoWayCommunicationService_ptr RequestPort::getService() const
{
    return m_service;
}

void RequestPort::setService(
        ::serviceDefinition::TwoWayCommunicationService_ptr _service)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::TwoWayCommunicationService_ptr _old_service = m_service;
#endif
    m_service = _service;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getRequestPort__service(),
                _old_service,
                m_service
        );
        eNotify(&notification);
    }
#endif
}

