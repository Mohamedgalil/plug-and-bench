// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefRepository.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_SERVICEDEFREPOSITORY_HPP
#define SERVICEDEFINITION_SERVICEDEFREPOSITORY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(ServiceDefRepository_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL ServiceDefRepository : public virtual ::ecore::EObject
{
public:
    ServiceDefRepository();

    virtual ~ServiceDefRepository();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual ::serviceDefinition::ServiceRepoVersion_ptr getVersion () const;
    virtual void setVersion (::serviceDefinition::ServiceRepoVersion_ptr _version);

    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::AbstractServiceDefinition_ptr >& getServices () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::AbstractServiceDefinition_ptr >& getServices ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::SERVICEDEFREPOSITORY;

    /*PROTECTED REGION ID(ServiceDefRepository) START*/
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

    /*PROTECTED REGION ID(ServiceDefRepositoryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ServiceDefRepository_ptr _this()
    {   return ServiceDefRepository_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    ::serviceDefinition::ServiceRepoVersion_ptr m_version;

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::AbstractServiceDefinition_ptr >> m_services;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_SERVICEDEFREPOSITORY_HPP

