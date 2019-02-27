// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/PerfValueImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PerfValue.hpp"
#include <benchmark_experiment/Benchmark_experimentPackage.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PerfValueImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

void PerfValue::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(PerfValueImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PerfValue::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_value);
    }
        return _any;
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE:
    {
        if (m_weightedPerfMeasure)
            _any = ::ecore::as < ::ecore::EObject > (m_weightedPerfMeasure);
    }
        return _any;

    }
    throw "Error";
}

void PerfValue::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__VALUE:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::benchmark_experiment::PerfValue::setValue(_t0);
    }
        return;
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::WeightedPerfMeasure_ptr _t1 =
                dynamic_cast< ::standardized_problem::WeightedPerfMeasure* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::WeightedPerfMeasure >(_t0);*/
        ::benchmark_experiment::PerfValue::setWeightedPerfMeasure(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean PerfValue::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__VALUE:
        return m_value != 0.0;
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE:
        return (bool) m_weightedPerfMeasure;

    }
    throw "Error";
}

void PerfValue::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr PerfValue::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::benchmark_experiment::Benchmark_experimentPackage* >(::benchmark_experiment::Benchmark_experimentPackage::_instance().get())->getPerfValue();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PerfValue::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PerfValue::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::benchmark_experiment::Benchmark_experimentPackage::PERFVALUE__WEIGHTEDPERFMEASURE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

