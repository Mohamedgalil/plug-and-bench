// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/InputHandler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InputHandler.hpp"
#include <componentDefinition/ComponentSubNode.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/InputPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InputHandler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
InputHandler::InputHandler() :
        m_inputPort(0)
{

    /*PROTECTED REGION ID(InputHandlerImpl__InputHandlerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InputHandler::~InputHandler()
{
}

// Attributes

::ecore::EBoolean InputHandler::isActiveQueue() const
{
    return m_activeQueue;
}

void InputHandler::setActiveQueue(::ecore::EBoolean _activeQueue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBoolean _old_activeQueue = m_activeQueue;
#endif
    m_activeQueue = _activeQueue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getInputHandler__activeQueue(),
                _old_activeQueue,
                m_activeQueue
        );
        eNotify(&notification);
    }
#endif
}

// References

::componentDefinition::InputPort_ptr InputHandler::getInputPort() const
{
    return m_inputPort;
}

void InputHandler::setInputPort(::componentDefinition::InputPort_ptr _inputPort)
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
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getInputHandler__inputPort(),
                _old_inputPort,
                m_inputPort
        );
        eNotify(&notification);
    }
#endif
}

