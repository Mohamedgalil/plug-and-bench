// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AttributeDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeDefinition.hpp"
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AttributeDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
AttributeDefinition::AttributeDefinition() :
        m_type(0), m_defaultvalue(0)
{

    /*PROTECTED REGION ID(AttributeDefinitionImpl__AttributeDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AttributeDefinition::~AttributeDefinition()
{
    if (m_type)
    {
        m_type.reset();
    }
    if (m_defaultvalue)
    {
        m_defaultvalue.reset();
    }
}

// Attributes

::ecore::EString const& AttributeDefinition::getName() const
{
    return m_name;
}

void AttributeDefinition::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

::basicAttributes::AbstractAttributeType_ptr AttributeDefinition::getType() const
{
    return m_type;
}

void AttributeDefinition::setType(
        ::basicAttributes::AbstractAttributeType_ptr _type)
{
    if (m_type)
        m_type->_setEContainer(AttributeDefinition_ptr(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__type());
    if (_type)
        _type->_setEContainer(_this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__type());

#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::AbstractAttributeType_ptr _old_type = m_type;
#endif
    m_type = _type;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__type(),
                _old_type,
                m_type
        );
        eNotify(&notification);
    }
#endif
}

::basicAttributes::AbstractValue_ptr AttributeDefinition::getDefaultvalue() const
{
    return m_defaultvalue;
}

void AttributeDefinition::setDefaultvalue(
        ::basicAttributes::AbstractValue_ptr _defaultvalue)
{
    if (m_defaultvalue)
        m_defaultvalue->_setEContainer(AttributeDefinition_ptr(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__defaultvalue());
    if (_defaultvalue)
        _defaultvalue->_setEContainer(_this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__defaultvalue());

#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::AbstractValue_ptr _old_defaultvalue = m_defaultvalue;
#endif
    m_defaultvalue = _defaultvalue;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAttributeDefinition__defaultvalue(),
                _old_defaultvalue,
                m_defaultvalue
        );
        eNotify(&notification);
    }
#endif
}

