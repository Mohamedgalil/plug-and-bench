// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/EnvironmentVariable.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_ENVIRONMENTVARIABLE_HPP
#define STANDARDIZED_PROBLEM_ENVIRONMENTVARIABLE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <basicAttributes_forward.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(EnvironmentVariable_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL EnvironmentVariable : public virtual ::ecore::EObject
{
public:
    EnvironmentVariable();

    virtual ~EnvironmentVariable();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::basicAttributes::AbstractValue_ptr getValue () const;
    virtual void setValue (::basicAttributes::AbstractValue_ptr _value);

    virtual ::standardized_problem::EnvironmentVariableDefinition_ptr getEnvironmentVariableDefinition () const;
    virtual void setEnvironmentVariableDefinition (::standardized_problem::EnvironmentVariableDefinition_ptr _environmentVariableDefinition);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::ENVIRONMENTVARIABLE;

    /*PROTECTED REGION ID(EnvironmentVariable) START*/
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

    /*PROTECTED REGION ID(EnvironmentVariableImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EnvironmentVariable_ptr _this()
    {   return EnvironmentVariable_ptr(this);}

    // Attributes

    // References

    ::basicAttributes::AbstractValue_ptr m_value;

    ::standardized_problem::EnvironmentVariableDefinition_ptr m_environmentVariableDefinition;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_ENVIRONMENTVARIABLE_HPP

