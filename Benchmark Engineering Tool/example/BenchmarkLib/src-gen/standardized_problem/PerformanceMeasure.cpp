// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/PerformanceMeasure.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PerformanceMeasure.hpp"
#include <standardized_problem/DescriptorObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PerformanceMeasure.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
PerformanceMeasure::PerformanceMeasure()
{

    /*PROTECTED REGION ID(PerformanceMeasureImpl__PerformanceMeasureImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

PerformanceMeasure::~PerformanceMeasure()
{
}

// Attributes

::ecore::EString const& PerformanceMeasure::getMetric() const
{
    return m_metric;
}

void PerformanceMeasure::setMetric(::ecore::EString const& _metric)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_metric = m_metric;
#endif
    m_metric = _metric;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getPerformanceMeasure__metric(),
                _old_metric,
                m_metric
        );
        eNotify(&notification);
    }
#endif
}

// References

