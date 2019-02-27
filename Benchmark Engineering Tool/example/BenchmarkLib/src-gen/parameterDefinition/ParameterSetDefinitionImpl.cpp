// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterSetDefinitionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterSetDefinition.hpp"
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/AbstractParameter.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ParameterSetDefinitionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

void ParameterSetDefinition::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_parameters->size(); i++)
    {
        (*m_parameters)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ParameterSetDefinitionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParameterSetDefinition::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS:
    {
        _any = m_parameters->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS:
    {
        _any = m_extends->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ParameterSetDefinition::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::parameterDefinition::ParameterSetDefinition::setName(_t0);
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::parameterDefinition::ParameterSetDefinition::getParameters().clear();
        ::parameterDefinition::ParameterSetDefinition::getParameters().insert_all(
                *_t0);
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::parameterDefinition::ParameterSetDefinition::getExtends().clear();
        ::parameterDefinition::ParameterSetDefinition::getExtends().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParameterSetDefinition::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS:
        return m_parameters && m_parameters->size();
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS:
        return m_extends && m_extends->size();

    }
    throw "Error";
}

void ParameterSetDefinition::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParameterSetDefinition::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getParameterSetDefinition();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParameterSetDefinition::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS:
    {
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParameterSetDefinition::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__PARAMETERS:
    {
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETDEFINITION__EXTENDS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

