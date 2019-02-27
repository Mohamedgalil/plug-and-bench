// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/WeightedPerfMeasure.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_WEIGHTEDPERFMEASURE_HPP
#define STANDARDIZED_PROBLEM_WEIGHTEDPERFMEASURE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <ecore_forward.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(WeightedPerfMeasure_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL WeightedPerfMeasure : public virtual ::ecore::EObject
{
public:
    WeightedPerfMeasure();

    virtual ~WeightedPerfMeasure();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBigDecimal getWeight () const;
    virtual void setWeight (::ecore::EBigDecimal _weight);

    // References
    virtual ::standardized_problem::PerformanceMeasure_ptr getPerfMeasure () const;
    virtual void setPerfMeasure (::standardized_problem::PerformanceMeasure_ptr _perfMeasure);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::WEIGHTEDPERFMEASURE;

    /*PROTECTED REGION ID(WeightedPerfMeasure) START*/
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

    /*PROTECTED REGION ID(WeightedPerfMeasureImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    WeightedPerfMeasure_ptr _this()
    {   return WeightedPerfMeasure_ptr(this);}

    // Attributes

    ::ecore::EBigDecimal m_weight;

    // References

    ::standardized_problem::PerformanceMeasure_ptr m_perfMeasure;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_WEIGHTEDPERFMEASURE_HPP

