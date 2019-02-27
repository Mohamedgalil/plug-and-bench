// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/PushPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PushPattern.hpp"
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <communicationObject/CommunicationObject.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(PushPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

void PushPattern::_initialize()
{
    // Supertypes
    ::communicationPattern::ForkingPattern::_initialize();

    // References

    /*PROTECTED REGION ID(PushPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject PushPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE:
    {
        if (m_dataType)
            _any = ::ecore::as < ::ecore::EObject > (m_dataType);
    }
        return _any;

    }
    throw "Error";
}

void PushPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::communicationObject::CommunicationObject_ptr _t1 =
                dynamic_cast< ::communicationObject::CommunicationObject* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::communicationObject::CommunicationObject >(_t0);*/
        ::communicationPattern::PushPattern::setDataType(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean PushPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE:
        return (bool) m_dataType;

    }
    throw "Error";
}

void PushPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr PushPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::communicationPattern::CommunicationPatternPackage* >(::communicationPattern::CommunicationPatternPackage::_instance().get())->getPushPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void PushPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void PushPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

