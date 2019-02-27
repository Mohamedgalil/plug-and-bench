// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/CoordinationServiceDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CoordinationServiceDefinition.hpp"
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <serviceDefinition/AbstractServiceDefinition.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <coordinationPattern/StatePattern.hpp>
#include <coordinationPattern/ParameterPattern.hpp>
#include <coordinationPattern/DynamicWiringPattern.hpp>
#include <coordinationPattern/MonitoringPattern.hpp>
#include <serviceDefinition/OptionalCoordinationService.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(CoordinationServiceDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

void CoordinationServiceDefinition::_initialize()
{
    // Supertypes
    ::serviceDefinition::AbstractServiceDefinition::_initialize();

    // References
    if (m_statePattern)
    {
        m_statePattern->_initialize();
    }
    if (m_parameterPattern)
    {
        m_parameterPattern->_initialize();
    }
    if (m_wiringPattern)
    {
        m_wiringPattern->_initialize();
    }
    if (m_monitoringPattern)
    {
        m_monitoringPattern->_initialize();
    }
    for (size_t i = 0; i < m_services->size(); i++)
    {
        (*m_services)[i]->_initialize();
    }

    /*PROTECTED REGION ID(CoordinationServiceDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CoordinationServiceDefinition::eGet(
        ::ecore::EInt _featureID, ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
        _any = m_properties->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN:
    {
        if (m_statePattern)
            _any = ::ecore::as < ::ecore::EObject > (m_statePattern);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN:
    {
        if (m_parameterPattern)
            _any = ::ecore::as < ::ecore::EObject > (m_parameterPattern);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN:
    {
        if (m_wiringPattern)
            _any = ::ecore::as < ::ecore::EObject > (m_wiringPattern);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN:
    {
        if (m_monitoringPattern)
            _any = ::ecore::as < ::ecore::EObject > (m_monitoringPattern);
    }
        return _any;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES:
    {
        _any = m_services->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void CoordinationServiceDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::serviceDefinition::AbstractServiceDefinition::setName(_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::serviceDefinition::AbstractServiceDefinition::getProperties().clear();
        ::serviceDefinition::AbstractServiceDefinition::getProperties().insert_all(
                *_t0);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::coordinationPattern::StatePattern_ptr _t1 =
                dynamic_cast< ::coordinationPattern::StatePattern* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::coordinationPattern::StatePattern >(_t0);*/
        ::serviceDefinition::CoordinationServiceDefinition::setStatePattern(
                _t1);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::coordinationPattern::ParameterPattern_ptr _t1 =
                dynamic_cast< ::coordinationPattern::ParameterPattern* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::coordinationPattern::ParameterPattern >(_t0);*/
        ::serviceDefinition::CoordinationServiceDefinition::setParameterPattern(
                _t1);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::coordinationPattern::DynamicWiringPattern_ptr _t1 =
                dynamic_cast< ::coordinationPattern::DynamicWiringPattern* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::coordinationPattern::DynamicWiringPattern >(_t0);*/
        ::serviceDefinition::CoordinationServiceDefinition::setWiringPattern(
                _t1);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::coordinationPattern::MonitoringPattern_ptr _t1 =
                dynamic_cast< ::coordinationPattern::MonitoringPattern* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::coordinationPattern::MonitoringPattern >(_t0);*/
        ::serviceDefinition::CoordinationServiceDefinition::setMonitoringPattern(
                _t1);
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::serviceDefinition::CoordinationServiceDefinition::getServices().clear();
        ::serviceDefinition::CoordinationServiceDefinition::getServices().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CoordinationServiceDefinition::eIsSet(
        ::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
        return m_properties && m_properties->size();
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN:
        return (bool) m_statePattern;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN:
        return (bool) m_parameterPattern;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN:
        return (bool) m_wiringPattern;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN:
        return (bool) m_monitoringPattern;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES:
        return m_services && m_services->size();

    }
    throw "Error";
}

void CoordinationServiceDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CoordinationServiceDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getCoordinationServiceDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void CoordinationServiceDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void CoordinationServiceDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::serviceDefinition::ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION__PROPERTIES:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__STATEPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__WIRINGPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN:
    {
    }
        return;
    case ::serviceDefinition::ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION__SERVICES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

