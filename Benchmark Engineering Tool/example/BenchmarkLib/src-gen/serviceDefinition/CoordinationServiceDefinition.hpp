// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/CoordinationServiceDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_COORDINATIONSERVICEDEFINITION_HPP
#define SERVICEDEFINITION_COORDINATIONSERVICEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <coordinationPattern_forward.hpp>
#include <serviceDefinition/AbstractServiceDefinition.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(CoordinationServiceDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL CoordinationServiceDefinition : public virtual ::serviceDefinition::AbstractServiceDefinition
{
public:
    CoordinationServiceDefinition();

    virtual ~CoordinationServiceDefinition();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::coordinationPattern::StatePattern_ptr getStatePattern () const;
    virtual void setStatePattern (::coordinationPattern::StatePattern_ptr _statePattern);

    virtual ::coordinationPattern::ParameterPattern_ptr getParameterPattern () const;
    virtual void setParameterPattern (::coordinationPattern::ParameterPattern_ptr _parameterPattern);

    virtual ::coordinationPattern::DynamicWiringPattern_ptr getWiringPattern () const;
    virtual void setWiringPattern (::coordinationPattern::DynamicWiringPattern_ptr _wiringPattern);

    virtual ::coordinationPattern::MonitoringPattern_ptr getMonitoringPattern () const;
    virtual void setMonitoringPattern (::coordinationPattern::MonitoringPattern_ptr _monitoringPattern);

    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::OptionalCoordinationService_ptr >& getServices () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::OptionalCoordinationService_ptr >& getServices ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::COORDINATIONSERVICEDEFINITION;

    /*PROTECTED REGION ID(CoordinationServiceDefinition) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(CoordinationServiceDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CoordinationServiceDefinition_ptr _this()
    {   return CoordinationServiceDefinition_ptr(this);}

    // Attributes

    // References

    ::coordinationPattern::StatePattern_ptr m_statePattern;

    ::coordinationPattern::ParameterPattern_ptr m_parameterPattern;

    ::coordinationPattern::DynamicWiringPattern_ptr m_wiringPattern;

    ::coordinationPattern::MonitoringPattern_ptr m_monitoringPattern;

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::OptionalCoordinationService_ptr >> m_services;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_COORDINATIONSERVICEDEFINITION_HPP

