// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <coordinationPattern/CoordinationPatternPackage.hpp>
#include <coordinationPattern/CoordinationPatternFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <stateMachine/StateMachinePackage.hpp>
#include <componentMode/ComponentModePackage.hpp>
#include <parameterDefinition/ParameterDefinitionPackage.hpp>
#include <stateMachine/StateMachine.hpp>
#include <componentMode/ComponentModeCollection.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>

using namespace ::coordinationPattern;

CoordinationPatternPackage::CoordinationPatternPackage()
{

    // Feature definitions of CoordinationPattern

    // Feature definitions of StatePattern
    m_StatePattern__lifecycle = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_StatePattern__modes = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ParameterPattern
    m_ParameterPattern__parameterSet = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of DynamicWiringPattern

    // Feature definitions of MonitoringPattern

}

void CoordinationPatternPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = CoordinationPatternFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    ::ecore::EOperation_ptr _op;
    ::ecore::EParameter_ptr _pa;

    // Create classes and their features

    // CoordinationPattern
    m_CoordinationPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CoordinationPatternEClass->setClassifierID(COORDINATIONPATTERN);
    m_CoordinationPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CoordinationPatternEClass);

    // StatePattern
    m_StatePatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StatePatternEClass->setClassifierID(STATEPATTERN);
    m_StatePatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StatePatternEClass);
    // m_StatePattern__lifecycle has already been allocated above
    m_StatePattern__lifecycle->setFeatureID(
            ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__LIFECYCLE);
    m_StatePatternEClass->getEStructuralFeatures().push_back(
            m_StatePattern__lifecycle);
    // m_StatePattern__modes has already been allocated above
    m_StatePattern__modes->setFeatureID(
            ::coordinationPattern::CoordinationPatternPackage::STATEPATTERN__MODES);
    m_StatePatternEClass->getEStructuralFeatures().push_back(
            m_StatePattern__modes);

    // ParameterPattern
    m_ParameterPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ParameterPatternEClass->setClassifierID(PARAMETERPATTERN);
    m_ParameterPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ParameterPatternEClass);
    // m_ParameterPattern__parameterSet has already been allocated above
    m_ParameterPattern__parameterSet->setFeatureID(
            ::coordinationPattern::CoordinationPatternPackage::PARAMETERPATTERN__PARAMETERSET);
    m_ParameterPatternEClass->getEStructuralFeatures().push_back(
            m_ParameterPattern__parameterSet);

    // DynamicWiringPattern
    m_DynamicWiringPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DynamicWiringPatternEClass->setClassifierID(DYNAMICWIRINGPATTERN);
    m_DynamicWiringPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DynamicWiringPatternEClass);

    // MonitoringPattern
    m_MonitoringPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_MonitoringPatternEClass->setClassifierID(MONITORINGPATTERN);
    m_MonitoringPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_MonitoringPatternEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("coordinationPattern");
    setNsPrefix("CoordinationPattern");
    setNsURI("http://www.ecore.org/service/CoordinationPattern");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_StatePatternEClass->getESuperTypes().push_back(
            m_CoordinationPatternEClass);
    m_ParameterPatternEClass->getESuperTypes().push_back(
            m_CoordinationPatternEClass);
    m_DynamicWiringPatternEClass->getESuperTypes().push_back(
            m_CoordinationPatternEClass);
    m_MonitoringPatternEClass->getESuperTypes().push_back(
            m_CoordinationPatternEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // CoordinationPattern
    m_CoordinationPatternEClass->setName("CoordinationPattern");
    m_CoordinationPatternEClass->setAbstract(true);
    m_CoordinationPatternEClass->setInterface(false);
    // StatePattern
    m_StatePatternEClass->setName("StatePattern");
    m_StatePatternEClass->setAbstract(false);
    m_StatePatternEClass->setInterface(false);
    m_StatePattern__lifecycle->setEType(
            dynamic_cast< ::stateMachine::StateMachinePackage* >(::stateMachine::StateMachinePackage::_instance().get())->getStateMachine());
    m_StatePattern__lifecycle->setName("lifecycle");
    m_StatePattern__lifecycle->setDefaultValueLiteral("");
    m_StatePattern__lifecycle->setLowerBound(1);
    m_StatePattern__lifecycle->setUpperBound(1);
    m_StatePattern__lifecycle->setTransient(false);
    m_StatePattern__lifecycle->setVolatile(false);
    m_StatePattern__lifecycle->setChangeable(true);
    m_StatePattern__lifecycle->setContainment(false);
    m_StatePattern__lifecycle->setResolveProxies(true);
    m_StatePattern__lifecycle->setUnique(true);
    m_StatePattern__lifecycle->setDerived(false);
    m_StatePattern__lifecycle->setOrdered(true);
    m_StatePattern__modes->setEType(
            dynamic_cast< ::componentMode::ComponentModePackage* >(::componentMode::ComponentModePackage::_instance().get())->getComponentModeCollection());
    m_StatePattern__modes->setName("modes");
    m_StatePattern__modes->setDefaultValueLiteral("");
    m_StatePattern__modes->setLowerBound(0);
    m_StatePattern__modes->setUpperBound(1);
    m_StatePattern__modes->setTransient(false);
    m_StatePattern__modes->setVolatile(false);
    m_StatePattern__modes->setChangeable(true);
    m_StatePattern__modes->setContainment(false);
    m_StatePattern__modes->setResolveProxies(true);
    m_StatePattern__modes->setUnique(true);
    m_StatePattern__modes->setDerived(false);
    m_StatePattern__modes->setOrdered(true);
    // ParameterPattern
    m_ParameterPatternEClass->setName("ParameterPattern");
    m_ParameterPatternEClass->setAbstract(false);
    m_ParameterPatternEClass->setInterface(false);
    m_ParameterPattern__parameterSet->setEType(
            dynamic_cast< ::parameterDefinition::ParameterDefinitionPackage* >(::parameterDefinition::ParameterDefinitionPackage::_instance().get())->getParameterSetDefinition());
    m_ParameterPattern__parameterSet->setName("parameterSet");
    m_ParameterPattern__parameterSet->setDefaultValueLiteral("");
    m_ParameterPattern__parameterSet->setLowerBound(1);
    m_ParameterPattern__parameterSet->setUpperBound(1);
    m_ParameterPattern__parameterSet->setTransient(false);
    m_ParameterPattern__parameterSet->setVolatile(false);
    m_ParameterPattern__parameterSet->setChangeable(true);
    m_ParameterPattern__parameterSet->setContainment(false);
    m_ParameterPattern__parameterSet->setResolveProxies(true);
    m_ParameterPattern__parameterSet->setUnique(true);
    m_ParameterPattern__parameterSet->setDerived(false);
    m_ParameterPattern__parameterSet->setOrdered(true);
    // DynamicWiringPattern
    m_DynamicWiringPatternEClass->setName("DynamicWiringPattern");
    m_DynamicWiringPatternEClass->setAbstract(false);
    m_DynamicWiringPatternEClass->setInterface(false);
    _op = ::ecore::Ptr < ::ecore::EOperation > (new ::ecore::EOperation);
    _op->setName("connect");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("sourceComponent");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("sourcePort");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("targetComponent");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("targetPort");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_DynamicWiringPatternEClass->getEOperations().push_back(_op);
    _op = ::ecore::Ptr < ::ecore::EOperation > (new ::ecore::EOperation);
    _op->setName("disconnect");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("sourceComponent");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    _pa->setName("sourcePort");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_DynamicWiringPatternEClass->getEOperations().push_back(_op);
    // MonitoringPattern
    m_MonitoringPatternEClass->setName("MonitoringPattern");
    m_MonitoringPatternEClass->setAbstract(false);
    m_MonitoringPatternEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr CoordinationPatternPackage::getCoordinationPattern()
{
    return m_CoordinationPatternEClass;
}
::ecore::EClass_ptr CoordinationPatternPackage::getStatePattern()
{
    return m_StatePatternEClass;
}
::ecore::EClass_ptr CoordinationPatternPackage::getParameterPattern()
{
    return m_ParameterPatternEClass;
}
::ecore::EClass_ptr CoordinationPatternPackage::getDynamicWiringPattern()
{
    return m_DynamicWiringPatternEClass;
}
::ecore::EClass_ptr CoordinationPatternPackage::getMonitoringPattern()
{
    return m_MonitoringPatternEClass;
}

::ecore::EReference_ptr CoordinationPatternPackage::getStatePattern__lifecycle()
{
    return m_StatePattern__lifecycle;
}
::ecore::EReference_ptr CoordinationPatternPackage::getStatePattern__modes()
{
    return m_StatePattern__modes;
}
::ecore::EReference_ptr CoordinationPatternPackage::getParameterPattern__parameterSet()
{
    return m_ParameterPattern__parameterSet;
}

