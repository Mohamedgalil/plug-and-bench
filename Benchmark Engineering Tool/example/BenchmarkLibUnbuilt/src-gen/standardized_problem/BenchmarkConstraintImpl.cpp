// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/BenchmarkConstraintImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BenchmarkConstraint.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/BenchmarkConstraintDefinition.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(BenchmarkConstraintImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void BenchmarkConstraint::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(BenchmarkConstraintImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject BenchmarkConstraint::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION:
    {
        if (m_benchmarkConstraintDefinition)
            _any = ::ecore::as < ::ecore::EObject
                    > (m_benchmarkConstraintDefinition);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
    }
        return _any;

    }
    throw "Error";
}

void BenchmarkConstraint::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::BenchmarkConstraintDefinition_ptr _t1 =
                dynamic_cast< ::standardized_problem::BenchmarkConstraintDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::BenchmarkConstraintDefinition >(_t0);*/
        ::standardized_problem::BenchmarkConstraint::setBenchmarkConstraintDefinition(
                _t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AbstractValue_ptr _t1 =
                dynamic_cast< ::basicAttributes::AbstractValue* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AbstractValue >(_t0);*/
        ::standardized_problem::BenchmarkConstraint::setValue(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean BenchmarkConstraint::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION:
        return (bool) m_benchmarkConstraintDefinition;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE:
        return (bool) m_value;

    }
    throw "Error";
}

void BenchmarkConstraint::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr BenchmarkConstraint::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getBenchmarkConstraint();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void BenchmarkConstraint::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void BenchmarkConstraint::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

