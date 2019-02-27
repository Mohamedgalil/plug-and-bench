// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STANDARDIZED_PROBLEMPACKAGE_HPP
#define _STANDARDIZED_PROBLEMPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <standardized_problem_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <basicAttributes/BasicAttributesPackage.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL Standardized_problemPackage : public virtual ::ecore::EPackage
{
public:

    static Standardized_problemPackage_ptr _instance();
    static Standardized_problemPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int BENCHMARKATTRIBUTEDEFINITION = 0;

    static const int BENCHMARKCONSTRAINT = 1;

    static const int BENCHMARKCONSTRAINTDEFINITION = 2;

    static const int DESCRIPTOROBJECT = 3;

    static const int ENVIRONMENTVARIABLE = 4;

    static const int ENVIRONMENTVARIABLEDEFINITION = 5;

    static const int ISCORE = 6;

    static const int ISCOREELEMENT = 7;

    static const int PERFORMANCEMEASURE = 8;

    static const int SCENARIODEF = 9;

    static const int STANDARDIZEDPROBLEM = 10;

    static const int TUPLE = 11;

    static const int WEIGHTEDPERFMEASURE = 12;

    static const int STANDARDIZEDPROBLEM__SCENARIODEFINITION = 0;

    static const int STANDARDIZEDPROBLEM__PERFORMANCECRITERIA = 1;

    static const int STANDARDIZEDPROBLEM__COMMSERVICEDEF = 2;

    static const int STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION = 3;

    static const int STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION = 4;

    static const int SCENARIODEF__COMMSERVDEF = 5;

    static const int SCENARIODEF__WEIGHT = 6;

    static const int SCENARIODEF__TUPLE = 7;

    static const int SCENARIODEF__PERFORMANCEMEASURES = 8;

    static const int SCENARIODEF__BENCHMARKCONSTRAINT = 9;

    static const int PERFORMANCEMEASURE__METRIC = 10;

    static const int DESCRIPTOROBJECT__LABEL = 11;

    static const int DESCRIPTOROBJECT__DESCRIPTION = 12;

    static const int ISCOREELEMENT__SCORE = 13;

    static const int TUPLE__SCENARIODEF = 14;

    static const int TUPLE__COMMSERVICEDEF = 15;

    static const int TUPLE__WEIGHT = 16;

    static const int TUPLE__COMMOBJECT = 17;

    static const int TUPLE__WEIGHTEDPERFMEASURE = 18;

    static const int TUPLE__ENVIRONMENTVARIABLE = 19;

    static const int WEIGHTEDPERFMEASURE__WEIGHT = 20;

    static const int WEIGHTEDPERFMEASURE__PERFMEASURE = 21;

    static const int ENVIRONMENTVARIABLE__VALUE = 22;

    static const int ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION = 23;

    static const int BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION = 24;

    static const int BENCHMARKCONSTRAINT__VALUE = 25;

    static const int BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION = 26;

    // IDs for classifiers for class BenchmarkAttributeDefinition 

    static const int BENCHMARKATTRIBUTEDEFINITION__NAME = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME;

    static const int BENCHMARKATTRIBUTEDEFINITION__TYPE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE;

    static const int BENCHMARKATTRIBUTEDEFINITION__DEFAULTVALUE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE;

    // IDs for classifiers for class BenchmarkConstraint 

    // IDs for classifiers for class BenchmarkConstraintDefinition 

    static const int BENCHMARKCONSTRAINTDEFINITION__NAME = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME;

    static const int BENCHMARKCONSTRAINTDEFINITION__TYPE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE;

    static const int BENCHMARKCONSTRAINTDEFINITION__DEFAULTVALUE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE;

    static const int BENCHMARKCONSTRAINTDEFINITION__DESCRIPTION = BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION;

    // IDs for classifiers for class DescriptorObject 

    // IDs for classifiers for class EnvironmentVariable 

    // IDs for classifiers for class EnvironmentVariableDefinition 

    static const int ENVIRONMENTVARIABLEDEFINITION__NAME = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__NAME;

    static const int ENVIRONMENTVARIABLEDEFINITION__TYPE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__TYPE;

    static const int ENVIRONMENTVARIABLEDEFINITION__DEFAULTVALUE = ::basicAttributes::BasicAttributesPackage::ATTRIBUTEDEFINITION__DEFAULTVALUE;

    static const int ENVIRONMENTVARIABLEDEFINITION__DESCRIPTION = BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION;

    // IDs for classifiers for class IScore 

    // IDs for classifiers for class IScoreElement 

    // IDs for classifiers for class PerformanceMeasure 

    static const int PERFORMANCEMEASURE__LABEL = DESCRIPTOROBJECT__LABEL;

    static const int PERFORMANCEMEASURE__DESCRIPTION = DESCRIPTOROBJECT__DESCRIPTION;

    // IDs for classifiers for class ScenarioDef 

    static const int SCENARIODEF__LABEL = DESCRIPTOROBJECT__LABEL;

    static const int SCENARIODEF__DESCRIPTION = DESCRIPTOROBJECT__DESCRIPTION;

    static const int SCENARIODEF__SCORE = ISCOREELEMENT__SCORE;

    // IDs for classifiers for class StandardizedProblem 

    static const int STANDARDIZEDPROBLEM__LABEL = DESCRIPTOROBJECT__LABEL;

    static const int STANDARDIZEDPROBLEM__DESCRIPTION = DESCRIPTOROBJECT__DESCRIPTION;

    static const int STANDARDIZEDPROBLEM__SCORE = ISCOREELEMENT__SCORE;

    // IDs for classifiers for class Tuple 

    static const int TUPLE__LABEL = DESCRIPTOROBJECT__LABEL;

    static const int TUPLE__DESCRIPTION = DESCRIPTOROBJECT__DESCRIPTION;

    // IDs for classifiers for class WeightedPerfMeasure 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getStandardizedProblem();

    virtual ::ecore::EClass_ptr getScenarioDef();

    virtual ::ecore::EClass_ptr getPerformanceMeasure();

    virtual ::ecore::EClass_ptr getDescriptorObject();

    virtual ::ecore::EClass_ptr getEnvironmentVariableDefinition();

    virtual ::ecore::EClass_ptr getIScoreElement();

    virtual ::ecore::EClass_ptr getIScore();

    virtual ::ecore::EClass_ptr getTuple();

    virtual ::ecore::EClass_ptr getWeightedPerfMeasure();

    virtual ::ecore::EClass_ptr getEnvironmentVariable();

    virtual ::ecore::EClass_ptr getBenchmarkConstraint();

    virtual ::ecore::EClass_ptr getBenchmarkConstraintDefinition();

    virtual ::ecore::EClass_ptr getBenchmarkAttributeDefinition();

    // EStructuralFeatures methods

    virtual ::ecore::EAttribute_ptr getDescriptorObject__label();

    virtual ::ecore::EAttribute_ptr getDescriptorObject__description();

    virtual ::ecore::EAttribute_ptr getIScoreElement__score();

    virtual ::ecore::EReference_ptr getStandardizedProblem__scenarioDefinition();

    virtual ::ecore::EReference_ptr getStandardizedProblem__performanceCriteria();

    virtual ::ecore::EReference_ptr getStandardizedProblem__commServiceDef();

    virtual ::ecore::EReference_ptr getStandardizedProblem__environmentVariableDefinition();

    virtual ::ecore::EReference_ptr getStandardizedProblem__benchmarkConstraintDefinition();

    virtual ::ecore::EReference_ptr getScenarioDef__commServDef();

    virtual ::ecore::EAttribute_ptr getScenarioDef__weight();

    virtual ::ecore::EReference_ptr getScenarioDef__tuple();

    virtual ::ecore::EReference_ptr getScenarioDef__performanceMeasures();

    virtual ::ecore::EReference_ptr getScenarioDef__benchmarkconstraint();

    virtual ::ecore::EAttribute_ptr getPerformanceMeasure__metric();

    virtual ::ecore::EAttribute_ptr getAttributeDefinition__name();

    virtual ::ecore::EReference_ptr getAttributeDefinition__type();

    virtual ::ecore::EReference_ptr getAttributeDefinition__defaultvalue();

    virtual ::ecore::EAttribute_ptr getBenchmarkAttributeDefinition__description();

    virtual ::ecore::EReference_ptr getTuple__scenarioDef();

    virtual ::ecore::EReference_ptr getTuple__commServiceDef();

    virtual ::ecore::EAttribute_ptr getTuple__weight();

    virtual ::ecore::EReference_ptr getTuple__commObject();

    virtual ::ecore::EReference_ptr getTuple__weightedperfmeasure();

    virtual ::ecore::EReference_ptr getTuple__environmentVariable();

    virtual ::ecore::EAttribute_ptr getWeightedPerfMeasure__weight();

    virtual ::ecore::EReference_ptr getWeightedPerfMeasure__perfMeasure();

    virtual ::ecore::EReference_ptr getEnvironmentVariable__value();

    virtual ::ecore::EReference_ptr getEnvironmentVariable__environmentVariableDefinition();

    virtual ::ecore::EReference_ptr getBenchmarkConstraint__benchmarkConstraintDefinition();

    virtual ::ecore::EReference_ptr getBenchmarkConstraint__value();

protected:

    static ::ecore::Ptr< Standardized_problemPackage > s_instance;

    Standardized_problemPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_StandardizedProblemEClass;

    ::ecore::EClass_ptr m_ScenarioDefEClass;

    ::ecore::EClass_ptr m_PerformanceMeasureEClass;

    ::ecore::EClass_ptr m_DescriptorObjectEClass;

    ::ecore::EClass_ptr m_EnvironmentVariableDefinitionEClass;

    ::ecore::EClass_ptr m_IScoreElementEClass;

    ::ecore::EClass_ptr m_IScoreEClass;

    ::ecore::EClass_ptr m_TupleEClass;

    ::ecore::EClass_ptr m_WeightedPerfMeasureEClass;

    ::ecore::EClass_ptr m_EnvironmentVariableEClass;

    ::ecore::EClass_ptr m_BenchmarkConstraintEClass;

    ::ecore::EClass_ptr m_BenchmarkConstraintDefinitionEClass;

    ::ecore::EClass_ptr m_BenchmarkAttributeDefinitionEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EAttribute_ptr m_DescriptorObject__label;

    ::ecore::EAttribute_ptr m_DescriptorObject__description;

    ::ecore::EAttribute_ptr m_IScoreElement__score;

    ::ecore::EReference_ptr m_StandardizedProblem__scenarioDefinition;

    ::ecore::EReference_ptr m_StandardizedProblem__performanceCriteria;

    ::ecore::EReference_ptr m_StandardizedProblem__commServiceDef;

    ::ecore::EReference_ptr m_StandardizedProblem__environmentVariableDefinition;

    ::ecore::EReference_ptr m_StandardizedProblem__benchmarkConstraintDefinition;

    ::ecore::EReference_ptr m_ScenarioDef__commServDef;

    ::ecore::EAttribute_ptr m_ScenarioDef__weight;

    ::ecore::EReference_ptr m_ScenarioDef__tuple;

    ::ecore::EReference_ptr m_ScenarioDef__performanceMeasures;

    ::ecore::EReference_ptr m_ScenarioDef__benchmarkconstraint;

    ::ecore::EAttribute_ptr m_PerformanceMeasure__metric;

    ::ecore::EAttribute_ptr m_AttributeDefinition__name;

    ::ecore::EReference_ptr m_AttributeDefinition__type;

    ::ecore::EReference_ptr m_AttributeDefinition__defaultvalue;

    ::ecore::EAttribute_ptr m_BenchmarkAttributeDefinition__description;

    ::ecore::EReference_ptr m_Tuple__scenarioDef;

    ::ecore::EReference_ptr m_Tuple__commServiceDef;

    ::ecore::EAttribute_ptr m_Tuple__weight;

    ::ecore::EReference_ptr m_Tuple__commObject;

    ::ecore::EReference_ptr m_Tuple__weightedperfmeasure;

    ::ecore::EReference_ptr m_Tuple__environmentVariable;

    ::ecore::EAttribute_ptr m_WeightedPerfMeasure__weight;

    ::ecore::EReference_ptr m_WeightedPerfMeasure__perfMeasure;

    ::ecore::EReference_ptr m_EnvironmentVariable__value;

    ::ecore::EReference_ptr m_EnvironmentVariable__environmentVariableDefinition;

    ::ecore::EReference_ptr m_BenchmarkConstraint__benchmarkConstraintDefinition;

    ::ecore::EReference_ptr m_BenchmarkConstraint__value;

};

}
 // standardized_problem

#endif // _STANDARDIZED_PROBLEMPACKAGE_HPP

