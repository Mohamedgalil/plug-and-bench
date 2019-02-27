// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ForkingServiceDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ForkingServiceDefinition.hpp"
#include <serviceDefinition/OneWayCommunicationService.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ForkingServiceDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
ForkingServiceDefinition::ForkingServiceDefinition() :
        m_pattern(0)
{

    /*PROTECTED REGION ID(ForkingServiceDefinitionImpl__ForkingServiceDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ForkingServiceDefinition::~ForkingServiceDefinition()
{
    if (m_pattern)
    {
        m_pattern.reset();
    }
}

// Attributes

// References

::communicationPattern::ForkingPattern_ptr ForkingServiceDefinition::getPattern() const
{
    return m_pattern;
}

void ForkingServiceDefinition::setPattern(
        ::communicationPattern::ForkingPattern_ptr _pattern)
{
    if (m_pattern)
        m_pattern->_setEContainer(ForkingServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getForkingServiceDefinition__pattern());
    if (_pattern)
        _pattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getForkingServiceDefinition__pattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::communicationPattern::ForkingPattern_ptr _old_pattern = m_pattern;
#endif
    m_pattern = _pattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getForkingServiceDefinition__pattern(),
                _old_pattern,
                m_pattern
        );
        eNotify(&notification);
    }
#endif
}

