// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/SendPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SendPattern.hpp"
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/JoiningPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(SendPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

void SendPattern::_initialize()
{
    // Supertypes
    ::communicationPattern::JoiningPattern::_initialize();

    // References

    /*PROTECTED REGION ID(SendPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SendPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE:
    {
        if (m_dataType)
            _any = ::ecore::as < ::ecore::EObject > (m_dataType);
    }
        return _any;

    }
    throw "Error";
}

void SendPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::SendPattern::setDataType(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SendPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE:
        return (bool) m_dataType;

    }
    throw "Error";
}

void SendPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SendPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getSendPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void SendPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void SendPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

