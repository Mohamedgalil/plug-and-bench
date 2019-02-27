// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeModelImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentModeModel.hpp"
#include <componentMode/ComponentModePackage.hpp>
#include <componentMode/ComponentModeRepository.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(ComponentModeModelImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentMode;

void ComponentModeModel::_initialize()
{
    // Supertypes

    // References
    if (m_repository)
    {
        m_repository->_initialize();
    }

    /*PROTECTED REGION ID(ComponentModeModelImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject ComponentModeModel::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY:
    {
        if (m_repository)
            _any = ::ecore::as < ::ecore::EObject > (m_repository);
    }
        return _any;

    }
    throw "Error";
}

void ComponentModeModel::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::componentMode::ComponentModeRepository_ptr _t1 =
                dynamic_cast< ::componentMode::ComponentModeRepository* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::componentMode::ComponentModeRepository >(_t0);*/
        ::componentMode::ComponentModeModel::setRepository(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean ComponentModeModel::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY:
        return (bool) m_repository;

    }
    throw "Error";
}

void ComponentModeModel::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr ComponentModeModel::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentMode::ComponentModePackage* >(::componentMode::ComponentModePackage::_instance().get())->getComponentModeModel();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void ComponentModeModel::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void ComponentModeModel::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentMode::ComponentModePackage::COMPONENTMODEMODEL__REPOSITORY:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

