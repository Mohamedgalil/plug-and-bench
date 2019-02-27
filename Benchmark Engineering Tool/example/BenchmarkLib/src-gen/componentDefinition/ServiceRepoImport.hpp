// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ServiceRepoImport.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_SERVICEREPOIMPORT_HPP
#define COMPONENTDEFINITION_SERVICEREPOIMPORT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(ServiceRepoImport_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL ServiceRepoImport : public virtual ::ecore::EObject
{
public:
    ServiceRepoImport();

    virtual ~ServiceRepoImport();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getImportedNamespace () const;
    virtual void setImportedNamespace (::ecore::EString const& _importedNamespace);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::SERVICEREPOIMPORT;

    /*PROTECTED REGION ID(ServiceRepoImport) START*/
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

    /*PROTECTED REGION ID(ServiceRepoImportImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ServiceRepoImport_ptr _this()
    {   return ServiceRepoImport_ptr(this);}

    // Attributes

    ::ecore::EString m_importedNamespace;

    // References

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_SERVICEREPOIMPORT_HPP

