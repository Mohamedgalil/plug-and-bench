// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ForkingServiceDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_FORKINGSERVICEDEFINITION_HPP
#define SERVICEDEFINITION_FORKINGSERVICEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <communicationPattern_forward.hpp>
#include <serviceDefinition/OneWayCommunicationService.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(ForkingServiceDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL ForkingServiceDefinition : public virtual ::serviceDefinition::OneWayCommunicationService
{
public:
    ForkingServiceDefinition();

    virtual ~ForkingServiceDefinition();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationPattern::ForkingPattern_ptr getPattern () const;
    virtual void setPattern (::communicationPattern::ForkingPattern_ptr _pattern);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::FORKINGSERVICEDEFINITION;

    /*PROTECTED REGION ID(ForkingServiceDefinition) START*/
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

    /*PROTECTED REGION ID(ForkingServiceDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ForkingServiceDefinition_ptr _this()
    {   return ForkingServiceDefinition_ptr(this);}

    // Attributes

    // References

    ::communicationPattern::ForkingPattern_ptr m_pattern;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_FORKINGSERVICEDEFINITION_HPP

