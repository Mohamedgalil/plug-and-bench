// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParamDefModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParamDefModel.hpp"
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <parameterDefinition/ParameterSetRepository.hpp>
#include <parameterDefinition/ParamDefRepoImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ParamDefModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

void ParamDefModel::_initialize()
{
    // Supertypes

    // References
    if (m_repository)
    {
        m_repository->_initialize();
    }
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ParamDefModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ParamDefModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY:
    {
        if (m_repository)
            _any = ::ecore::as < ::ecore::EObject > (m_repository);
    }
        return _any;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ParamDefModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::parameterDefinition::ParameterSetRepository_ptr _t1 =
                dynamic_cast< ::parameterDefinition::ParameterSetRepository* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::parameterDefinition::ParameterSetRepository >(_t0);*/
        ::parameterDefinition::ParamDefModel::setRepository(_t1);
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::parameterDefinition::ParamDefModel::getImports().clear();
        ::parameterDefinition::ParamDefModel::getImports().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ParamDefModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY:
        return (bool) m_repository;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS:
        return m_imports && m_imports->size();

    }
    throw "Error";
}

void ParamDefModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ParamDefModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getParamDefModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ParamDefModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY:
    {
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ParamDefModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__REPOSITORY:
    {
    }
        return;
    case ::parameterDefinition::ParameterDefinitionPackage::PARAMDEFMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

