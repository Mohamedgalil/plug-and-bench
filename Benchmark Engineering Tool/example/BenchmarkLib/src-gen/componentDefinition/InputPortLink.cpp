// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/InputPortLink.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InputPortLink.hpp"
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/InputPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InputPortLink.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
InputPortLink::InputPortLink() :
        m_inputPort(0)
{

    /*PROTECTED REGION ID(InputPortLinkImpl__InputPortLinkImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InputPortLink::~InputPortLink()
{
}

// Attributes

::ecore::EBoolean InputPortLink::isOptional() const
{
    return m_optional;
}

void InputPortLink::setOptional(::ecore::EBoolean _optional)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_optional = m_optional;
#endif
    m_optional = _optional;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getInputPortLink__optional(),
                _old_optional,
                m_optional
        );
        eNotify(&notification);
    }
#endif
}

// References

::componentDefinition::InputPort_ptr InputPortLink::getInputPort() const
{
    return m_inputPort;
}

void InputPortLink::setInputPort(
        ::componentDefinition::InputPort_ptr _inputPort)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::InputPort_ptr _old_inputPort = m_inputPort;
#endif
    m_inputPort = _inputPort;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getInputPortLink__inputPort(),
                _old_inputPort,
                m_inputPort
        );
        eNotify(&notification);
    }
#endif
}

