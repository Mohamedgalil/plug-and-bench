// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_SERVICEDEFMODEL_HPP
#define SERVICEDEFINITION_SERVICEDEFMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(ServiceDefModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL ServiceDefModel : public virtual ::ecore::EObject
{
public:
    ServiceDefModel();

    virtual ~ServiceDefModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::CommRepoImport_ptr >& getImports () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::CommRepoImport_ptr >& getImports ();

    virtual ::serviceDefinition::ServiceDefRepository_ptr getRepository () const;
    virtual void setRepository (::serviceDefinition::ServiceDefRepository_ptr _repository);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::SERVICEDEFMODEL;

    /*PROTECTED REGION ID(ServiceDefModel) START*/
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

    /*PROTECTED REGION ID(ServiceDefModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ServiceDefModel_ptr _this()
    {   return ServiceDefModel_ptr(this);}

    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::CommRepoImport_ptr >> m_imports;

    ::serviceDefinition::ServiceDefRepository_ptr m_repository;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_SERVICEDEFMODEL_HPP

