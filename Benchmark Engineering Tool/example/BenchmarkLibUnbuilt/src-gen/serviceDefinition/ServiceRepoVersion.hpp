// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceRepoVersion.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_SERVICEREPOVERSION_HPP
#define SERVICEDEFINITION_SERVICEREPOVERSION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(ServiceRepoVersion_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL ServiceRepoVersion : public virtual ::ecore::EObject
{
public:
    ServiceRepoVersion();

    virtual ~ServiceRepoVersion();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getMajor () const;
    virtual void setMajor (::ecore::EInt _major);

    virtual ::ecore::EInt getMinor () const;
    virtual void setMinor (::ecore::EInt _minor);

    virtual ::ecore::EInt getPatch () const;
    virtual void setPatch (::ecore::EInt _patch);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::SERVICEREPOVERSION;

    /*PROTECTED REGION ID(ServiceRepoVersion) START*/
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

    /*PROTECTED REGION ID(ServiceRepoVersionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ServiceRepoVersion_ptr _this()
    {   return ServiceRepoVersion_ptr(this);}

    // Attributes

    ::ecore::EInt m_major;

    ::ecore::EInt m_minor;

    ::ecore::EInt m_patch;

    // References

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_SERVICEREPOVERSION_HPP

