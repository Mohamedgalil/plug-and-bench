// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterSetRepositoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterSetRepository.hpp"
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ParameterSetRepositoryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

void ParameterSetRepository::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_sets->size(); i++)
    {
        (*m_sets)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ParameterSetRepositoryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParameterSetRepository::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS:
    {
        _any = m_sets->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ParameterSetRepository::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::parameterDefinition::ParameterSetRepository::setName(_t0);
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::parameterDefinition::ParameterSetRepository::getSets().clear();
        ::parameterDefinition::ParameterSetRepository::getSets().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParameterSetRepository::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS:
        return m_sets && m_sets->size();

    }
    throw "Error";
}

void ParameterSetRepository::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParameterSetRepository::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getParameterSetRepository();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParameterSetRepository::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParameterSetRepository::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMETERSETREPOSITORY__SETS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

