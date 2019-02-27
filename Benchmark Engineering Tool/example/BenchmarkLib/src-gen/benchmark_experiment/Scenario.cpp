// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Scenario.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Scenario.hpp"
#include <standardized_problem/IScore.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <benchmark_experiment/PerfValue.hpp>
#include <standardized_problem/Tuple.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "benchmark_experiment/Benchmark_experimentPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Scenario.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::benchmark_experiment;

// Default constructor
Scenario::Scenario() :
        m_tuple(0)
{

    m_testData.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::communicationObject::CommunicationObject_ptr, -1, false,
                    false >(this,
                    ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getScenario__testData()));
    m_groundTruthData.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::communicationObject::CommunicationObject_ptr, -1, false,
                    false >(this,
                    ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getScenario__groundTruthData()));
    m_recievedData.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::communicationObject::CommunicationObject_ptr, -1, false,
                    false >(this,
                    ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getScenario__recievedData()));
    m_perfvalue.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::benchmark_experiment::PerfValue_ptr, -1, true, false >(
                    this,
                    ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getScenario__perfvalue()));

    /*PROTECTED REGION ID(ScenarioImpl__ScenarioImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Scenario::~Scenario()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getTestData() const
{
    return *m_testData;
}

::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getTestData()
{
    return *m_testData;
}

const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getGroundTruthData() const
{
    return *m_groundTruthData;
}

::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getGroundTruthData()
{
    return *m_groundTruthData;
}

const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getRecievedData() const
{
    return *m_recievedData;
}

::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& Scenario::getRecievedData()
{
    return *m_recievedData;
}

const ::ecorecpp::mapping::EList< ::benchmark_experiment::PerfValue_ptr >& Scenario::getPerfvalue() const
{
    return *m_perfvalue;
}

::ecorecpp::mapping::EList< ::benchmark_experiment::PerfValue_ptr >& Scenario::getPerfvalue()
{
    return *m_perfvalue;
}

::standardized_problem::Tuple_ptr Scenario::getTuple() const
{
    return m_tuple;
}

void Scenario::setTuple(::standardized_problem::Tuple_ptr _tuple)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::Tuple_ptr _old_tuple = m_tuple;
#endif
    m_tuple = _tuple;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::benchmark_experiment::Benchmark_experimentPackage::_instance()->getScenario__tuple(),
                _old_tuple,
                m_tuple
        );
        eNotify(&notification);
    }
#endif
}

