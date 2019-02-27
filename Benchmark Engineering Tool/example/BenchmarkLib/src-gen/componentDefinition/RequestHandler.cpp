// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestHandler.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequestHandler.hpp"
#include <componentDefinition/ComponentSubNode.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/AnswerPort.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RequestHandler.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
RequestHandler::RequestHandler() :
        m_answerPort(0)
{

    /*PROTECTED REGION ID(RequestHandlerImpl__RequestHandlerImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RequestHandler::~RequestHandler()
{
}

// Attributes

::ecore::EBoolean RequestHandler::isActiveQueue() const
{
    return m_activeQueue;
}

void RequestHandler::setActiveQueue(::ecore::EBoolean _activeQueue)
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
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getRequestHandler__activeQueue(),
                _old_activeQueue,
                m_activeQueue
        );
        eNotify(&notification);
    }
#endif
}

// References

::componentDefinition::AnswerPort_ptr RequestHandler::getAnswerPort() const
{
    return m_answerPort;
}

void RequestHandler::setAnswerPort(
        ::componentDefinition::AnswerPort_ptr _answerPort)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::AnswerPort_ptr _old_answerPort = m_answerPort;
#endif
    m_answerPort = _answerPort;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getRequestHandler__answerPort(),
                _old_answerPort,
                m_answerPort
        );
        eNotify(&notification);
    }
#endif
}

