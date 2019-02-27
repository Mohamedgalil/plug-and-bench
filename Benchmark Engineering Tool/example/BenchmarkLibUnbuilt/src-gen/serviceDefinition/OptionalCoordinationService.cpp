// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/OptionalCoordinationService.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OptionalCoordinationService.hpp"
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OptionalCoordinationService.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
OptionalCoordinationService::OptionalCoordinationService() :
        m_serviceref(0)
{

    /*PROTECTED REGION ID(OptionalCoordinationServiceImpl__OptionalCoordinationServiceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

OptionalCoordinationService::~OptionalCoordinationService()
{
}

// Attributes

::ecore::EString const& OptionalCoordinationService::getName() const
{
    return m_name;
}

void OptionalCoordinationService::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getOptionalCoordinationService__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

::serviceDefinition::CommunicationServiceDefinition_ptr OptionalCoordinationService::getServiceref() const
{
    return m_serviceref;
}

void OptionalCoordinationService::setServiceref(
        ::serviceDefinition::CommunicationServiceDefinition_ptr _serviceref)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::CommunicationServiceDefinition_ptr _old_serviceref = m_serviceref;
#endif
    m_serviceref = _serviceref;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getOptionalCoordinationService__serviceref(),
                _old_serviceref,
                m_serviceref
        );
        eNotify(&notification);
    }
#endif
}

