// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/JoiningServiceDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "JoiningServiceDefinition.hpp"
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <communicationPattern/JoiningPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(JoiningServiceDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
JoiningServiceDefinition::JoiningServiceDefinition() :
        m_pattern(0)
{

    /*PROTECTED REGION ID(JoiningServiceDefinitionImpl__JoiningServiceDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

JoiningServiceDefinition::~JoiningServiceDefinition()
{
    if (m_pattern)
    {
        m_pattern.reset();
    }
}

// Attributes

// References

::communicationPattern::JoiningPattern_ptr JoiningServiceDefinition::getPattern() const
{
    return m_pattern;
}

void JoiningServiceDefinition::setPattern(
        ::communicationPattern::JoiningPattern_ptr _pattern)
{
    if (m_pattern)
        m_pattern->_setEContainer(JoiningServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getJoiningServiceDefinition__pattern());
    if (_pattern)
        _pattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getJoiningServiceDefinition__pattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::communicationPattern::JoiningPattern_ptr _old_pattern = m_pattern;
#endif
    m_pattern = _pattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getJoiningServiceDefinition__pattern(),
                _old_pattern,
                m_pattern
        );
        eNotify(&notification);
    }
#endif
}

