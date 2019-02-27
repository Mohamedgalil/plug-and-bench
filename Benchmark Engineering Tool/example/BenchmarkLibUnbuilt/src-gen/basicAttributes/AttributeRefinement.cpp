// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AttributeRefinement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeRefinement.hpp"
#include <basicAttributes/AbstractValue.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AttributeRefinement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
AttributeRefinement::AttributeRefinement() :
        m_value(0), m_attribute(0)
{

    /*PROTECTED REGION ID(AttributeRefinementImpl__AttributeRefinementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AttributeRefinement::~AttributeRefinement()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

// References

::basicAttributes::AbstractValue_ptr AttributeRefinement::getValue() const
{
    return m_value;
}

void AttributeRefinement::setValue(::basicAttributes::AbstractValue_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(AttributeRefinement_ptr(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeRefinement__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeRefinement__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::AbstractValue_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeRefinement__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::basicAttributes::AttributeDefinition_ptr AttributeRefinement::getAttribute() const
{
    return m_attribute;
}

void AttributeRefinement::setAttribute(
        ::basicAttributes::AttributeDefinition_ptr _attribute)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::AttributeDefinition_ptr _old_attribute = m_attribute;
#endif
    m_attribute = _attribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeRefinement__attribute(),
                _old_attribute,
                m_attribute
        );
        eNotify(&notification);
    }
#endif
}

