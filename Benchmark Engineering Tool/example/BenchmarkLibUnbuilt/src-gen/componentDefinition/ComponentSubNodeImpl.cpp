// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentSubNodeImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentSubNode.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/NamedComponentElement.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentSubNodeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void ComponentSubNode::_initialize()
{
    // Supertypes
    ::componentDefinition::NamedComponentElement::_initialize();

    // References
    for (size_t i = 0; i < m_links->size(); i++)
    {
        (*m_links)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentSubNodeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentSubNode::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
        _any = m_links->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ComponentSubNode::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::componentDefinition::NamedComponentElement::setName(_t0);
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentDefinition::ComponentSubNode::getLinks().clear();
        ::componentDefinition::ComponentSubNode::getLinks().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentSubNode::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
        return m_links && m_links->size();

    }
    throw "Error";
}

void ComponentSubNode::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentSubNode::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getComponentSubNode();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentSubNode::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentSubNode::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

