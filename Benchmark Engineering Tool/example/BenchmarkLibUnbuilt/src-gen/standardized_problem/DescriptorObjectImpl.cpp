// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/DescriptorObjectImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DescriptorObject.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(DescriptorObjectImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void DescriptorObject::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(DescriptorObjectImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject DescriptorObject::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_label);
    }
        return _any;
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_description);
    }
        return _any;

    }
    throw "Error";
}

void DescriptorObject::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::DescriptorObject::setLabel(_t0);
    }
        return;
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
    {
        ::ecore::EString _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::DescriptorObject::setDescription(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean DescriptorObject::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_label);
    case ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_description);

    }
    throw "Error";
}

void DescriptorObject::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr DescriptorObject::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getDescriptorObject();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void DescriptorObject::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void DescriptorObject::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

