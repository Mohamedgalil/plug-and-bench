// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/StringValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StringValue.hpp"
#include <basicAttributes/SingleValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StringValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
StringValue::StringValue()
{

    /*PROTECTED REGION ID(StringValueImpl__StringValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StringValue::~StringValue()
{
}

// Attributes

::ecore::EString const& StringValue::getValue() const
{
    return m_value;
}

void StringValue::setValue(::ecore::EString const& _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getStringValue__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

// References

