// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Tuple.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Tuple.hpp"
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/ScenarioDef.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <standardized_problem/WeightedPerfMeasure.hpp>
#include <standardized_problem/EnvironmentVariable.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Tuple.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
Tuple::Tuple() :
        m_weight(1.0), m_scenarioDef(0), m_commServiceDef(0), m_commObject(0)
{

    m_weightedperfmeasure.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::WeightedPerfMeasure_ptr, -1, false,
                    false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__weightedperfmeasure()));
    m_environmentVariable.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::standardized_problem::EnvironmentVariable_ptr, -1, true,
                    false >(this,
                    ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__environmentVariable()));

    /*PROTECTED REGION ID(TupleImpl__TupleImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Tuple::~Tuple()
{
}

// Attributes

::ecore::EBigDecimal Tuple::getWeight() const
{
    return m_weight;
}

void Tuple::setWeight(::ecore::EBigDecimal _weight)
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
                ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__weight(),
                _old_weight,
                m_weight
        );
        eNotify(&notification);
    }
#endif
}

// References

::standardized_problem::ScenarioDef_ptr Tuple::getScenarioDef() const
{
    return m_scenarioDef;
}

::standardized_problem::ScenarioDef_ptr Tuple::basicgetScenarioDef()
{
    return m_scenarioDef;
}

void Tuple::basicsetScenarioDef(
        ::standardized_problem::ScenarioDef_ptr _scenarioDef)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::standardized_problem::ScenarioDef_ptr _old_scenarioDef = m_scenarioDef;
#endif
    m_scenarioDef = _scenarioDef;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__scenarioDef(),
                _old_scenarioDef,
                m_scenarioDef
        );
        eNotify(&notification);
    }
#endif
}

void Tuple::setScenarioDef(::standardized_problem::ScenarioDef_ptr _scenarioDef)
{
    if (_scenarioDef != m_scenarioDef)
    {
        ::ecore::EJavaObject _this = ::ecore::EObject::_this();
        if (m_scenarioDef != nullptr)
        {
            m_scenarioDef->_inverseRemove(
                    ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE,
                    _this);
        }
        if (_scenarioDef != nullptr)
        {
            _scenarioDef->_inverseAdd(
                    ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE,
                    _this);
        }
        basicsetScenarioDef(_scenarioDef);
    }
}

::serviceDefinition::CommunicationServiceDefinition_ptr Tuple::getCommServiceDef() const
{
    return m_commServiceDef;
}

void Tuple::setCommServiceDef(
        ::serviceDefinition::CommunicationServiceDefinition_ptr _commServiceDef)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::CommunicationServiceDefinition_ptr _old_commServiceDef = m_commServiceDef;
#endif
    m_commServiceDef = _commServiceDef;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__commServiceDef(),
                _old_commServiceDef,
                m_commServiceDef
        );
        eNotify(&notification);
    }
#endif
}

::communicationObject::CommunicationObject_ptr Tuple::getCommObject() const
{
    return m_commObject;
}

void Tuple::setCommObject(
        ::communicationObject::CommunicationObject_ptr _commObject)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommunicationObject_ptr _old_commObject = m_commObject;
#endif
    m_commObject = _commObject;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getTuple__commObject(),
                _old_commObject,
                m_commObject
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::WeightedPerfMeasure_ptr >& Tuple::getWeightedperfmeasure() const
{
    return *m_weightedperfmeasure;
}

::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& Tuple::getWeightedperfmeasure()
{
    return *m_weightedperfmeasure;
}

const ::ecorecpp::mapping::EList<
        ::standardized_problem::EnvironmentVariable_ptr >& Tuple::getEnvironmentVariable() const
{
    return *m_environmentVariable;
}

::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariable_ptr >& Tuple::getEnvironmentVariable()
{
    return *m_environmentVariable;
}

