// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/ScenarioDef.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ScenarioDef.hpp"
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <standardized_problem/BenchmarkConstraint.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ScenarioDef.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
ScenarioDef::ScenarioDef() :
        m_weight(1.0)
{

    m_commServDef.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::CommunicationServiceDefinition_ptr, -1,
                    false, false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getScenarioDef__commServDef()));
    m_tuple.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::Tuple_ptr, -1, true, true >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getScenarioDef__tuple(),
                    ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF));
    m_performanceMeasures.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::WeightedPerfMeasure_ptr, -1, true,
                    false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getScenarioDef__performanceMeasures()));
    m_benchmarkconstraint.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::BenchmarkConstraint_ptr, -1, true,
                    false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getScenarioDef__benchmarkconstraint()));

    /*PROTECTED REGION ID(ScenarioDefImpl__ScenarioDefImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ScenarioDef::~ScenarioDef()
{
}

// Attributes

::ecore::EBigDecimal ScenarioDef::getWeight() const
{
    return m_weight;
}

void ScenarioDef::setWeight(::ecore::EBigDecimal _weight)
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
                ::standardized_problem::Standardized_problemPackage::_instance()->getScenarioDef__weight(),
                _old_weight,
                m_weight
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList<
        ::serviceDefinition::CommunicationServiceDefinition_ptr >& ScenarioDef::getCommServDef() const
{
    return *m_commServDef;
}

::ecorecpp::mapping::EList<
        ::serviceDefinition::CommunicationServiceDefinition_ptr >& ScenarioDef::getCommServDef()
{
    return *m_commServDef;
}

const ::ecorecpp::mapping::EList< ::standardized_problem::Tuple_ptr >& ScenarioDef::getTuple() const
{
    return *m_tuple;
}

::ecorecpp::mapping::EList< ::standardized_problem::Tuple_ptr >& ScenarioDef::getTuple()
{
    return *m_tuple;
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::WeightedPerfMeasure_ptr >& ScenarioDef::getPerformanceMeasures() const
{
    return *m_performanceMeasures;
}

::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& ScenarioDef::getPerformanceMeasures()
{
    return *m_performanceMeasures;
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::BenchmarkConstraint_ptr >& ScenarioDef::getBenchmarkconstraint() const
{
    return *m_benchmarkconstraint;
}

::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraint_ptr >& ScenarioDef::getBenchmarkconstraint()
{
    return *m_benchmarkconstraint;
}

