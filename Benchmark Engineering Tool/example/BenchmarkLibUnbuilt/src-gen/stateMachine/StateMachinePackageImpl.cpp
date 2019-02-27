// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachinePackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <stateMachine/StateMachinePackage.hpp>
#include <stateMachine/StateMachineFactory.hpp>
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
#include <ecore/EcorePackage.hpp>

using namespace ::stateMachine;

StateMachinePackage::StateMachinePackage()
{

    // Feature definitions of StateTransition
    m_StateTransition__visibility = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_StateTransition__from = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_StateTransition__to = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of StateMachine
    m_StateMachine__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_StateMachine__elements = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of AbstractMachineElement

    // Feature definitions of AbstractStateElement
    m_AbstractStateElement__name = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of State

}

void StateMachinePackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = StateMachineFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // StateTransition
    m_StateTransitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StateTransitionEClass->setClassifierID(STATETRANSITION);
    m_StateTransitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StateTransitionEClass);
    // m_StateTransition__visibility has already been allocated above
    m_StateTransition__visibility->setFeatureID(
            ::stateMachine::StateMachinePackage::STATETRANSITION__VISIBILITY);
    m_StateTransitionEClass->getEStructuralFeatures().push_back(
            m_StateTransition__visibility);
    // m_StateTransition__from has already been allocated above
    m_StateTransition__from->setFeatureID(
            ::stateMachine::StateMachinePackage::STATETRANSITION__FROM);
    m_StateTransitionEClass->getEStructuralFeatures().push_back(
            m_StateTransition__from);
    // m_StateTransition__to has already been allocated above
    m_StateTransition__to->setFeatureID(
            ::stateMachine::StateMachinePackage::STATETRANSITION__TO);
    m_StateTransitionEClass->getEStructuralFeatures().push_back(
            m_StateTransition__to);

    // StateMachine
    m_StateMachineEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StateMachineEClass->setClassifierID(STATEMACHINE);
    m_StateMachineEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StateMachineEClass);
    // m_StateMachine__name has already been allocated above
    m_StateMachine__name->setFeatureID(
            ::stateMachine::StateMachinePackage::STATEMACHINE__NAME);
    m_StateMachineEClass->getEStructuralFeatures().push_back(
            m_StateMachine__name);
    // m_StateMachine__elements has already been allocated above
    m_StateMachine__elements->setFeatureID(
            ::stateMachine::StateMachinePackage::STATEMACHINE__ELEMENTS);
    m_StateMachineEClass->getEStructuralFeatures().push_back(
            m_StateMachine__elements);

    // AbstractMachineElement
    m_AbstractMachineElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractMachineElementEClass->setClassifierID(ABSTRACTMACHINEELEMENT);
    m_AbstractMachineElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractMachineElementEClass);

    // AbstractStateElement
    m_AbstractStateElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_AbstractStateElementEClass->setClassifierID(ABSTRACTSTATEELEMENT);
    m_AbstractStateElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_AbstractStateElementEClass);
    // m_AbstractStateElement__name has already been allocated above
    m_AbstractStateElement__name->setFeatureID(
            ::stateMachine::StateMachinePackage::ABSTRACTSTATEELEMENT__NAME);
    m_AbstractStateElementEClass->getEStructuralFeatures().push_back(
            m_AbstractStateElement__name);

    // State
    m_StateEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_StateEClass->setClassifierID(STATE);
    m_StateEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StateEClass);

    // Create enums

    m_VisibilityTypeEEnum = ::ecore::Ptr < ::ecore::EEnum
            > (new ::ecore::EEnum);
    m_VisibilityTypeEEnum->setClassifierID(VISIBILITYTYPE);
    m_VisibilityTypeEEnum->setEPackage(_this());
    getEClassifiers().push_back(m_VisibilityTypeEEnum);

    // Create data types

    // Initialize package
    setName("stateMachine");
    setNsPrefix("StateMachine");
    setNsURI("http://www.ecore.org/base/StateMachine");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_StateTransitionEClass->getESuperTypes().push_back(
            m_AbstractMachineElementEClass);
    m_AbstractStateElementEClass->getESuperTypes().push_back(
            m_AbstractMachineElementEClass);
    m_StateEClass->getESuperTypes().push_back(m_AbstractStateElementEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // StateTransition
    m_StateTransitionEClass->setName("StateTransition");
    m_StateTransitionEClass->setAbstract(false);
    m_StateTransitionEClass->setInterface(false);
    m_StateTransition__visibility->setEType(m_VisibilityTypeEEnum);
    m_StateTransition__visibility->setName("visibility");
    m_StateTransition__visibility->setDefaultValueLiteral("");
    m_StateTransition__visibility->setLowerBound(1);
    m_StateTransition__visibility->setUpperBound(1);
    m_StateTransition__visibility->setTransient(false);
    m_StateTransition__visibility->setVolatile(false);
    m_StateTransition__visibility->setChangeable(true);
    m_StateTransition__visibility->setUnsettable(false);
    m_StateTransition__visibility->setID(false);
    m_StateTransition__visibility->setUnique(true);
    m_StateTransition__visibility->setDerived(false);
    m_StateTransition__visibility->setOrdered(true);
    m_StateTransition__from->setEType(m_AbstractStateElementEClass);
    m_StateTransition__from->setName("from");
    m_StateTransition__from->setDefaultValueLiteral("");
    m_StateTransition__from->setLowerBound(1);
    m_StateTransition__from->setUpperBound(1);
    m_StateTransition__from->setTransient(false);
    m_StateTransition__from->setVolatile(false);
    m_StateTransition__from->setChangeable(true);
    m_StateTransition__from->setContainment(false);
    m_StateTransition__from->setResolveProxies(true);
    m_StateTransition__from->setUnique(true);
    m_StateTransition__from->setDerived(false);
    m_StateTransition__from->setOrdered(true);
    m_StateTransition__to->setEType(m_AbstractStateElementEClass);
    m_StateTransition__to->setName("to");
    m_StateTransition__to->setDefaultValueLiteral("");
    m_StateTransition__to->setLowerBound(1);
    m_StateTransition__to->setUpperBound(1);
    m_StateTransition__to->setTransient(false);
    m_StateTransition__to->setVolatile(false);
    m_StateTransition__to->setChangeable(true);
    m_StateTransition__to->setContainment(false);
    m_StateTransition__to->setResolveProxies(true);
    m_StateTransition__to->setUnique(true);
    m_StateTransition__to->setDerived(false);
    m_StateTransition__to->setOrdered(true);
    // StateMachine
    m_StateMachineEClass->setName("StateMachine");
    m_StateMachineEClass->setAbstract(false);
    m_StateMachineEClass->setInterface(false);
    m_StateMachine__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_StateMachine__name->setName("name");
    m_StateMachine__name->setDefaultValueLiteral("");
    m_StateMachine__name->setLowerBound(1);
    m_StateMachine__name->setUpperBound(1);
    m_StateMachine__name->setTransient(false);
    m_StateMachine__name->setVolatile(false);
    m_StateMachine__name->setChangeable(true);
    m_StateMachine__name->setUnsettable(false);
    m_StateMachine__name->setID(false);
    m_StateMachine__name->setUnique(true);
    m_StateMachine__name->setDerived(false);
    m_StateMachine__name->setOrdered(true);
    m_StateMachine__elements->setEType(m_AbstractMachineElementEClass);
    m_StateMachine__elements->setName("elements");
    m_StateMachine__elements->setDefaultValueLiteral("");
    m_StateMachine__elements->setLowerBound(0);
    m_StateMachine__elements->setUpperBound(-1);
    m_StateMachine__elements->setTransient(false);
    m_StateMachine__elements->setVolatile(false);
    m_StateMachine__elements->setChangeable(true);
    m_StateMachine__elements->setContainment(true);
    m_StateMachine__elements->setResolveProxies(true);
    m_StateMachine__elements->setUnique(true);
    m_StateMachine__elements->setDerived(false);
    m_StateMachine__elements->setOrdered(true);
    // AbstractMachineElement
    m_AbstractMachineElementEClass->setName("AbstractMachineElement");
    m_AbstractMachineElementEClass->setAbstract(true);
    m_AbstractMachineElementEClass->setInterface(false);
    // AbstractStateElement
    m_AbstractStateElementEClass->setName("AbstractStateElement");
    m_AbstractStateElementEClass->setAbstract(true);
    m_AbstractStateElementEClass->setInterface(false);
    m_AbstractStateElement__name->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_AbstractStateElement__name->setName("name");
    m_AbstractStateElement__name->setDefaultValueLiteral("");
    m_AbstractStateElement__name->setLowerBound(1);
    m_AbstractStateElement__name->setUpperBound(1);
    m_AbstractStateElement__name->setTransient(false);
    m_AbstractStateElement__name->setVolatile(false);
    m_AbstractStateElement__name->setChangeable(true);
    m_AbstractStateElement__name->setUnsettable(false);
    m_AbstractStateElement__name->setID(false);
    m_AbstractStateElement__name->setUnique(true);
    m_AbstractStateElement__name->setDerived(false);
    m_AbstractStateElement__name->setOrdered(true);
    // State
    m_StateEClass->setName("State");
    m_StateEClass->setAbstract(false);
    m_StateEClass->setInterface(false);

    // TODO: Initialize data types

    // VisibilityType
    m_VisibilityTypeEEnum->setName("VisibilityType");
    m_VisibilityTypeEEnum->setSerializable(true);

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // external
        _el->setName("external");
        _el->setValue(0);
        _el->setLiteral("external");
        _el->setEEnum(m_VisibilityTypeEEnum);
        m_VisibilityTypeEEnum->getELiterals().push_back(_el);
    }

    {
        ::ecore::EEnumLiteral_ptr _el = ::ecore::Ptr < ::ecore::EEnumLiteral
                > (new ::ecore::EEnumLiteral);
        // internal
        _el->setName("internal");
        _el->setValue(1);
        _el->setLiteral("internal");
        _el->setEEnum(m_VisibilityTypeEEnum);
        m_VisibilityTypeEEnum->getELiterals().push_back(_el);
    }

    _initialize();
}

::ecore::EClass_ptr StateMachinePackage::getStateTransition()
{
    return m_StateTransitionEClass;
}
::ecore::EClass_ptr StateMachinePackage::getStateMachine()
{
    return m_StateMachineEClass;
}
::ecore::EClass_ptr StateMachinePackage::getAbstractMachineElement()
{
    return m_AbstractMachineElementEClass;
}
::ecore::EClass_ptr StateMachinePackage::getAbstractStateElement()
{
    return m_AbstractStateElementEClass;
}
::ecore::EClass_ptr StateMachinePackage::getState()
{
    return m_StateEClass;
}
::ecore::EEnum_ptr StateMachinePackage::getVisibilityType()
{
    return m_VisibilityTypeEEnum;
}

::ecore::EReference_ptr StateMachinePackage::getStateTransition__from()
{
    return m_StateTransition__from;
}
::ecore::EReference_ptr StateMachinePackage::getStateTransition__to()
{
    return m_StateTransition__to;
}
::ecore::EAttribute_ptr StateMachinePackage::getStateTransition__visibility()
{
    return m_StateTransition__visibility;
}
::ecore::EReference_ptr StateMachinePackage::getStateMachine__elements()
{
    return m_StateMachine__elements;
}
::ecore::EAttribute_ptr StateMachinePackage::getStateMachine__name()
{
    return m_StateMachine__name;
}
::ecore::EAttribute_ptr StateMachinePackage::getAbstractStateElement__name()
{
    return m_AbstractStateElement__name;
}

