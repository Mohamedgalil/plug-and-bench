// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/AnswerPortImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AnswerPort.hpp"
#include <componentDefinition/ComponentDefinitionPackage.hpp>
#include <componentDefinition/ComponentPort.hpp>
#include <componentDefinition/ComponentPortExtension.hpp>
#include <serviceDefinition/TwoWayCommunicationService.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(AnswerPortImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

void AnswerPort::_initialize()
{
    // Supertypes
    ::componentDefinition::ComponentPort::_initialize();

    // References

    /*PROTECTED REGION ID(AnswerPortImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AnswerPort::eGet(::ecore::EInt _featureID,
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
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS:
    {
        _any = m_extensions->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE:
    {
        if (m_service)
            _any = ::ecore::as < ::ecore::EObject > (m_service);
    }
        return _any;

    }
    throw "Error";
}

void AnswerPort::eSet(::ecore::EInt _featureID,
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
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::componentDefinition::ComponentPort::getExtensions().clear();
        ::componentDefinition::ComponentPort::getExtensions().insert_all(*_t0);
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::serviceDefinition::TwoWayCommunicationService_ptr _t1 =
                dynamic_cast< ::serviceDefinition::TwoWayCommunicationService* >(_t0.get()); /*/// std::dynamic_pointer_cast< ::serviceDefinition::TwoWayCommunicationService >(_t0);*/
        ::componentDefinition::AnswerPort::setService(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AnswerPort::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::NAMEDCOMPONENTELEMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::ecore::EString
                > ::is_set(m_name);
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS:
        return m_extensions && m_extensions->size();
    case ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE:
        return (bool) m_service;

    }
    throw "Error";
}

void AnswerPort::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AnswerPort::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::componentDefinition::ComponentDefinitionPackage* >(::componentDefinition::ComponentDefinitionPackage::_instance().get())->getAnswerPort();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void AnswerPort::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE:
    {
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void AnswerPort::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::componentDefinition::ComponentDefinitionPackage::COMPONENTPORT__EXTENSIONS:
    {
    }
        return;
    case ::componentDefinition::ComponentDefinitionPackage::ANSWERPORT__SERVICE:
    {
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}

