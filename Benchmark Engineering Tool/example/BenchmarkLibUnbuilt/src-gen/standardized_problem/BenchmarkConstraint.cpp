// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/BenchmarkConstraint.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "BenchmarkConstraint.hpp"
#include <standardized_problem/BenchmarkConstraintDefinition.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(BenchmarkConstraint.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
BenchmarkConstraint::BenchmarkConstraint() :
        m_benchmarkConstraintDefinition(0), m_value(0)
{

    /*PROTECTED REGION ID(BenchmarkConstraintImpl__BenchmarkConstraintImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

BenchmarkConstraint::~BenchmarkConstraint()
{
    if (m_value)
    {
        m_value.reset();
    }
}

// Attributes

// References

::standardized_problem::BenchmarkConstraintDefinition_ptr BenchmarkConstraint::getBenchmarkConstraintDefinition() const
{
    return m_benchmarkConstraintDefinition;
}

void BenchmarkConstraint::setBenchmarkConstraintDefinition(
        ::standardized_problem::BenchmarkConstraintDefinition_ptr _benchmarkConstraintDefinition)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::BenchmarkConstraintDefinition_ptr _old_benchmarkConstraintDefinition = m_benchmarkConstraintDefinition;
#endif
    m_benchmarkConstraintDefinition = _benchmarkConstraintDefinition;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getBenchmarkConstraint__benchmarkConstraintDefinition(),
                _old_benchmarkConstraintDefinition,
                m_benchmarkConstraintDefinition
        );
        eNotify(&notification);
    }
#endif
}

::basicAttributes::AbstractValue_ptr BenchmarkConstraint::getValue() const
{
    return m_value;
}

void BenchmarkConstraint::setValue(::basicAttributes::AbstractValue_ptr _value)
{
    if (m_value)
        m_value->_setEContainer(BenchmarkConstraint_ptr(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getBenchmarkConstraint__value());
    if (_value)
        _value->_setEContainer(_this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getBenchmarkConstraint__value());

#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::AbstractValue_ptr _old_value = m_value;
#endif
    m_value = _value;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getBenchmarkConstraint__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

