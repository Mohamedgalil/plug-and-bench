// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/EventPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EventPattern.hpp"
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EventPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

void EventPattern::_initialize()
{
    // Supertypes
    ::communicationPattern::ForkingPattern::_initialize();

    // References

    /*PROTECTED REGION ID(EventPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EventPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE:
    {
        if (m_eventType)
            _any = ::ecore::as < ::ecore::EObject > (m_eventType);
    }
        return _any;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE:
    {
        if (m_activationType)
            _any = ::ecore::as < ::ecore::EObject > (m_activationType);
    }
        return _any;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE:
    {
        if (m_eventStateType)
            _any = ::ecore::as < ::ecore::EObject > (m_eventStateType);
    }
        return _any;

    }
    throw "Error";
}

void EventPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::EventPattern::setEventType(_t1);
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::EventPattern::setActivationType(_t1);
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::EventPattern::setEventStateType(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EventPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE:
        return (bool) m_eventType;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE:
        return (bool) m_activationType;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE:
        return (bool) m_eventStateType;

    }
    throw "Error";
}

void EventPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EventPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getEventPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EventPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EventPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

