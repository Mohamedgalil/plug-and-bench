// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/EnvironmentVariable.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnvironmentVariable.hpp"
#include <basicAttributes/AbstractValue.hpp>
#include <standardized_problem/EnvironmentVariableDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(EnvironmentVariable.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
EnvironmentVariable::EnvironmentVariable() :
        m_value(0), m_environmentVariableDefinition(0)
{

    /*PROTECTED REGION ID(EnvironmentVariableImpl__EnvironmentVariableImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

EnvironmentVariable::~EnvironmentVariable()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

// References

::basicAttributes::AbstractValue_ptr EnvironmentVariable::getValue() const
{
    return m_value;
}

void EnvironmentVariable::setValue(::basicAttributes::AbstractValue_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(EnvironmentVariable_ptr(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getEnvironmentVariable__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getEnvironmentVariable__value());

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
                ::standardized_problem::Standardized_problemPackage::_instance()->getEnvironmentVariable__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::standardized_problem::EnvironmentVariableDefinition_ptr EnvironmentVariable::getEnvironmentVariableDefinition() const
{
    return m_environmentVariableDefinition;
}

void EnvironmentVariable::setEnvironmentVariableDefinition(
        ::standardized_problem::EnvironmentVariableDefinition_ptr _environmentVariableDefinition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::EnvironmentVariableDefinition_ptr _old_environmentVariableDefinition = m_environmentVariableDefinition;
#endif
    m_environmentVariableDefinition = _environmentVariableDefinition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getEnvironmentVariable__environmentVariableDefinition(),
                _old_environmentVariableDefinition,
                m_environmentVariableDefinition
        );
        eNotify(&notification);
    }
#endif
}

