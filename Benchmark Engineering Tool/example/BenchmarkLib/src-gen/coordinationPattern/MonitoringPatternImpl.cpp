// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/MonitoringPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "MonitoringPattern.hpp"
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(MonitoringPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

void MonitoringPattern::_initialize()
{
    // Supertypes
    ::coordinationPattern::CoordinationPattern::_initialize();

    // References

    /*PROTECTED REGION ID(MonitoringPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject MonitoringPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {

    }
    throw "Error";
}

void MonitoringPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EBoolean MonitoringPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

void MonitoringPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr MonitoringPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getMonitoringPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void MonitoringPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void MonitoringPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

