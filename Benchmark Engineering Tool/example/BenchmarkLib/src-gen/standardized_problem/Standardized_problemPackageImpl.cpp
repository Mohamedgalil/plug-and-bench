// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <standardized_problem/Standardized_problemPackage.hpp>
#include <standardized_problem/Standardized_problemFactory.hpp>
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
#include <serviceDefinition/ServiceDefinitionPackage.hpp>
#include <basicAttributes/BasicAttributesPackage.hpp>
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/AbstractValue.hpp>
#include <communicationObject/CommunicationObject.hpp>

using namespace ::standardized_problem;

Standardized_problemPackage::Standardized_problemPackage()
{

    // Feature definitions of StandardizedProblem
    m_StandardizedProblem__scenarioDefinition = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_StandardizedProblem__performanceCriteria = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_StandardizedProblem__commServiceDef = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_StandardizedProblem__environmentVariableDefinition = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_StandardizedProblem__benchmarkConstraintDefinition = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of ScenarioDef
    m_ScenarioDef__weight = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_ScenarioDef__commServDef = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ScenarioDef__tuple = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ScenarioDef__performanceMeasures = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_ScenarioDef__benchmarkconstraint = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of PerformanceMeasure
    m_PerformanceMeasure__metric = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of DescriptorObject
    m_DescriptorObject__label = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_DescriptorObject__description = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of EnvironmentVariableDefinition

    // Feature definitions of IScoreElement
    m_IScoreElement__score = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);

    // Feature definitions of IScore

    // Feature definitions of Tuple
    m_Tuple__weight = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_Tuple__scenarioDef = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Tuple__commServiceDef = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Tuple__commObject = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Tuple__weightedperfmeasure = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_Tuple__environmentVariable = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of WeightedPerfMeasure
    m_WeightedPerfMeasure__weight = ::ecore::Ptr < ::ecore::EAttribute
            > (new ::ecore::EAttribute);
    m_WeightedPerfMeasure__perfMeasure = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EnvironmentVariable
    m_EnvironmentVariable__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EnvironmentVariable__environmentVariableDefinition = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);

    // Feature definitions of BenchmarkConstraint
    m_BenchmarkConstraint__benchmarkConstraintDefinition = ::ecore::Ptr
            < ::ecore::EReference > (new ::ecore::EReference);
    m_BenchmarkConstraint__value = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of BenchmarkConstraintDefinition

    // Feature definitions of BenchmarkAttributeDefinition
    m_BenchmarkAttributeDefinition__description = ::ecore::Ptr
            < ::ecore::EAttribute > (new ::ecore::EAttribute);

}

void Standardized_problemPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = Standardized_problemFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    ::ecore::EOperation_ptr _op;
    ::ecore::EParameter_ptr _pa;

    // Create classes and their features

    // StandardizedProblem
    m_StandardizedProblemEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_StandardizedProblemEClass->setClassifierID(STANDARDIZEDPROBLEM);
    m_StandardizedProblemEClass->setEPackage(_this());
    getEClassifiers().push_back(m_StandardizedProblemEClass);
    // m_StandardizedProblem__scenarioDefinition has already been allocated above
    m_StandardizedProblem__scenarioDefinition->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__SCENARIODEFINITION);
    m_StandardizedProblemEClass->getEStructuralFeatures().push_back(
            m_StandardizedProblem__scenarioDefinition);
    // m_StandardizedProblem__performanceCriteria has already been allocated above
    m_StandardizedProblem__performanceCriteria->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__PERFORMANCECRITERIA);
    m_StandardizedProblemEClass->getEStructuralFeatures().push_back(
            m_StandardizedProblem__performanceCriteria);
    // m_StandardizedProblem__commServiceDef has already been allocated above
    m_StandardizedProblem__commServiceDef->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__COMMSERVICEDEF);
    m_StandardizedProblemEClass->getEStructuralFeatures().push_back(
            m_StandardizedProblem__commServiceDef);
    // m_StandardizedProblem__environmentVariableDefinition has already been allocated above
    m_StandardizedProblem__environmentVariableDefinition->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__ENVIRONMENTVARIABLEDEFINITION);
    m_StandardizedProblemEClass->getEStructuralFeatures().push_back(
            m_StandardizedProblem__environmentVariableDefinition);
    // m_StandardizedProblem__benchmarkConstraintDefinition has already been allocated above
    m_StandardizedProblem__benchmarkConstraintDefinition->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::STANDARDIZEDPROBLEM__BENCHMARKCONSTRAINTDEFINITION);
    m_StandardizedProblemEClass->getEStructuralFeatures().push_back(
            m_StandardizedProblem__benchmarkConstraintDefinition);

    // ScenarioDef
    m_ScenarioDefEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ScenarioDefEClass->setClassifierID(SCENARIODEF);
    m_ScenarioDefEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ScenarioDefEClass);
    // m_ScenarioDef__weight has already been allocated above
    m_ScenarioDef__weight->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::SCENARIODEF__WEIGHT);
    m_ScenarioDefEClass->getEStructuralFeatures().push_back(
            m_ScenarioDef__weight);
    // m_ScenarioDef__commServDef has already been allocated above
    m_ScenarioDef__commServDef->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::SCENARIODEF__COMMSERVDEF);
    m_ScenarioDefEClass->getEStructuralFeatures().push_back(
            m_ScenarioDef__commServDef);
    // m_ScenarioDef__tuple has already been allocated above
    m_ScenarioDef__tuple->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::SCENARIODEF__TUPLE);
    m_ScenarioDefEClass->getEStructuralFeatures().push_back(
            m_ScenarioDef__tuple);
    // m_ScenarioDef__performanceMeasures has already been allocated above
    m_ScenarioDef__performanceMeasures->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::SCENARIODEF__PERFORMANCEMEASURES);
    m_ScenarioDefEClass->getEStructuralFeatures().push_back(
            m_ScenarioDef__performanceMeasures);
    // m_ScenarioDef__benchmarkconstraint has already been allocated above
    m_ScenarioDef__benchmarkconstraint->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::SCENARIODEF__BENCHMARKCONSTRAINT);
    m_ScenarioDefEClass->getEStructuralFeatures().push_back(
            m_ScenarioDef__benchmarkconstraint);

    // PerformanceMeasure
    m_PerformanceMeasureEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PerformanceMeasureEClass->setClassifierID(PERFORMANCEMEASURE);
    m_PerformanceMeasureEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PerformanceMeasureEClass);
    // m_PerformanceMeasure__metric has already been allocated above
    m_PerformanceMeasure__metric->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::PERFORMANCEMEASURE__METRIC);
    m_PerformanceMeasureEClass->getEStructuralFeatures().push_back(
            m_PerformanceMeasure__metric);

    // DescriptorObject
    m_DescriptorObjectEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_DescriptorObjectEClass->setClassifierID(DESCRIPTOROBJECT);
    m_DescriptorObjectEClass->setEPackage(_this());
    getEClassifiers().push_back(m_DescriptorObjectEClass);
    // m_DescriptorObject__label has already been allocated above
    m_DescriptorObject__label->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__LABEL);
    m_DescriptorObjectEClass->getEStructuralFeatures().push_back(
            m_DescriptorObject__label);
    // m_DescriptorObject__description has already been allocated above
    m_DescriptorObject__description->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::DESCRIPTOROBJECT__DESCRIPTION);
    m_DescriptorObjectEClass->getEStructuralFeatures().push_back(
            m_DescriptorObject__description);

    // EnvironmentVariableDefinition
    m_EnvironmentVariableDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EnvironmentVariableDefinitionEClass->setClassifierID(
            ENVIRONMENTVARIABLEDEFINITION);
    m_EnvironmentVariableDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EnvironmentVariableDefinitionEClass);

    // IScoreElement
    m_IScoreElementEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_IScoreElementEClass->setClassifierID(ISCOREELEMENT);
    m_IScoreElementEClass->setEPackage(_this());
    getEClassifiers().push_back(m_IScoreElementEClass);
    // m_IScoreElement__score has already been allocated above
    m_IScoreElement__score->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::ISCOREELEMENT__SCORE);
    m_IScoreElementEClass->getEStructuralFeatures().push_back(
            m_IScoreElement__score);

    // IScore
    m_IScoreEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_IScoreEClass->setClassifierID(ISCORE);
    m_IScoreEClass->setEPackage(_this());
    getEClassifiers().push_back(m_IScoreEClass);

    // Tuple
    m_TupleEClass = ::ecore::Ptr < ::ecore::EClass > (new ::ecore::EClass);
    m_TupleEClass->setClassifierID(TUPLE);
    m_TupleEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TupleEClass);
    // m_Tuple__weight has already been allocated above
    m_Tuple__weight->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHT);
    m_TupleEClass->getEStructuralFeatures().push_back(m_Tuple__weight);
    // m_Tuple__scenarioDef has already been allocated above
    m_Tuple__scenarioDef->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__SCENARIODEF);
    m_TupleEClass->getEStructuralFeatures().push_back(m_Tuple__scenarioDef);
    // m_Tuple__commServiceDef has already been allocated above
    m_Tuple__commServiceDef->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__COMMSERVICEDEF);
    m_TupleEClass->getEStructuralFeatures().push_back(m_Tuple__commServiceDef);
    // m_Tuple__commObject has already been allocated above
    m_Tuple__commObject->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__COMMOBJECT);
    m_TupleEClass->getEStructuralFeatures().push_back(m_Tuple__commObject);
    // m_Tuple__weightedperfmeasure has already been allocated above
    m_Tuple__weightedperfmeasure->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__WEIGHTEDPERFMEASURE);
    m_TupleEClass->getEStructuralFeatures().push_back(
            m_Tuple__weightedperfmeasure);
    // m_Tuple__environmentVariable has already been allocated above
    m_Tuple__environmentVariable->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::TUPLE__ENVIRONMENTVARIABLE);
    m_TupleEClass->getEStructuralFeatures().push_back(
            m_Tuple__environmentVariable);

    // WeightedPerfMeasure
    m_WeightedPerfMeasureEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_WeightedPerfMeasureEClass->setClassifierID(WEIGHTEDPERFMEASURE);
    m_WeightedPerfMeasureEClass->setEPackage(_this());
    getEClassifiers().push_back(m_WeightedPerfMeasureEClass);
    // m_WeightedPerfMeasure__weight has already been allocated above
    m_WeightedPerfMeasure__weight->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__WEIGHT);
    m_WeightedPerfMeasureEClass->getEStructuralFeatures().push_back(
            m_WeightedPerfMeasure__weight);
    // m_WeightedPerfMeasure__perfMeasure has already been allocated above
    m_WeightedPerfMeasure__perfMeasure->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::WEIGHTEDPERFMEASURE__PERFMEASURE);
    m_WeightedPerfMeasureEClass->getEStructuralFeatures().push_back(
            m_WeightedPerfMeasure__perfMeasure);

    // EnvironmentVariable
    m_EnvironmentVariableEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EnvironmentVariableEClass->setClassifierID(ENVIRONMENTVARIABLE);
    m_EnvironmentVariableEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EnvironmentVariableEClass);
    // m_EnvironmentVariable__value has already been allocated above
    m_EnvironmentVariable__value->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__VALUE);
    m_EnvironmentVariableEClass->getEStructuralFeatures().push_back(
            m_EnvironmentVariable__value);
    // m_EnvironmentVariable__environmentVariableDefinition has already been allocated above
    m_EnvironmentVariable__environmentVariableDefinition->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::ENVIRONMENTVARIABLE__ENVIRONMENTVARIABLEDEFINITION);
    m_EnvironmentVariableEClass->getEStructuralFeatures().push_back(
            m_EnvironmentVariable__environmentVariableDefinition);

    // BenchmarkConstraint
    m_BenchmarkConstraintEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BenchmarkConstraintEClass->setClassifierID(BENCHMARKCONSTRAINT);
    m_BenchmarkConstraintEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BenchmarkConstraintEClass);
    // m_BenchmarkConstraint__benchmarkConstraintDefinition has already been allocated above
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__BENCHMARKCONSTRAINTDEFINITION);
    m_BenchmarkConstraintEClass->getEStructuralFeatures().push_back(
            m_BenchmarkConstraint__benchmarkConstraintDefinition);
    // m_BenchmarkConstraint__value has already been allocated above
    m_BenchmarkConstraint__value->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::BENCHMARKCONSTRAINT__VALUE);
    m_BenchmarkConstraintEClass->getEStructuralFeatures().push_back(
            m_BenchmarkConstraint__value);

    // BenchmarkConstraintDefinition
    m_BenchmarkConstraintDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BenchmarkConstraintDefinitionEClass->setClassifierID(
            BENCHMARKCONSTRAINTDEFINITION);
    m_BenchmarkConstraintDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BenchmarkConstraintDefinitionEClass);

    // BenchmarkAttributeDefinition
    m_BenchmarkAttributeDefinitionEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_BenchmarkAttributeDefinitionEClass->setClassifierID(
            BENCHMARKATTRIBUTEDEFINITION);
    m_BenchmarkAttributeDefinitionEClass->setEPackage(_this());
    getEClassifiers().push_back(m_BenchmarkAttributeDefinitionEClass);
    // m_BenchmarkAttributeDefinition__description has already been allocated above
    m_BenchmarkAttributeDefinition__description->setFeatureID(
            ::standardized_problem::Standardized_problemPackage::BENCHMARKATTRIBUTEDEFINITION__DESCRIPTION);
    m_BenchmarkAttributeDefinitionEClass->getEStructuralFeatures().push_back(
            m_BenchmarkAttributeDefinition__description);

    // Create enums

    // Create data types

    // Initialize package
    setName("standardized_problem");
    setNsPrefix("standardized_problem");
    setNsURI("http://www.ipa.frauhofer.de/standardized_problem");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_StandardizedProblemEClass->getESuperTypes().push_back(
            m_DescriptorObjectEClass);
    m_StandardizedProblemEClass->getESuperTypes().push_back(
            m_IScoreElementEClass);
    m_StandardizedProblemEClass->getESuperTypes().push_back(m_IScoreEClass);
    m_ScenarioDefEClass->getESuperTypes().push_back(m_DescriptorObjectEClass);
    m_ScenarioDefEClass->getESuperTypes().push_back(m_IScoreElementEClass);
    m_ScenarioDefEClass->getESuperTypes().push_back(m_IScoreEClass);
    m_PerformanceMeasureEClass->getESuperTypes().push_back(
            m_DescriptorObjectEClass);
    m_EnvironmentVariableDefinitionEClass->getESuperTypes().push_back(
            m_BenchmarkAttributeDefinitionEClass);
    m_TupleEClass->getESuperTypes().push_back(m_DescriptorObjectEClass);
    m_BenchmarkConstraintDefinitionEClass->getESuperTypes().push_back(
            m_BenchmarkAttributeDefinitionEClass);
    m_BenchmarkAttributeDefinitionEClass->getESuperTypes().push_back(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAttributeDefinition());

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // StandardizedProblem
    m_StandardizedProblemEClass->setName("StandardizedProblem");
    m_StandardizedProblemEClass->setAbstract(false);
    m_StandardizedProblemEClass->setInterface(false);
    m_StandardizedProblem__scenarioDefinition->setEType(m_ScenarioDefEClass);
    m_StandardizedProblem__scenarioDefinition->setName("scenarioDefinition");
    m_StandardizedProblem__scenarioDefinition->setDefaultValueLiteral("");
    m_StandardizedProblem__scenarioDefinition->setLowerBound(1);
    m_StandardizedProblem__scenarioDefinition->setUpperBound(-1);
    m_StandardizedProblem__scenarioDefinition->setTransient(false);
    m_StandardizedProblem__scenarioDefinition->setVolatile(false);
    m_StandardizedProblem__scenarioDefinition->setChangeable(true);
    m_StandardizedProblem__scenarioDefinition->setContainment(true);
    m_StandardizedProblem__scenarioDefinition->setResolveProxies(true);
    m_StandardizedProblem__scenarioDefinition->setUnique(true);
    m_StandardizedProblem__scenarioDefinition->setDerived(false);
    m_StandardizedProblem__scenarioDefinition->setOrdered(true);
    m_StandardizedProblem__performanceCriteria->setEType(
            m_PerformanceMeasureEClass);
    m_StandardizedProblem__performanceCriteria->setName("performanceCriteria");
    m_StandardizedProblem__performanceCriteria->setDefaultValueLiteral("");
    m_StandardizedProblem__performanceCriteria->setLowerBound(1);
    m_StandardizedProblem__performanceCriteria->setUpperBound(-1);
    m_StandardizedProblem__performanceCriteria->setTransient(false);
    m_StandardizedProblem__performanceCriteria->setVolatile(false);
    m_StandardizedProblem__performanceCriteria->setChangeable(true);
    m_StandardizedProblem__performanceCriteria->setContainment(true);
    m_StandardizedProblem__performanceCriteria->setResolveProxies(true);
    m_StandardizedProblem__performanceCriteria->setUnique(true);
    m_StandardizedProblem__performanceCriteria->setDerived(false);
    m_StandardizedProblem__performanceCriteria->setOrdered(true);
    m_StandardizedProblem__commServiceDef->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getCommunicationServiceDefinition());
    m_StandardizedProblem__commServiceDef->setName("commServiceDef");
    m_StandardizedProblem__commServiceDef->setDefaultValueLiteral("");
    m_StandardizedProblem__commServiceDef->setLowerBound(0);
    m_StandardizedProblem__commServiceDef->setUpperBound(-1);
    m_StandardizedProblem__commServiceDef->setTransient(false);
    m_StandardizedProblem__commServiceDef->setVolatile(false);
    m_StandardizedProblem__commServiceDef->setChangeable(true);
    m_StandardizedProblem__commServiceDef->setContainment(false);
    m_StandardizedProblem__commServiceDef->setResolveProxies(true);
    m_StandardizedProblem__commServiceDef->setUnique(true);
    m_StandardizedProblem__commServiceDef->setDerived(false);
    m_StandardizedProblem__commServiceDef->setOrdered(true);
    m_StandardizedProblem__environmentVariableDefinition->setEType(
            m_EnvironmentVariableDefinitionEClass);
    m_StandardizedProblem__environmentVariableDefinition->setName(
            "environmentVariableDefinition");
    m_StandardizedProblem__environmentVariableDefinition->setDefaultValueLiteral(
            "");
    m_StandardizedProblem__environmentVariableDefinition->setLowerBound(0);
    m_StandardizedProblem__environmentVariableDefinition->setUpperBound(-1);
    m_StandardizedProblem__environmentVariableDefinition->setTransient(false);
    m_StandardizedProblem__environmentVariableDefinition->setVolatile(false);
    m_StandardizedProblem__environmentVariableDefinition->setChangeable(true);
    m_StandardizedProblem__environmentVariableDefinition->setContainment(true);
    m_StandardizedProblem__environmentVariableDefinition->setResolveProxies(
            true);
    m_StandardizedProblem__environmentVariableDefinition->setUnique(true);
    m_StandardizedProblem__environmentVariableDefinition->setDerived(false);
    m_StandardizedProblem__environmentVariableDefinition->setOrdered(true);
    m_StandardizedProblem__benchmarkConstraintDefinition->setEType(
            m_BenchmarkConstraintDefinitionEClass);
    m_StandardizedProblem__benchmarkConstraintDefinition->setName(
            "benchmarkConstraintDefinition");
    m_StandardizedProblem__benchmarkConstraintDefinition->setDefaultValueLiteral(
            "");
    m_StandardizedProblem__benchmarkConstraintDefinition->setLowerBound(0);
    m_StandardizedProblem__benchmarkConstraintDefinition->setUpperBound(-1);
    m_StandardizedProblem__benchmarkConstraintDefinition->setTransient(false);
    m_StandardizedProblem__benchmarkConstraintDefinition->setVolatile(false);
    m_StandardizedProblem__benchmarkConstraintDefinition->setChangeable(true);
    m_StandardizedProblem__benchmarkConstraintDefinition->setContainment(true);
    m_StandardizedProblem__benchmarkConstraintDefinition->setResolveProxies(
            true);
    m_StandardizedProblem__benchmarkConstraintDefinition->setUnique(true);
    m_StandardizedProblem__benchmarkConstraintDefinition->setDerived(false);
    m_StandardizedProblem__benchmarkConstraintDefinition->setOrdered(true);
    // ScenarioDef
    m_ScenarioDefEClass->setName("ScenarioDef");
    m_ScenarioDefEClass->setAbstract(false);
    m_ScenarioDefEClass->setInterface(false);
    m_ScenarioDef__weight->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    m_ScenarioDef__weight->setName("weight");
    m_ScenarioDef__weight->setDefaultValueLiteral("1.0");
    m_ScenarioDef__weight->setLowerBound(0);
    m_ScenarioDef__weight->setUpperBound(1);
    m_ScenarioDef__weight->setTransient(false);
    m_ScenarioDef__weight->setVolatile(false);
    m_ScenarioDef__weight->setChangeable(true);
    m_ScenarioDef__weight->setUnsettable(false);
    m_ScenarioDef__weight->setID(false);
    m_ScenarioDef__weight->setUnique(true);
    m_ScenarioDef__weight->setDerived(false);
    m_ScenarioDef__weight->setOrdered(true);
    m_ScenarioDef__commServDef->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getCommunicationServiceDefinition());
    m_ScenarioDef__commServDef->setName("commServDef");
    m_ScenarioDef__commServDef->setDefaultValueLiteral("");
    m_ScenarioDef__commServDef->setLowerBound(0);
    m_ScenarioDef__commServDef->setUpperBound(-1);
    m_ScenarioDef__commServDef->setTransient(false);
    m_ScenarioDef__commServDef->setVolatile(false);
    m_ScenarioDef__commServDef->setChangeable(true);
    m_ScenarioDef__commServDef->setContainment(false);
    m_ScenarioDef__commServDef->setResolveProxies(true);
    m_ScenarioDef__commServDef->setUnique(true);
    m_ScenarioDef__commServDef->setDerived(false);
    m_ScenarioDef__commServDef->setOrdered(true);
    m_ScenarioDef__tuple->setEType(m_TupleEClass);
    m_ScenarioDef__tuple->setName("tuple");
    m_ScenarioDef__tuple->setDefaultValueLiteral("");
    m_ScenarioDef__tuple->setLowerBound(0);
    m_ScenarioDef__tuple->setUpperBound(-1);
    m_ScenarioDef__tuple->setTransient(false);
    m_ScenarioDef__tuple->setVolatile(false);
    m_ScenarioDef__tuple->setChangeable(true);
    m_ScenarioDef__tuple->setContainment(true);
    m_ScenarioDef__tuple->setResolveProxies(true);
    m_ScenarioDef__tuple->setUnique(true);
    m_ScenarioDef__tuple->setDerived(false);
    m_ScenarioDef__tuple->setOrdered(true);
    m_ScenarioDef__tuple->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_TupleEClass->getEStructuralFeatures()[1]));
    m_ScenarioDef__performanceMeasures->setEType(m_WeightedPerfMeasureEClass);
    m_ScenarioDef__performanceMeasures->setName("performanceMeasures");
    m_ScenarioDef__performanceMeasures->setDefaultValueLiteral("");
    m_ScenarioDef__performanceMeasures->setLowerBound(0);
    m_ScenarioDef__performanceMeasures->setUpperBound(-1);
    m_ScenarioDef__performanceMeasures->setTransient(false);
    m_ScenarioDef__performanceMeasures->setVolatile(false);
    m_ScenarioDef__performanceMeasures->setChangeable(true);
    m_ScenarioDef__performanceMeasures->setContainment(true);
    m_ScenarioDef__performanceMeasures->setResolveProxies(true);
    m_ScenarioDef__performanceMeasures->setUnique(true);
    m_ScenarioDef__performanceMeasures->setDerived(false);
    m_ScenarioDef__performanceMeasures->setOrdered(true);
    m_ScenarioDef__benchmarkconstraint->setEType(m_BenchmarkConstraintEClass);
    m_ScenarioDef__benchmarkconstraint->setName("benchmarkconstraint");
    m_ScenarioDef__benchmarkconstraint->setDefaultValueLiteral("");
    m_ScenarioDef__benchmarkconstraint->setLowerBound(0);
    m_ScenarioDef__benchmarkconstraint->setUpperBound(-1);
    m_ScenarioDef__benchmarkconstraint->setTransient(false);
    m_ScenarioDef__benchmarkconstraint->setVolatile(false);
    m_ScenarioDef__benchmarkconstraint->setChangeable(true);
    m_ScenarioDef__benchmarkconstraint->setContainment(true);
    m_ScenarioDef__benchmarkconstraint->setResolveProxies(true);
    m_ScenarioDef__benchmarkconstraint->setUnique(true);
    m_ScenarioDef__benchmarkconstraint->setDerived(false);
    m_ScenarioDef__benchmarkconstraint->setOrdered(true);
    // PerformanceMeasure
    m_PerformanceMeasureEClass->setName("PerformanceMeasure");
    m_PerformanceMeasureEClass->setAbstract(false);
    m_PerformanceMeasureEClass->setInterface(false);
    m_PerformanceMeasure__metric->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_PerformanceMeasure__metric->setName("metric");
    m_PerformanceMeasure__metric->setDefaultValueLiteral("");
    m_PerformanceMeasure__metric->setLowerBound(0);
    m_PerformanceMeasure__metric->setUpperBound(1);
    m_PerformanceMeasure__metric->setTransient(false);
    m_PerformanceMeasure__metric->setVolatile(false);
    m_PerformanceMeasure__metric->setChangeable(true);
    m_PerformanceMeasure__metric->setUnsettable(false);
    m_PerformanceMeasure__metric->setID(false);
    m_PerformanceMeasure__metric->setUnique(true);
    m_PerformanceMeasure__metric->setDerived(false);
    m_PerformanceMeasure__metric->setOrdered(true);
    // DescriptorObject
    m_DescriptorObjectEClass->setName("DescriptorObject");
    m_DescriptorObjectEClass->setAbstract(true);
    m_DescriptorObjectEClass->setInterface(false);
    m_DescriptorObject__label->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_DescriptorObject__label->setName("label");
    m_DescriptorObject__label->setDefaultValueLiteral("");
    m_DescriptorObject__label->setLowerBound(0);
    m_DescriptorObject__label->setUpperBound(1);
    m_DescriptorObject__label->setTransient(false);
    m_DescriptorObject__label->setVolatile(false);
    m_DescriptorObject__label->setChangeable(true);
    m_DescriptorObject__label->setUnsettable(false);
    m_DescriptorObject__label->setID(false);
    m_DescriptorObject__label->setUnique(true);
    m_DescriptorObject__label->setDerived(false);
    m_DescriptorObject__label->setOrdered(true);
    m_DescriptorObject__description->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_DescriptorObject__description->setName("description");
    m_DescriptorObject__description->setDefaultValueLiteral("");
    m_DescriptorObject__description->setLowerBound(0);
    m_DescriptorObject__description->setUpperBound(1);
    m_DescriptorObject__description->setTransient(false);
    m_DescriptorObject__description->setVolatile(false);
    m_DescriptorObject__description->setChangeable(true);
    m_DescriptorObject__description->setUnsettable(false);
    m_DescriptorObject__description->setID(false);
    m_DescriptorObject__description->setUnique(true);
    m_DescriptorObject__description->setDerived(false);
    m_DescriptorObject__description->setOrdered(true);
    // EnvironmentVariableDefinition
    m_EnvironmentVariableDefinitionEClass->setName(
            "EnvironmentVariableDefinition");
    m_EnvironmentVariableDefinitionEClass->setAbstract(false);
    m_EnvironmentVariableDefinitionEClass->setInterface(false);
    // IScoreElement
    m_IScoreElementEClass->setName("IScoreElement");
    m_IScoreElementEClass->setAbstract(true);
    m_IScoreElementEClass->setInterface(false);
    m_IScoreElement__score->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    m_IScoreElement__score->setName("score");
    m_IScoreElement__score->setDefaultValueLiteral("");
    m_IScoreElement__score->setLowerBound(0);
    m_IScoreElement__score->setUpperBound(1);
    m_IScoreElement__score->setTransient(false);
    m_IScoreElement__score->setVolatile(false);
    m_IScoreElement__score->setChangeable(true);
    m_IScoreElement__score->setUnsettable(false);
    m_IScoreElement__score->setID(false);
    m_IScoreElement__score->setUnique(true);
    m_IScoreElement__score->setDerived(false);
    m_IScoreElement__score->setOrdered(true);
    // IScore
    m_IScoreEClass->setName("IScore");
    m_IScoreEClass->setAbstract(true);
    m_IScoreEClass->setInterface(true);
    _op = ::ecore::Ptr < ::ecore::EOperation > (new ::ecore::EOperation);
    _op->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    _op->setName("calcScore");
    _op->setLowerBound(0);
    _op->setUpperBound(1);
    _op->setUnique(true);
    _op->setOrdered(true);
    _pa = ::ecore::Ptr < ::ecore::EParameter > (new ::ecore::EParameter);
    _pa->setEType(m_IScoreElementEClass);
    _pa->setName("scoreElement");
    _pa->setLowerBound(0);
    _pa->setUpperBound(1);
    _pa->setUnique(true);
    _pa->setOrdered(true);
    _op->getEParameters().push_back(_pa);
    m_IScoreEClass->getEOperations().push_back(_op);
    // Tuple
    m_TupleEClass->setName("Tuple");
    m_TupleEClass->setAbstract(false);
    m_TupleEClass->setInterface(false);
    m_Tuple__weight->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    m_Tuple__weight->setName("weight");
    m_Tuple__weight->setDefaultValueLiteral("1.0");
    m_Tuple__weight->setLowerBound(0);
    m_Tuple__weight->setUpperBound(1);
    m_Tuple__weight->setTransient(false);
    m_Tuple__weight->setVolatile(false);
    m_Tuple__weight->setChangeable(true);
    m_Tuple__weight->setUnsettable(false);
    m_Tuple__weight->setID(false);
    m_Tuple__weight->setUnique(true);
    m_Tuple__weight->setDerived(false);
    m_Tuple__weight->setOrdered(true);
    m_Tuple__scenarioDef->setEType(m_ScenarioDefEClass);
    m_Tuple__scenarioDef->setName("scenarioDef");
    m_Tuple__scenarioDef->setDefaultValueLiteral("");
    m_Tuple__scenarioDef->setLowerBound(1);
    m_Tuple__scenarioDef->setUpperBound(1);
    m_Tuple__scenarioDef->setTransient(false);
    m_Tuple__scenarioDef->setVolatile(false);
    m_Tuple__scenarioDef->setChangeable(true);
    m_Tuple__scenarioDef->setContainment(false);
    m_Tuple__scenarioDef->setResolveProxies(true);
    m_Tuple__scenarioDef->setUnique(true);
    m_Tuple__scenarioDef->setDerived(false);
    m_Tuple__scenarioDef->setOrdered(true);
    m_Tuple__scenarioDef->setEOpposite(
            ::ecore::as < ::ecore::EReference
                    > (m_ScenarioDefEClass->getEStructuralFeatures()[2]));
    m_Tuple__commServiceDef->setEType(
            dynamic_cast< ::serviceDefinition::ServiceDefinitionPackage* >(::serviceDefinition::ServiceDefinitionPackage::_instance().get())->getCommunicationServiceDefinition());
    m_Tuple__commServiceDef->setName("commServiceDef");
    m_Tuple__commServiceDef->setDefaultValueLiteral("");
    m_Tuple__commServiceDef->setLowerBound(0);
    m_Tuple__commServiceDef->setUpperBound(1);
    m_Tuple__commServiceDef->setTransient(false);
    m_Tuple__commServiceDef->setVolatile(false);
    m_Tuple__commServiceDef->setChangeable(true);
    m_Tuple__commServiceDef->setContainment(false);
    m_Tuple__commServiceDef->setResolveProxies(true);
    m_Tuple__commServiceDef->setUnique(true);
    m_Tuple__commServiceDef->setDerived(false);
    m_Tuple__commServiceDef->setOrdered(true);
    m_Tuple__commObject->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_Tuple__commObject->setName("commObject");
    m_Tuple__commObject->setDefaultValueLiteral("");
    m_Tuple__commObject->setLowerBound(0);
    m_Tuple__commObject->setUpperBound(1);
    m_Tuple__commObject->setTransient(false);
    m_Tuple__commObject->setVolatile(false);
    m_Tuple__commObject->setChangeable(true);
    m_Tuple__commObject->setContainment(false);
    m_Tuple__commObject->setResolveProxies(true);
    m_Tuple__commObject->setUnique(true);
    m_Tuple__commObject->setDerived(false);
    m_Tuple__commObject->setOrdered(true);
    m_Tuple__weightedperfmeasure->setEType(m_WeightedPerfMeasureEClass);
    m_Tuple__weightedperfmeasure->setName("weightedperfmeasure");
    m_Tuple__weightedperfmeasure->setDefaultValueLiteral("");
    m_Tuple__weightedperfmeasure->setLowerBound(0);
    m_Tuple__weightedperfmeasure->setUpperBound(-1);
    m_Tuple__weightedperfmeasure->setTransient(false);
    m_Tuple__weightedperfmeasure->setVolatile(false);
    m_Tuple__weightedperfmeasure->setChangeable(true);
    m_Tuple__weightedperfmeasure->setContainment(false);
    m_Tuple__weightedperfmeasure->setResolveProxies(true);
    m_Tuple__weightedperfmeasure->setUnique(true);
    m_Tuple__weightedperfmeasure->setDerived(false);
    m_Tuple__weightedperfmeasure->setOrdered(true);
    m_Tuple__environmentVariable->setEType(m_EnvironmentVariableEClass);
    m_Tuple__environmentVariable->setName("environmentVariable");
    m_Tuple__environmentVariable->setDefaultValueLiteral("");
    m_Tuple__environmentVariable->setLowerBound(0);
    m_Tuple__environmentVariable->setUpperBound(-1);
    m_Tuple__environmentVariable->setTransient(false);
    m_Tuple__environmentVariable->setVolatile(false);
    m_Tuple__environmentVariable->setChangeable(true);
    m_Tuple__environmentVariable->setContainment(true);
    m_Tuple__environmentVariable->setResolveProxies(true);
    m_Tuple__environmentVariable->setUnique(true);
    m_Tuple__environmentVariable->setDerived(false);
    m_Tuple__environmentVariable->setOrdered(true);
    // WeightedPerfMeasure
    m_WeightedPerfMeasureEClass->setName("WeightedPerfMeasure");
    m_WeightedPerfMeasureEClass->setAbstract(false);
    m_WeightedPerfMeasureEClass->setInterface(false);
    m_WeightedPerfMeasure__weight->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEBigDecimal());
    m_WeightedPerfMeasure__weight->setName("weight");
    m_WeightedPerfMeasure__weight->setDefaultValueLiteral("1.0");
    m_WeightedPerfMeasure__weight->setLowerBound(0);
    m_WeightedPerfMeasure__weight->setUpperBound(1);
    m_WeightedPerfMeasure__weight->setTransient(false);
    m_WeightedPerfMeasure__weight->setVolatile(false);
    m_WeightedPerfMeasure__weight->setChangeable(true);
    m_WeightedPerfMeasure__weight->setUnsettable(false);
    m_WeightedPerfMeasure__weight->setID(false);
    m_WeightedPerfMeasure__weight->setUnique(true);
    m_WeightedPerfMeasure__weight->setDerived(false);
    m_WeightedPerfMeasure__weight->setOrdered(true);
    m_WeightedPerfMeasure__perfMeasure->setEType(m_PerformanceMeasureEClass);
    m_WeightedPerfMeasure__perfMeasure->setName("perfMeasure");
    m_WeightedPerfMeasure__perfMeasure->setDefaultValueLiteral("");
    m_WeightedPerfMeasure__perfMeasure->setLowerBound(1);
    m_WeightedPerfMeasure__perfMeasure->setUpperBound(1);
    m_WeightedPerfMeasure__perfMeasure->setTransient(false);
    m_WeightedPerfMeasure__perfMeasure->setVolatile(false);
    m_WeightedPerfMeasure__perfMeasure->setChangeable(true);
    m_WeightedPerfMeasure__perfMeasure->setContainment(false);
    m_WeightedPerfMeasure__perfMeasure->setResolveProxies(true);
    m_WeightedPerfMeasure__perfMeasure->setUnique(true);
    m_WeightedPerfMeasure__perfMeasure->setDerived(false);
    m_WeightedPerfMeasure__perfMeasure->setOrdered(true);
    // EnvironmentVariable
    m_EnvironmentVariableEClass->setName("EnvironmentVariable");
    m_EnvironmentVariableEClass->setAbstract(false);
    m_EnvironmentVariableEClass->setInterface(false);
    m_EnvironmentVariable__value->setEType(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAbstractValue());
    m_EnvironmentVariable__value->setName("value");
    m_EnvironmentVariable__value->setDefaultValueLiteral("");
    m_EnvironmentVariable__value->setLowerBound(0);
    m_EnvironmentVariable__value->setUpperBound(1);
    m_EnvironmentVariable__value->setTransient(false);
    m_EnvironmentVariable__value->setVolatile(false);
    m_EnvironmentVariable__value->setChangeable(true);
    m_EnvironmentVariable__value->setContainment(true);
    m_EnvironmentVariable__value->setResolveProxies(true);
    m_EnvironmentVariable__value->setUnique(true);
    m_EnvironmentVariable__value->setDerived(false);
    m_EnvironmentVariable__value->setOrdered(true);
    m_EnvironmentVariable__environmentVariableDefinition->setEType(
            m_EnvironmentVariableDefinitionEClass);
    m_EnvironmentVariable__environmentVariableDefinition->setName(
            "environmentVariableDefinition");
    m_EnvironmentVariable__environmentVariableDefinition->setDefaultValueLiteral(
            "");
    m_EnvironmentVariable__environmentVariableDefinition->setLowerBound(1);
    m_EnvironmentVariable__environmentVariableDefinition->setUpperBound(1);
    m_EnvironmentVariable__environmentVariableDefinition->setTransient(false);
    m_EnvironmentVariable__environmentVariableDefinition->setVolatile(false);
    m_EnvironmentVariable__environmentVariableDefinition->setChangeable(true);
    m_EnvironmentVariable__environmentVariableDefinition->setContainment(false);
    m_EnvironmentVariable__environmentVariableDefinition->setResolveProxies(
            true);
    m_EnvironmentVariable__environmentVariableDefinition->setUnique(true);
    m_EnvironmentVariable__environmentVariableDefinition->setDerived(false);
    m_EnvironmentVariable__environmentVariableDefinition->setOrdered(true);
    // BenchmarkConstraint
    m_BenchmarkConstraintEClass->setName("BenchmarkConstraint");
    m_BenchmarkConstraintEClass->setAbstract(false);
    m_BenchmarkConstraintEClass->setInterface(false);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setEType(
            m_BenchmarkConstraintDefinitionEClass);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setName(
            "benchmarkConstraintDefinition");
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setDefaultValueLiteral(
            "");
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setLowerBound(1);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setUpperBound(1);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setTransient(false);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setVolatile(false);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setChangeable(true);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setContainment(false);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setResolveProxies(
            true);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setUnique(true);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setDerived(false);
    m_BenchmarkConstraint__benchmarkConstraintDefinition->setOrdered(true);
    m_BenchmarkConstraint__value->setEType(
            dynamic_cast< ::basicAttributes::BasicAttributesPackage* >(::basicAttributes::BasicAttributesPackage::_instance().get())->getAbstractValue());
    m_BenchmarkConstraint__value->setName("value");
    m_BenchmarkConstraint__value->setDefaultValueLiteral("");
    m_BenchmarkConstraint__value->setLowerBound(0);
    m_BenchmarkConstraint__value->setUpperBound(1);
    m_BenchmarkConstraint__value->setTransient(false);
    m_BenchmarkConstraint__value->setVolatile(false);
    m_BenchmarkConstraint__value->setChangeable(true);
    m_BenchmarkConstraint__value->setContainment(true);
    m_BenchmarkConstraint__value->setResolveProxies(true);
    m_BenchmarkConstraint__value->setUnique(true);
    m_BenchmarkConstraint__value->setDerived(false);
    m_BenchmarkConstraint__value->setOrdered(true);
    // BenchmarkConstraintDefinition
    m_BenchmarkConstraintDefinitionEClass->setName(
            "BenchmarkConstraintDefinition");
    m_BenchmarkConstraintDefinitionEClass->setAbstract(false);
    m_BenchmarkConstraintDefinitionEClass->setInterface(false);
    // BenchmarkAttributeDefinition
    m_BenchmarkAttributeDefinitionEClass->setName(
            "BenchmarkAttributeDefinition");
    m_BenchmarkAttributeDefinitionEClass->setAbstract(true);
    m_BenchmarkAttributeDefinitionEClass->setInterface(false);
    m_BenchmarkAttributeDefinition__description->setEType(
            dynamic_cast< ::ecore::EcorePackage* >(::ecore::EcorePackage::_instance().get())->getEString());
    m_BenchmarkAttributeDefinition__description->setName("description");
    m_BenchmarkAttributeDefinition__description->setDefaultValueLiteral("");
    m_BenchmarkAttributeDefinition__description->setLowerBound(0);
    m_BenchmarkAttributeDefinition__description->setUpperBound(1);
    m_BenchmarkAttributeDefinition__description->setTransient(false);
    m_BenchmarkAttributeDefinition__description->setVolatile(false);
    m_BenchmarkAttributeDefinition__description->setChangeable(true);
    m_BenchmarkAttributeDefinition__description->setUnsettable(false);
    m_BenchmarkAttributeDefinition__description->setID(false);
    m_BenchmarkAttributeDefinition__description->setUnique(true);
    m_BenchmarkAttributeDefinition__description->setDerived(false);
    m_BenchmarkAttributeDefinition__description->setOrdered(true);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr Standardized_problemPackage::getStandardizedProblem()
{
    return m_StandardizedProblemEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getScenarioDef()
{
    return m_ScenarioDefEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getPerformanceMeasure()
{
    return m_PerformanceMeasureEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getDescriptorObject()
{
    return m_DescriptorObjectEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getEnvironmentVariableDefinition()
{
    return m_EnvironmentVariableDefinitionEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getIScoreElement()
{
    return m_IScoreElementEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getIScore()
{
    return m_IScoreEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getTuple()
{
    return m_TupleEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getWeightedPerfMeasure()
{
    return m_WeightedPerfMeasureEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getEnvironmentVariable()
{
    return m_EnvironmentVariableEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getBenchmarkConstraint()
{
    return m_BenchmarkConstraintEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getBenchmarkConstraintDefinition()
{
    return m_BenchmarkConstraintDefinitionEClass;
}
::ecore::EClass_ptr Standardized_problemPackage::getBenchmarkAttributeDefinition()
{
    return m_BenchmarkAttributeDefinitionEClass;
}

::ecore::EAttribute_ptr Standardized_problemPackage::getDescriptorObject__label()
{
    return m_DescriptorObject__label;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getDescriptorObject__description()
{
    return m_DescriptorObject__description;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getIScoreElement__score()
{
    return m_IScoreElement__score;
}
::ecore::EReference_ptr Standardized_problemPackage::getStandardizedProblem__scenarioDefinition()
{
    return m_StandardizedProblem__scenarioDefinition;
}
::ecore::EReference_ptr Standardized_problemPackage::getStandardizedProblem__performanceCriteria()
{
    return m_StandardizedProblem__performanceCriteria;
}
::ecore::EReference_ptr Standardized_problemPackage::getStandardizedProblem__commServiceDef()
{
    return m_StandardizedProblem__commServiceDef;
}
::ecore::EReference_ptr Standardized_problemPackage::getStandardizedProblem__environmentVariableDefinition()
{
    return m_StandardizedProblem__environmentVariableDefinition;
}
::ecore::EReference_ptr Standardized_problemPackage::getStandardizedProblem__benchmarkConstraintDefinition()
{
    return m_StandardizedProblem__benchmarkConstraintDefinition;
}
::ecore::EReference_ptr Standardized_problemPackage::getScenarioDef__commServDef()
{
    return m_ScenarioDef__commServDef;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getScenarioDef__weight()
{
    return m_ScenarioDef__weight;
}
::ecore::EReference_ptr Standardized_problemPackage::getScenarioDef__tuple()
{
    return m_ScenarioDef__tuple;
}
::ecore::EReference_ptr Standardized_problemPackage::getScenarioDef__performanceMeasures()
{
    return m_ScenarioDef__performanceMeasures;
}
::ecore::EReference_ptr Standardized_problemPackage::getScenarioDef__benchmarkconstraint()
{
    return m_ScenarioDef__benchmarkconstraint;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getPerformanceMeasure__metric()
{
    return m_PerformanceMeasure__metric;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getAttributeDefinition__name()
{
    return m_AttributeDefinition__name;
}
::ecore::EReference_ptr Standardized_problemPackage::getAttributeDefinition__type()
{
    return m_AttributeDefinition__type;
}
::ecore::EReference_ptr Standardized_problemPackage::getAttributeDefinition__defaultvalue()
{
    return m_AttributeDefinition__defaultvalue;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getBenchmarkAttributeDefinition__description()
{
    return m_BenchmarkAttributeDefinition__description;
}
::ecore::EReference_ptr Standardized_problemPackage::getTuple__scenarioDef()
{
    return m_Tuple__scenarioDef;
}
::ecore::EReference_ptr Standardized_problemPackage::getTuple__commServiceDef()
{
    return m_Tuple__commServiceDef;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getTuple__weight()
{
    return m_Tuple__weight;
}
::ecore::EReference_ptr Standardized_problemPackage::getTuple__commObject()
{
    return m_Tuple__commObject;
}
::ecore::EReference_ptr Standardized_problemPackage::getTuple__weightedperfmeasure()
{
    return m_Tuple__weightedperfmeasure;
}
::ecore::EReference_ptr Standardized_problemPackage::getTuple__environmentVariable()
{
    return m_Tuple__environmentVariable;
}
::ecore::EAttribute_ptr Standardized_problemPackage::getWeightedPerfMeasure__weight()
{
    return m_WeightedPerfMeasure__weight;
}
::ecore::EReference_ptr Standardized_problemPackage::getWeightedPerfMeasure__perfMeasure()
{
    return m_WeightedPerfMeasure__perfMeasure;
}
::ecore::EReference_ptr Standardized_problemPackage::getEnvironmentVariable__value()
{
    return m_EnvironmentVariable__value;
}
::ecore::EReference_ptr Standardized_problemPackage::getEnvironmentVariable__environmentVariableDefinition()
{
    return m_EnvironmentVariable__environmentVariableDefinition;
}
::ecore::EReference_ptr Standardized_problemPackage::getBenchmarkConstraint__benchmarkConstraintDefinition()
{
    return m_BenchmarkConstraint__benchmarkConstraintDefinition;
}
::ecore::EReference_ptr Standardized_problemPackage::getBenchmarkConstraint__value()
{
    return m_BenchmarkConstraint__value;
}

