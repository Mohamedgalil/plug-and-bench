// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/QueryPattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "QueryPattern.hpp"
#include <communicationPattern/RequestAnswerPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationPattern/CommunicationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(QueryPattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

// Default constructor
QueryPattern::QueryPattern() :
        m_requestType(0), m_answerType(0)
{

    /*PROTECTED REGION ID(QueryPatternImpl__QueryPatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

QueryPattern::~QueryPattern()
{
}

// Attributes

// References

::communicationObject::CommunicationObject_ptr QueryPattern::getRequestType() const
{
    return m_requestType;
}

void QueryPattern::setRequestType(
        ::communicationObject::CommunicationObject_ptr _requestType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_requestType = m_requestType;
#endif
    m_requestType = _requestType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getQueryPattern__requestType(),
                _old_requestType,
                m_requestType
        );
        eNotify(&notification);
    }
#endif
}

::communicationObject::CommunicationObject_ptr QueryPattern::getAnswerType() const
{
    return m_answerType;
}

void QueryPattern::setAnswerType(
        ::communicationObject::CommunicationObject_ptr _answerType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_answerType = m_answerType;
#endif
    m_answerType = _answerType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getQueryPattern__answerType(),
                _old_answerType,
                m_answerType
        );
        eNotify(&notification);
    }
#endif
}

