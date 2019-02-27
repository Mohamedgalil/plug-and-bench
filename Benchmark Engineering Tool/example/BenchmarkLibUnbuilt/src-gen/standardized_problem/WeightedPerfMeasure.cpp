// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/WeightedPerfMeasure.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "WeightedPerfMeasure.hpp"
#include <standardized_problem/PerformanceMeasure.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(WeightedPerfMeasure.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
WeightedPerfMeasure::WeightedPerfMeasure() :
        m_weight(1.0), m_perfMeasure(0)
{

    /*PROTECTED REGION ID(WeightedPerfMeasureImpl__WeightedPerfMeasureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

WeightedPerfMeasure::~WeightedPerfMeasure()
{
}

// Attributes

::ecore::EBigDecimal WeightedPerfMeasure::getWeight() const
{
    return m_weight;
}

void WeightedPerfMeasure::setWeight(::ecore::EBigDecimal _weight)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigDecimal _old_weight = m_weight;
#endif
    m_weight = _weight;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getWeightedPerfMeasure__weight(),
                _old_weight,
                m_weight
        );
        eNotify(&notification);
    }
#endif
}

// References

::standardized_problem::PerformanceMeasure_ptr WeightedPerfMeasure::getPerfMeasure() const
{
    return m_perfMeasure;
}

void WeightedPerfMeasure::setPerfMeasure(
        ::standardized_problem::PerformanceMeasure_ptr _perfMeasure)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::PerformanceMeasure_ptr _old_perfMeasure = m_perfMeasure;
#endif
    m_perfMeasure = _perfMeasure;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getWeightedPerfMeasure__perfMeasure(),
                _old_perfMeasure,
                m_perfMeasure
        );
        eNotify(&notification);
    }
#endif
}

