// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestPortLink.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequestPortLink.hpp"
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/RequestPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RequestPortLink.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
RequestPortLink::RequestPortLink() :
        m_requestPort(0)
{

    /*PROTECTED REGION ID(RequestPortLinkImpl__RequestPortLinkImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RequestPortLink::~RequestPortLink()
{
}

// Attributes

// References

::componentDefinition::RequestPort_ptr RequestPortLink::getRequestPort() const
{
    return m_requestPort;
}

void RequestPortLink::setRequestPort(
        ::componentDefinition::RequestPort_ptr _requestPort)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::RequestPort_ptr _old_requestPort = m_requestPort;
#endif
    m_requestPort = _requestPort;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getRequestPortLink__requestPort(),
                _old_requestPort,
                m_requestPort
        );
        eNotify(&notification);
    }
#endif
}

