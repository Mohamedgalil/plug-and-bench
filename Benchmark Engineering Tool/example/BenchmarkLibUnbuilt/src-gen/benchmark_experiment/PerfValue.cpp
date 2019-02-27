// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/PerfValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PerfValue.hpp"
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "benchmark_experiment/Benchmark_experimentPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PerfValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

// Default constructor
PerfValue::PerfValue() :
        m_value(0.0), m_weightedPerfMeasure(0)
{

    /*PROTECTED REGION ID(PerfValueImpl__PerfValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

PerfValue::~PerfValue()
{
}

// Attributes

::ecore::EBigDecimal PerfValue::getValue() const
{
    return m_value;
}

void PerfValue::setValue(::ecore::EBigDecimal _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigDecimal _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getPerfValue__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

// References

::standardized_problem::WeightedPerfMeasure_ptr PerfValue::getWeightedPerfMeasure() const
{
    return m_weightedPerfMeasure;
}

void PerfValue::setWeightedPerfMeasure(
        ::standardized_problem::WeightedPerfMeasure_ptr _weightedPerfMeasure)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::WeightedPerfMeasure_ptr _old_weightedPerfMeasure = m_weightedPerfMeasure;
#endif
    m_weightedPerfMeasure = _weightedPerfMeasure;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getPerfValue__weightedPerfMeasure(),
                _old_weightedPerfMeasure,
                m_weightedPerfMeasure
        );
        eNotify(&notification);
    }
#endif
}

