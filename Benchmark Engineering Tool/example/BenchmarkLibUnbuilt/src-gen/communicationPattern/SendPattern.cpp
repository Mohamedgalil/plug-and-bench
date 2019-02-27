// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/SendPattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SendPattern.hpp"
#include <communicationPattern/JoiningPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationPattern/CommunicationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(SendPattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

// Default constructor
SendPattern::SendPattern() :
        m_dataType(0)
{

    /*PROTECTED REGION ID(SendPatternImpl__SendPatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SendPattern::~SendPattern()
{
}

// Attributes

// References

::communicationObject::CommunicationObject_ptr SendPattern::getDataType() const
{
    return m_dataType;
}

void SendPattern::setDataType(
        ::communicationObject::CommunicationObject_ptr _dataType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_dataType = m_dataType;
#endif
    m_dataType = _dataType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationPattern::CommunicationPatternPackage::_instance()->getSendPattern__dataType(),
                _old_dataType,
                m_dataType
        );
        eNotify(&notification);
    }
#endif
}

