// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/DynamicWiringPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DynamicWiringPattern.hpp"
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DynamicWiringPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

void DynamicWiringPattern::_initialize()
{
    // Supertypes
    ::coordinationPattern::CoordinationPattern::_initialize();

    // References

    /*PROTECTED REGION ID(DynamicWiringPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

void DynamicWiringPattern::connect(::ecore::EString const& _sourceComponent,
        ::ecore::EString const& _sourcePort,
        ::ecore::EString const& _targetComponent,
        ::ecore::EString const& _targetPort)
{
    /*PROTECTED REGION ID(DynamicWiringPatternImpl_connect) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: coordinationPattern::DynamicWiringPattern::connect";
    /*PROTECTED REGION END*/
}

void DynamicWiringPattern::disconnect(::ecore::EString const& _sourceComponent,
        ::ecore::EString const& _sourcePort)
{
    /*PROTECTED REGION ID(DynamicWiringPatternImpl_disconnect) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    throw "UnsupportedOperationException: coordinationPattern::DynamicWiringPattern::disconnect";
    /*PROTECTED REGION END*/
}

// EObject
::ecore::EJavaObject DynamicWiringPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {

    }
    throw "Error";
}

void DynamicWiringPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EBoolean DynamicWiringPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

void DynamicWiringPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr DynamicWiringPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getDynamicWiringPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DynamicWiringPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DynamicWiringPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

