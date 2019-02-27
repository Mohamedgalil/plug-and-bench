// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COORDINATIONPATTERN_FORWARD_HPP
#define _COORDINATIONPATTERN_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(coordinationPattern_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace coordinationPattern
{

// EDataType

// EClass

// CoordinationPattern
    class CoordinationPattern;
    using CoordinationPattern_ptr = ::ecore::Ptr<CoordinationPattern>;

// StatePattern
    class StatePattern;
    using StatePattern_ptr = ::ecore::Ptr<StatePattern>;

// ParameterPattern
    class ParameterPattern;
    using ParameterPattern_ptr = ::ecore::Ptr<ParameterPattern>;

// DynamicWiringPattern
    class DynamicWiringPattern;
    using DynamicWiringPattern_ptr = ::ecore::Ptr<DynamicWiringPattern>;

// MonitoringPattern
    class MonitoringPattern;
    using MonitoringPattern_ptr = ::ecore::Ptr<MonitoringPattern>;

// EEnum

// Package & Factory
    class CoordinationPatternFactory;
    using CoordinationPatternFactory_ptr = ::ecore::Ptr<CoordinationPatternFactory>;
    class CoordinationPatternPackage;
    using CoordinationPatternPackage_ptr = ::ecore::Ptr<CoordinationPatternPackage>;

} // coordinationPattern

#endif // _COORDINATIONPATTERN_FORWARD_HPP

