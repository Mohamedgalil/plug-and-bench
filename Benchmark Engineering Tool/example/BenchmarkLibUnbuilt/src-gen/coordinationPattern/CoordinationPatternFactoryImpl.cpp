// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <coordinationPattern/CoordinationPatternFactory.hpp>
#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>
#include <coordinationPattern/StatePattern.hpp>
#include <coordinationPattern/ParameterPattern.hpp>
#include <coordinationPattern/DynamicWiringPattern.hpp>
#include <coordinationPattern/MonitoringPattern.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::coordinationPattern;

CoordinationPatternFactory::CoordinationPatternFactory()
{
}

::ecore::EObject_ptr CoordinationPatternFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CoordinationPatternPackage::COORDINATIONPATTERN:
        return createCoordinationPattern();
    case CoordinationPatternPackage::STATEPATTERN:
        return createStatePattern();
    case CoordinationPatternPackage::PARAMETERPATTERN:
        return createParameterPattern();
    case CoordinationPatternPackage::DYNAMICWIRINGPATTERN:
        return createDynamicWiringPattern();
    case CoordinationPatternPackage::MONITORINGPATTERN:
        return createMonitoringPattern();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CoordinationPatternFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CoordinationPatternFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

CoordinationPattern_ptr CoordinationPatternFactory::createCoordinationPattern()
{
    return ::ecore::Ptr < CoordinationPattern > (new CoordinationPattern);
}
StatePattern_ptr CoordinationPatternFactory::createStatePattern()
{
    return ::ecore::Ptr < StatePattern > (new StatePattern);
}
ParameterPattern_ptr CoordinationPatternFactory::createParameterPattern()
{
    return ::ecore::Ptr < ParameterPattern > (new ParameterPattern);
}
DynamicWiringPattern_ptr CoordinationPatternFactory::createDynamicWiringPattern()
{
    return ::ecore::Ptr < DynamicWiringPattern > (new DynamicWiringPattern);
}
MonitoringPattern_ptr CoordinationPatternFactory::createMonitoringPattern()
{
    return ::ecore::Ptr < MonitoringPattern > (new MonitoringPattern);
}

