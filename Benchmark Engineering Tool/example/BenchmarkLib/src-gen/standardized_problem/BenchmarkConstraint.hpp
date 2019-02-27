// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/BenchmarkConstraint.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_BENCHMARKCONSTRAINT_HPP
#define STANDARDIZED_PROBLEM_BENCHMARKCONSTRAINT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <basicAttributes_forward.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(BenchmarkConstraint_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL BenchmarkConstraint : public virtual ::ecore::EObject
{
public:
    BenchmarkConstraint();

    virtual ~BenchmarkConstraint();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::standardized_problem::BenchmarkConstraintDefinition_ptr getBenchmarkConstraintDefinition () const;
    virtual void setBenchmarkConstraintDefinition (::standardized_problem::BenchmarkConstraintDefinition_ptr _benchmarkConstraintDefinition);

    virtual ::basicAttributes::AbstractValue_ptr getValue () const;
    virtual void setValue (::basicAttributes::AbstractValue_ptr _value);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::BENCHMARKCONSTRAINT;

    /*PROTECTED REGION ID(BenchmarkConstraint) START*/
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

    /*PROTECTED REGION ID(BenchmarkConstraintImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    BenchmarkConstraint_ptr _this()
    {   return BenchmarkConstraint_ptr(this);}

    // Attributes

    // References

    ::standardized_problem::BenchmarkConstraintDefinition_ptr m_benchmarkConstraintDefinition;

    ::basicAttributes::AbstractValue_ptr m_value;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_BENCHMARKCONSTRAINT_HPP

