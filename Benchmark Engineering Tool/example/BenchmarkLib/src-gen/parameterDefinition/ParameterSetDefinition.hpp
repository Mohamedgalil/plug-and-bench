// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterSetDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef PARAMETERDEFINITION_PARAMETERSETDEFINITION_HPP
#define PARAMETERDEFINITION_PARAMETERSETDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <parameterDefinition/dllParameterDefinition.hpp>
#include <parameterDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ParameterDefinitionPackage.hpp"

/*PROTECTED REGION ID(ParameterSetDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace parameterDefinition
{

class EXPORT_PARAMETERDEFINITION_DLL ParameterSetDefinition : public virtual ::ecore::EObject
{
public:
    ParameterSetDefinition();

    virtual ~ParameterSetDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::parameterDefinition::AbstractParameter_ptr >& getParameters () const;
    virtual ::ecorecpp::mapping::EList< ::parameterDefinition::AbstractParameter_ptr >& getParameters ();

    virtual const ::ecorecpp::mapping::EList< ::parameterDefinition::ParameterSetDefinition_ptr >& getExtends () const;
    virtual ::ecorecpp::mapping::EList< ::parameterDefinition::ParameterSetDefinition_ptr >& getExtends ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ParameterDefinitionPackage::PARAMETERSETDEFINITION;

    /*PROTECTED REGION ID(ParameterSetDefinition) START*/
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

    /*PROTECTED REGION ID(ParameterSetDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ParameterSetDefinition_ptr _this()
    {   return ParameterSetDefinition_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::parameterDefinition::AbstractParameter_ptr >> m_parameters;

    std::shared_ptr<::ecorecpp::mapping::EList< ::parameterDefinition::ParameterSetDefinition_ptr >> m_extends;

};

}
 // parameterDefinition

#endif // PARAMETERDEFINITION_PARAMETERSETDEFINITION_HPP

