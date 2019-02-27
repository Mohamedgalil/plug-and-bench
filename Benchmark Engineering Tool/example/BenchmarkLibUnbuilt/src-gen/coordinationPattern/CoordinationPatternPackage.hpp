// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COORDINATIONPATTERNPACKAGE_HPP
#define _COORDINATIONPATTERNPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <coordinationPattern_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>

namespace coordinationPattern
{

class EXPORT_COORDINATIONPATTERN_DLL CoordinationPatternPackage : public virtual ::ecore::EPackage
{
public:

    static CoordinationPatternPackage_ptr _instance();
    static CoordinationPatternPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int COORDINATIONPATTERN = 0;

    static const int DYNAMICWIRINGPATTERN = 1;

    static const int MONITORINGPATTERN = 2;

    static const int PARAMETERPATTERN = 3;

    static const int STATEPATTERN = 4;

    static const int STATEPATTERN__LIFECYCLE = 0;

    static const int STATEPATTERN__MODES = 1;

    static const int PARAMETERPATTERN__PARAMETERSET = 2;

    // IDs for classifiers for class CoordinationPattern 

    // IDs for classifiers for class DynamicWiringPattern 

    // IDs for classifiers for class MonitoringPattern 

    // IDs for classifiers for class ParameterPattern 

    // IDs for classifiers for class StatePattern 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getCoordinationPattern();

    virtual ::ecore::EClass_ptr getStatePattern();

    virtual ::ecore::EClass_ptr getParameterPattern();

    virtual ::ecore::EClass_ptr getDynamicWiringPattern();

    virtual ::ecore::EClass_ptr getMonitoringPattern();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getStatePattern__lifecycle();

    virtual ::ecore::EReference_ptr getStatePattern__modes();

    virtual ::ecore::EReference_ptr getParameterPattern__parameterSet();

protected:

    static ::ecore::Ptr< CoordinationPatternPackage > s_instance;

    CoordinationPatternPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_CoordinationPatternEClass;

    ::ecore::EClass_ptr m_StatePatternEClass;

    ::ecore::EClass_ptr m_ParameterPatternEClass;

    ::ecore::EClass_ptr m_DynamicWiringPatternEClass;

    ::ecore::EClass_ptr m_MonitoringPatternEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_StatePattern__lifecycle;

    ::ecore::EReference_ptr m_StatePattern__modes;

    ::ecore::EReference_ptr m_ParameterPattern__parameterSet;

};

}
 // coordinationPattern

#endif // _COORDINATIONPATTERNPACKAGE_HPP

