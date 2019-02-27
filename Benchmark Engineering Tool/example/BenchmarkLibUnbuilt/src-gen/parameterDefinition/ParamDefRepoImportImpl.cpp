// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParamDefRepoImportImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParamDefRepoImport.hpp"
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ParamDefRepoImportImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

void ParamDefRepoImport::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(ParamDefRepoImportImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParamDefRepoImport::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFREPOIMPORT__IMPORTEDNAMESPACE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_importedNamespace);
    }
        return _any;

    }
    throw "Error";
}

void ParamDefRepoImport::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFREPOIMPORT__IMPORTEDNAMESPACE:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::parameterDefinition::ParamDefRepoImport::setImportedNamespace(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParamDefRepoImport::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFREPOIMPORT__IMPORTEDNAMESPACE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_importedNamespace);

    }
    throw "Error";
}

void ParamDefRepoImport::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParamDefRepoImport::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getParamDefRepoImport();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParamDefRepoImport::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParamDefRepoImport::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

