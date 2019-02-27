// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _PARAMETERDEFINITIONPACKAGE_HPP
#define _PARAMETERDEFINITIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <parameterDefinition_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <parameterDefinition/dllParameterDefinition.hpp>

namespace parameterDefinition
{

class EXPORT_PARAMETERDEFINITION_DLL ParameterDefinitionPackage : public virtual ::ecore::EPackage
{
public:

    static ParameterDefinitionPackage_ptr _instance();
    static ParameterDefinitionPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTPARAMETER = 0;

    static const int PARAMDEFMODEL = 1;

    static const int PARAMDEFREPOIMPORT = 2;

    static const int PARAMETERDEFINITION = 3;

    static const int PARAMETERSETDEFINITION = 4;

    static const int PARAMETERSETREPOSITORY = 5;

    static const int TRIGGERDEFINITION = 6;

    static const int PARAMDEFMODEL__REPOSITORY = 0;

    static const int PARAMDEFMODEL__IMPORTS = 1;

    static const int PARAMETERSETREPOSITORY__NAME = 2;

    static const int PARAMETERSETREPOSITORY__SETS = 3;

    static const int PARAMETERSETDEFINITION__NAME = 4;

    static const int PARAMETERSETDEFINITION__PARAMETERS = 5;

    static const int PARAMETERSETDEFINITION__EXTENDS = 6;

    static const int ABSTRACTPARAMETER__NAME = 7;

    static const int ABSTRACTPARAMETER__ATTRIBUTES = 8;

    static const int PARAMDEFREPOIMPORT__IMPORTEDNAMESPACE = 9;

    // IDs for classifiers for class AbstractParameter 

    // IDs for classifiers for class ParamDefModel 

    // IDs for classifiers for class ParamDefRepoImport 

    // IDs for classifiers for class ParameterDefinition 

    static const int PARAMETERDEFINITION__NAME = ABSTRACTPARAMETER__NAME;

    static const int PARAMETERDEFINITION__ATTRIBUTES = ABSTRACTPARAMETER__ATTRIBUTES;

    // IDs for classifiers for class ParameterSetDefinition 

    // IDs for classifiers for class ParameterSetRepository 

    // IDs for classifiers for class TriggerDefinition 

    static const int TRIGGERDEFINITION__NAME = ABSTRACTPARAMETER__NAME;

    static const int TRIGGERDEFINITION__ATTRIBUTES = ABSTRACTPARAMETER__ATTRIBUTES;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getParamDefModel();

    virtual ::ecore::EClass_ptr getParameterSetRepository();

    virtual ::ecore::EClass_ptr getParameterSetDefinition();

    virtual ::ecore::EClass_ptr getAbstractParameter();

    virtual ::ecore::EClass_ptr getParameterDefinition();

    virtual ::ecore::EClass_ptr getTriggerDefinition();

    virtual ::ecore::EClass_ptr getParamDefRepoImport();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getParamDefModel__repository();

    virtual ::ecore::EReference_ptr getParamDefModel__imports();

    virtual ::ecore::EAttribute_ptr getParameterSetRepository__name();

    virtual ::ecore::EReference_ptr getParameterSetRepository__sets();

    virtual ::ecore::EAttribute_ptr getParameterSetDefinition__name();

    virtual ::ecore::EReference_ptr getParameterSetDefinition__parameters();

    virtual ::ecore::EReference_ptr getParameterSetDefinition__extends();

    virtual ::ecore::EAttribute_ptr getAbstractParameter__name();

    virtual ::ecore::EReference_ptr getAbstractParameter__attributes();

    virtual ::ecore::EAttribute_ptr getParamDefRepoImport__importedNamespace();

protected:

    static ::ecore::Ptr< ParameterDefinitionPackage > s_instance;

    ParameterDefinitionPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ParamDefModelEClass;

    ::ecore::EClass_ptr m_ParameterSetRepositoryEClass;

    ::ecore::EClass_ptr m_ParameterSetDefinitionEClass;

    ::ecore::EClass_ptr m_AbstractParameterEClass;

    ::ecore::EClass_ptr m_ParameterDefinitionEClass;

    ::ecore::EClass_ptr m_TriggerDefinitionEClass;

    ::ecore::EClass_ptr m_ParamDefRepoImportEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_ParamDefModel__repository;

    ::ecore::EReference_ptr m_ParamDefModel__imports;

    ::ecore::EAttribute_ptr m_ParameterSetRepository__name;

    ::ecore::EReference_ptr m_ParameterSetRepository__sets;

    ::ecore::EAttribute_ptr m_ParameterSetDefinition__name;

    ::ecore::EReference_ptr m_ParameterSetDefinition__parameters;

    ::ecore::EReference_ptr m_ParameterSetDefinition__extends;

    ::ecore::EAttribute_ptr m_AbstractParameter__name;

    ::ecore::EReference_ptr m_AbstractParameter__attributes;

    ::ecore::EAttribute_ptr m_ParamDefRepoImport__importedNamespace;

};

}
 // parameterDefinition

#endif // _PARAMETERDEFINITIONPACKAGE_HPP

