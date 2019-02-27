// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/WeightedPerfMeasureImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "WeightedPerfMeasure.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/PerformanceMeasure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(WeightedPerfMeasureImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void WeightedPerfMeasure::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(WeightedPerfMeasureImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject WeightedPerfMeasure::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__WEIGHT:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_weight);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE:
    {
        if (m_perfMeasure)
            _any = ::ecore::as < ::ecore::EObject > (m_perfMeasure);
    }
        return _any;

    }
    throw "Error";
}

void WeightedPerfMeasure::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__WEIGHT:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::WeightedPerfMeasure::setWeight(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::PerformanceMeasure_ptr _t1 =
                dynamic_cast< ::standardized_problem::PerformanceMeasure* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::PerformanceMeasure >(_t0);*/
        ::standardized_problem::WeightedPerfMeasure::setPerfMeasure(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean WeightedPerfMeasure::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__WEIGHT:
        return m_weight != 1.0;
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE:
        return (bool) m_perfMeasure;

    }
    throw "Error";
}

void WeightedPerfMeasure::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr WeightedPerfMeasure::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getWeightedPerfMeasure();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void WeightedPerfMeasure::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void WeightedPerfMeasure::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

