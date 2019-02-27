// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef PARAMETERDEFINITION_PARAMETERDEFINITION_HPP
#define PARAMETERDEFINITION_PARAMETERDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <parameterDefinition/dllParameterDefinition.hpp>
#include <parameterDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <basicAttributes_forward.hpp>
#include <parameterDefinition/AbstractParameter.hpp>

#include "ParameterDefinitionPackage.hpp"

/*PROTECTED REGION ID(ParameterDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace parameterDefinition
{

class EXPORT_PARAMETERDEFINITION_DLL ParameterDefinition : public virtual ::parameterDefinition::AbstractParameter
{
public:
    ParameterDefinition();

    virtual ~ParameterDefinition();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ParameterDefinitionPackage::PARAMETERDEFINITION;

    /*PROTECTED REGION ID(ParameterDefinition) START*/
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

    /*PROTECTED REGION ID(ParameterDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ParameterDefinition_ptr _this()
    {   return ParameterDefinition_ptr(this);}

    // Attributes

    // References

};

}
 // parameterDefinition

#endif // PARAMETERDEFINITION_PARAMETERDEFINITION_HPP

