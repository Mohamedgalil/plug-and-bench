// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ActivityImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Activity.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/ComponentSubNode.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/ActivityExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ActivityImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void Activity::_initialize()
{
    // Supertypes
    ::componentDefinition::ComponentSubNode::_initialize();

    // References
    for (size_t i = 0; i < m_extensions->size(); i++)
    {
        (*m_extensions)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ActivityImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Activity::eGet(::ecore::EInt _featureID,
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
    case ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS:
    {
        _any = m_extensions->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void Activity::eSet(::ecore::EInt _featureID,
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
    case ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentDefinition::Activity::getExtensions().clear();
        ::componentDefinition::Activity::getExtensions().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Activity::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
        return m_links && m_links->size();
    case ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS:
        return m_extensions && m_extensions->size();

    }
    throw "Error";
}

void Activity::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Activity::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getActivity();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Activity::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Activity::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTSUBNODE__LINKS:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::ACTIVITY__EXTENSIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

