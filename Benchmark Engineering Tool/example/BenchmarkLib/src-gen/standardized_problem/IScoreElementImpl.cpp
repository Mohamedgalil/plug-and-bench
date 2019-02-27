// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/IScoreElementImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IScoreElement.hpp"
#include <standardized_problem/Standardized_problemPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(IScoreElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

void IScoreElement::_initialize()
{
    // Supertypes

    // References

    /*PROTECTED REGION ID(IScoreElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject IScoreElement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::toAny(_any, m_score);
    }
        return _any;

    }
    throw "Error";
}

void IScoreElement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
    {
        ::ecore::EBigDecimal _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EBigDecimal
                > ::fromAny(_newValue, _t0);
        ::standardized_problem::IScoreElement::setScore(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean IScoreElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE:
        return ::ecorecpp::mapping::set_traits < ::ecore::EBigDecimal
                > ::is_set(m_score);

    }
    throw "Error";
}

void IScoreElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr IScoreElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::standardized_problem::Standardized_problemPackage* >(::standardized_problem::Standardized_problemPackage::_instance().get())->getIScoreElement();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void IScoreElement::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void IScoreElement::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

