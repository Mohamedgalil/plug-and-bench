// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeRepositoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentModeRepository.hpp"
#include <componentMode/ComponentModePackage.hpp>
#include <componentMode/ComponentModeCollection.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentModeRepositoryImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentMode;

void ComponentModeRepository::_initialize()
{
    // Supertypes

    // References
    for (size_t i = 0; i < m_collections->size(); i++)
    {
        (*m_collections)[i]->_initialize();
    }

    /*PROTECTED REGION ID(ComponentModeRepositoryImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentModeRepository::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS:
    {
        _any = m_collections->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;

    }
    throw "Error";
}

void ComponentModeRepository::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__NAME:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::componentMode::ComponentModeRepository::setName(_t0);
    }
        return;
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentMode::ComponentModeRepository::getCollections().clear();
        ::componentMode::ComponentModeRepository::getCollections().insert_all(
                *_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentModeRepository::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS:
        return m_collections && m_collections->size();

    }
    throw "Error";
}

void ComponentModeRepository::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentModeRepository::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentMode::ComponentModePackage* >(::componentMode::ComponentModePackage::_instance().get())->getComponentModeRepository();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentModeRepository::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentModeRepository::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEREPOSITORY__COLLECTIONS:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

