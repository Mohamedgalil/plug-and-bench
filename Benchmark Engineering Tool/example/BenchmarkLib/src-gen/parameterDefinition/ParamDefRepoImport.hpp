// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParamDefRepoImport.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef PARAMETERDEFINITION_PARAMDEFREPOIMPORT_HPP
#define PARAMETERDEFINITION_PARAMDEFREPOIMPORT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <parameterDefinition/dllParameterDefinition.hpp>
#include <parameterDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ParameterDefinitionPackage.hpp"

/*PROTECTED REGION ID(ParamDefRepoImport_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace parameterDefinition
{

class EXPORT_PARAMETERDEFINITION_DLL ParamDefRepoImport : public virtual ::ecore::EObject
{
public:
    ParamDefRepoImport();

    virtual ~ParamDefRepoImport();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getImportedNamespace () const;
    virtual void setImportedNamespace (::ecore::EString const& _importedNamespace);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ParameterDefinitionPackage::PARAMDEFREPOIMPORT;

    /*PROTECTED REGION ID(ParamDefRepoImport) START*/
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

    /*PROTECTED REGION ID(ParamDefRepoImportImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ParamDefRepoImport_ptr _this()
    {   return ParamDefRepoImport_ptr(this);}

    // Attributes

    ::ecore::EString m_importedNamespace;

    // References

};

}
 // parameterDefinition

#endif // PARAMETERDEFINITION_PARAMDEFREPOIMPORT_HPP

