// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/EnumerationValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnumerationValue.hpp"
#include <basicAttributes/SingleValue.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EnumerationValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
EnumerationValue::EnumerationValue() :
        m_value(0)
{

    /*PROTECTED REGION ID(EnumerationValueImpl__EnumerationValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EnumerationValue::~EnumerationValue()
{
}

// Attributes

// References

::basicAttributes::EnumerationElement_ptr EnumerationValue::getValue() const
{
    return m_value;
}

void EnumerationValue::setValue(
        ::basicAttributes::EnumerationElement_ptr _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::EnumerationElement_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getEnumerationValue__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

