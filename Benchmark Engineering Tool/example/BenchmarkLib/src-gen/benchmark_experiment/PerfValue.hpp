// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/PerfValue.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BENCHMARK_EXPERIMENT_PERFVALUE_HPP
#define BENCHMARK_EXPERIMENT_PERFVALUE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <benchmark_experiment/dllBenchmark_experiment.hpp>
#include <benchmark_experiment_forward.hpp>

#include <ecore_forward.hpp>
#include <standardized_problem_forward.hpp>

#include "Benchmark_experimentPackage.hpp"

/*PROTECTED REGION ID(PerfValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace benchmark_experiment
{

class EXPORT_BENCHMARK_EXPERIMENT_DLL PerfValue : public virtual ::ecore::EObject
{
public:
    PerfValue();

    virtual ~PerfValue();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBigDecimal getValue () const;
    virtual void setValue (::ecore::EBigDecimal _value);

    // References
    virtual ::standardized_problem::WeightedPerfMeasure_ptr getWeightedPerfMeasure () const;
    virtual void setWeightedPerfMeasure (::standardized_problem::WeightedPerfMeasure_ptr _weightedPerfMeasure);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Benchmark_experimentPackage::PERFVALUE;

    /*PROTECTED REGION ID(PerfValue) START*/
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

    /*PROTECTED REGION ID(PerfValueImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PerfValue_ptr _this()
    {   return PerfValue_ptr(this);}

    // Attributes

    ::ecore::EBigDecimal m_value;

    // References

    ::standardized_problem::WeightedPerfMeasure_ptr m_weightedPerfMeasure;

};

}
 // benchmark_experiment

#endif // BENCHMARK_EXPERIMENT_PERFVALUE_HPP

