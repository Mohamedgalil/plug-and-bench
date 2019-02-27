// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommElementValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommElementValue.hpp"
#include <basicAttributes/SingleValue.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommElementValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommElementValue::CommElementValue() :
        m_value(0)
{

    /*PROTECTED REGION ID(CommElementValueImpl__CommElementValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommElementValue::~CommElementValue()
{
}

// Attributes

// References

::communicationObject::AbstractCommElement_ptr CommElementValue::getValue() const
{
    return m_value;
}

void CommElementValue::setValue(
        ::communicationObject::AbstractCommElement_ptr _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::AbstractCommElement_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommElementValue__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

