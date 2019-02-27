// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/ParameterPatternImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterPattern.hpp"
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ParameterPatternImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

void ParameterPattern::_initialize()
{
    // Supertypes
    ::coordinationPattern::CoordinationPattern::_initialize();

    // References

    /*PROTECTED REGION ID(ParameterPatternImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParameterPattern::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET:
    {
        if (m_parameterSet)
            _any = ::ecore::as < ::ecore::EObject > (m_parameterSet);
    }
        return _any;

    }
    throw "Error";
}

void ParameterPattern::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::parameterDefinition::ParameterSetDefinition_ptr _t1 =
                dynamic_cast< ::parameterDefinition::ParameterSetDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::parameterDefinition::ParameterSetDefinition >(_t0);*/
        ::coordinationPattern::ParameterPattern::setParameterSet(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParameterPattern::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET:
        return (bool) m_parameterSet;

    }
    throw "Error";
}

void ParameterPattern::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParameterPattern::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::coordinationPattern::CoordinationPatternPackage* >(::coordinationPattern::CoordinationPatternPackage::_instance().get())->getParameterPattern();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParameterPattern::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParameterPattern::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

