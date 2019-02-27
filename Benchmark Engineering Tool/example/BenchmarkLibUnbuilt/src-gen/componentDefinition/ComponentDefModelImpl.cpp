// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentDefModel.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/ComponentDefinition.hpp>
#include <componentDefinition/ServiceRepoImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentDefModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void ComponentDefModel::_initialize()
{
    // Supertypes

    // References
    if (m_component)
    {
        m_component->_initialize();
    }
    for (size_t i = 0; i < m_imports->size(); i++)
    {
        (*m_imports)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentDefModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentDefModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT:
    {
        if (m_component)
            _any = ::ecore::as < ::ecore::EObject > (m_component);
    }
        return _any;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS:
    {
        _any = m_imports->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ComponentDefModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentDefinition::ComponentDefinition_ptr _t1 =
                dynamic_cast< ::componentDefinition::ComponentDefinition* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentDefinition::ComponentDefinition >(_t0);*/
        ::componentDefinition::ComponentDefModel::setComponent(_t1);
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentDefinition::ComponentDefModel::getImports().clear();
        ::componentDefinition::ComponentDefModel::getImports().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentDefModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT:
        return (bool) m_component;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS:
        return m_imports && m_imports->size();

    }
    throw "Error";
}

void ComponentDefModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentDefModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getComponentDefModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentDefModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentDefModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__COMPONENT:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTDEFMODEL__IMPORTS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

