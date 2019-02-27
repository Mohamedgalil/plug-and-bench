// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/AbstractParameter.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractParameter.hpp"
#include <basicAttributes/AttributeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "parameterDefinition/ParameterDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractParameter.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

// Default constructor
AbstractParameter::AbstractParameter()
{

    m_attributes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::basicAttributes::AttributeDefinition_ptr, -1, true, false >(
                    this,
                    ::parameterDefinition::ParameterDefinitionPackage::_instance()->getAbstractParameter__attributes()));

    /*PROTECTED REGION ID(AbstractParameterImpl__AbstractParameterImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractParameter::~AbstractParameter()
{
}

// Attributes

::ecore::EString const& AbstractParameter::getName() const
{
    return m_name;
}

void AbstractParameter::setName(::ecore::EString const& _name)
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
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getAbstractParameter__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& AbstractParameter::getAttributes() const
{
    return *m_attributes;
}

::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& AbstractParameter::getAttributes()
{
    return *m_attributes;
}

