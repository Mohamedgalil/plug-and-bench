// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachinePackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STATEMACHINEPACKAGE_HPP
#define _STATEMACHINEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <stateMachine_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <stateMachine/dllStateMachine.hpp>

namespace stateMachine
{

class EXPORT_STATEMACHINE_DLL StateMachinePackage : public virtual ::ecore::EPackage
{
public:

    static StateMachinePackage_ptr _instance();
    static StateMachinePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTMACHINEELEMENT = 0;

    static const int ABSTRACTSTATEELEMENT = 1;

    static const int STATE = 2;

    static const int STATEMACHINE = 3;

    static const int STATETRANSITION = 4;

    static const int VISIBILITYTYPE = 5;

    static const int STATETRANSITION__FROM = 0;

    static const int STATETRANSITION__TO = 1;

    static const int STATETRANSITION__VISIBILITY = 2;

    static const int STATEMACHINE__ELEMENTS = 3;

    static const int STATEMACHINE__NAME = 4;

    static const int ABSTRACTSTATEELEMENT__NAME = 5;

    // IDs for classifiers for class AbstractMachineElement 

    // IDs for classifiers for class AbstractStateElement 

    // IDs for classifiers for class State 

    static const int STATE__NAME = ABSTRACTSTATEELEMENT__NAME;

    // IDs for classifiers for class StateMachine 

    // IDs for classifiers for class StateTransition 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getStateTransition();

    virtual ::ecore::EClass_ptr getStateMachine();

    virtual ::ecore::EClass_ptr getAbstractMachineElement();

    virtual ::ecore::EClass_ptr getAbstractStateElement();

    virtual ::ecore::EClass_ptr getState();

    virtual ::ecore::EEnum_ptr getVisibilityType();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getStateTransition__from();

    virtual ::ecore::EReference_ptr getStateTransition__to();

    virtual ::ecore::EAttribute_ptr getStateTransition__visibility();

    virtual ::ecore::EReference_ptr getStateMachine__elements();

    virtual ::ecore::EAttribute_ptr getStateMachine__name();

    virtual ::ecore::EAttribute_ptr getAbstractStateElement__name();

protected:

    static ::ecore::Ptr< StateMachinePackage > s_instance;

    StateMachinePackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_StateTransitionEClass;

    ::ecore::EClass_ptr m_StateMachineEClass;

    ::ecore::EClass_ptr m_AbstractMachineElementEClass;

    ::ecore::EClass_ptr m_AbstractStateElementEClass;

    ::ecore::EClass_ptr m_StateEClass;

    // EEnuminstances 

    ::ecore::EEnum_ptr m_VisibilityTypeEEnum;

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_StateTransition__from;

    ::ecore::EReference_ptr m_StateTransition__to;

    ::ecore::EAttribute_ptr m_StateTransition__visibility;

    ::ecore::EReference_ptr m_StateMachine__elements;

    ::ecore::EAttribute_ptr m_StateMachine__name;

    ::ecore::EAttribute_ptr m_AbstractStateElement__name;

};

}
 // stateMachine

#endif // _STATEMACHINEPACKAGE_HPP

