// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeCollectionImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentModeCollection.hpp"
#include <componentMode/ComponentModePackage.hpp>
#include <componentMode/ComponentModeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentModeCollectionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentMode;

void ComponentModeCollection::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_modes->size(); i++)
    {
        (*m_modes)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentModeCollectionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentModeCollection::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES:
    {
        _any = m_modes->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ComponentModeCollection::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::componentMode::ComponentModeCollection::setName(_t0);
    }
        return;
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentMode::ComponentModeCollection::getModes().clear();
        ::componentMode::ComponentModeCollection::getModes().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentModeCollection::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES:
        return m_modes && m_modes->size();

    }
    throw "Error";
}

void ComponentModeCollection::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentModeCollection::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentMode::ComponentModePackage* >(::componentMode::ComponentModePackage::_instance().get())->getComponentModeCollection();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentModeCollection::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentModeCollection::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODECOLLECTION__MODES:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

