// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/EnvironmentVariableImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "EnvironmentVariable.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <standardized_problem/EnvironmentVariableDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(EnvironmentVariableImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void EnvironmentVariable::_initialize()
{
    // Supertypes

    // References
    if (m_value)
    {
        m_value->_initialize();
    }

    /*PROTECTED REGION ID(EnvironmentVariableImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject EnvironmentVariable::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE:
    {
        if (m_value)
            _any = ::ecore::as < ::ecore::EObject > (m_value);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION:
    {
        if (m_environmentVariableDefinition)
            _any = ::ecore::as < ::ecore::EObject
                    > (m_environmentVariableDefinition);
    }
        return _any;

    }
    throw "Error";
}

void EnvironmentVariable::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::basicAttributes::AbstractValue_ptr _t1 =
                dynamic_cast< ::basicAttributes::AbstractValue* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::basicAttributes::AbstractValue >(_t0);*/
        ::standardized_problem::EnvironmentVariable::setValue(_t1);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::standardized_problem::EnvironmentVariableDefinition_ptr _t1 =
                dynamic_cast< ::standardized_problem::EnvironmentVariableDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::standardized_problem::EnvironmentVariableDefinition >(_t0);*/
        ::standardized_problem::EnvironmentVariable::setEnvironmentVariableDefinition(
                _t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean EnvironmentVariable::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE:
        return (bool) m_value;
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION:
        return (bool) m_environmentVariableDefinition;

    }
    throw "Error";
}

void EnvironmentVariable::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr EnvironmentVariable::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getEnvironmentVariable();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void EnvironmentVariable::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void EnvironmentVariable::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE:
    {
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

