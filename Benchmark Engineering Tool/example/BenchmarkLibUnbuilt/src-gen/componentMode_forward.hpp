// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTMODE_FORWARD_HPP
#define _COMPONENTMODE_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(componentMode_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace componentMode
{

// EDataType

// EClass

// ComponentModeModel
    class ComponentModeModel;
    using ComponentModeModel_ptr = ::ecore::Ptr<ComponentModeModel>;

// ComponentModeRepository
    class ComponentModeRepository;
    using ComponentModeRepository_ptr = ::ecore::Ptr<ComponentModeRepository>;

// ComponentModeCollection
    class ComponentModeCollection;
    using ComponentModeCollection_ptr = ::ecore::Ptr<ComponentModeCollection>;

// ComponentModeDefinition
    class ComponentModeDefinition;
    using ComponentModeDefinition_ptr = ::ecore::Ptr<ComponentModeDefinition>;

// EEnum

// Package & Factory
    class ComponentModeFactory;
    using ComponentModeFactory_ptr = ::ecore::Ptr<ComponentModeFactory>;
    class ComponentModePackage;
    using ComponentModePackage_ptr = ::ecore::Ptr<ComponentModePackage>;

} // componentMode

#endif // _COMPONENTMODE_FORWARD_HPP

