// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/CoordinationServiceDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoordinationServiceDefinition.hpp"
#include <serviceDefinition/AbstractServiceDefinition.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <coordinationPattern/StatePattern.hpp>
#include <coordinationPattern/ParameterPattern.hpp>
#include <coordinationPattern/DynamicWiringPattern.hpp>
#include <coordinationPattern/MonitoringPattern.hpp>
#include <serviceDefinition/OptionalCoordinationService.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CoordinationServiceDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
CoordinationServiceDefinition::CoordinationServiceDefinition() :
        m_statePattern(0), m_parameterPattern(0), m_wiringPattern(0), m_monitoringPattern(
                0)
{

    m_services.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::OptionalCoordinationService_ptr, -1,
                    true, false >(this,
                    ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__services()));

    /*PROTECTED REGION ID(CoordinationServiceDefinitionImpl__CoordinationServiceDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CoordinationServiceDefinition::~CoordinationServiceDefinition()
{
    if (m_statePattern)
    {
        m_statePattern.reset();
    }
    if (m_parameterPattern)
    {
        m_parameterPattern.reset();
    }
    if (m_wiringPattern)
    {
        m_wiringPattern.reset();
    }
    if (m_monitoringPattern)
    {
        m_monitoringPattern.reset();
    }
}

// Attributes

// References

::coordinationPattern::StatePattern_ptr CoordinationServiceDefinition::getStatePattern() const
{
    return m_statePattern;
}

void CoordinationServiceDefinition::setStatePattern(
        ::coordinationPattern::StatePattern_ptr _statePattern)
{
    if (m_statePattern)
        m_statePattern->_setEContainer(CoordinationServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__statePattern());
    if (_statePattern)
        _statePattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__statePattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::coordinationPattern::StatePattern_ptr _old_statePattern = m_statePattern;
#endif
    m_statePattern = _statePattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__statePattern(),
                _old_statePattern,
                m_statePattern
        );
        eNotify(&notification);
    }
#endif
}

::coordinationPattern::ParameterPattern_ptr CoordinationServiceDefinition::getParameterPattern() const
{
    return m_parameterPattern;
}

void CoordinationServiceDefinition::setParameterPattern(
        ::coordinationPattern::ParameterPattern_ptr _parameterPattern)
{
    if (m_parameterPattern)
        m_parameterPattern->_setEContainer(CoordinationServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__parameterPattern());
    if (_parameterPattern)
        _parameterPattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__parameterPattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::coordinationPattern::ParameterPattern_ptr _old_parameterPattern = m_parameterPattern;
#endif
    m_parameterPattern = _parameterPattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__parameterPattern(),
                _old_parameterPattern,
                m_parameterPattern
        );
        eNotify(&notification);
    }
#endif
}

::coordinationPattern::DynamicWiringPattern_ptr CoordinationServiceDefinition::getWiringPattern() const
{
    return m_wiringPattern;
}

void CoordinationServiceDefinition::setWiringPattern(
        ::coordinationPattern::DynamicWiringPattern_ptr _wiringPattern)
{
    if (m_wiringPattern)
        m_wiringPattern->_setEContainer(CoordinationServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__wiringPattern());
    if (_wiringPattern)
        _wiringPattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__wiringPattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::coordinationPattern::DynamicWiringPattern_ptr _old_wiringPattern = m_wiringPattern;
#endif
    m_wiringPattern = _wiringPattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__wiringPattern(),
                _old_wiringPattern,
                m_wiringPattern
        );
        eNotify(&notification);
    }
#endif
}

::coordinationPattern::MonitoringPattern_ptr CoordinationServiceDefinition::getMonitoringPattern() const
{
    return m_monitoringPattern;
}

void CoordinationServiceDefinition::setMonitoringPattern(
        ::coordinationPattern::MonitoringPattern_ptr _monitoringPattern)
{
    if (m_monitoringPattern)
        m_monitoringPattern->_setEContainer(CoordinationServiceDefinition_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__monitoringPattern());
    if (_monitoringPattern)
        _monitoringPattern->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__monitoringPattern());

#ifdef ECORECPP_NOTIFICATION_API
    ::coordinationPattern::MonitoringPattern_ptr _old_monitoringPattern = m_monitoringPattern;
#endif
    m_monitoringPattern = _monitoringPattern;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getCoordinationServiceDefinition__monitoringPattern(),
                _old_monitoringPattern,
                m_monitoringPattern
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList<
        ::serviceDefinition::OptionalCoordinationService_ptr >& CoordinationServiceDefinition::getServices() const
{
    return *m_services;
}

::ecorecpp::mapping::EList< ::serviceDefinition::OptionalCoordinationService_ptr >& CoordinationServiceDefinition::getServices()
{
    return *m_services;
}

