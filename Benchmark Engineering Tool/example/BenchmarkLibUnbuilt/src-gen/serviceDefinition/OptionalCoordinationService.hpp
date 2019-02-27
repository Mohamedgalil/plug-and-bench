// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/OptionalCoordinationService.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_OPTIONALCOORDINATIONSERVICE_HPP
#define SERVICEDEFINITION_OPTIONALCOORDINATIONSERVICE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(OptionalCoordinationService_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL OptionalCoordinationService : public virtual ::ecore::EObject
{
public:
    OptionalCoordinationService();

    virtual ~OptionalCoordinationService();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual ::serviceDefinition::CommunicationServiceDefinition_ptr getServiceref () const;
    virtual void setServiceref (::serviceDefinition::CommunicationServiceDefinition_ptr _serviceref);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::OPTIONALCOORDINATIONSERVICE;

    /*PROTECTED REGION ID(OptionalCoordinationService) START*/
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

    /*PROTECTED REGION ID(OptionalCoordinationServiceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OptionalCoordinationService_ptr _this()
    {   return OptionalCoordinationService_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    ::serviceDefinition::CommunicationServiceDefinition_ptr m_serviceref;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_OPTIONALCOORDINATIONSERVICE_HPP

