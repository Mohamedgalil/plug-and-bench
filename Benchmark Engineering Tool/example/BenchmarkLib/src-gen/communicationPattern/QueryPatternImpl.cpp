// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/QueryPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "QueryPattern.hpp"
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/RequestAnswerPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(QueryPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

void QueryPattern::_initialize()
{
    // Supertypes
    ::communicationPattern::RequestAnswerPattern::_initialize();

    // References

    /*PROTECTED REGION ID(QueryPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject QueryPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE:
    {
        if (m_requestType)
            _any = ::ecore::as < ::ecore::EObject > (m_requestType);
    }
        return _any;
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE:
    {
        if (m_answerType)
            _any = ::ecore::as < ::ecore::EObject > (m_answerType);
    }
        return _any;

    }
    throw "Error";
}

void QueryPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::QueryPattern::setRequestType(_t1);
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::QueryPattern::setAnswerType(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean QueryPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE:
        return (bool) m_requestType;
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE:
        return (bool) m_answerType;

    }
    throw "Error";
}

void QueryPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr QueryPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getQueryPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void QueryPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void QueryPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE:
    {
    }
        return;
    case ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

