// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefinitionPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _SERVICEDEFINITIONPACKAGE_HPP
#define _SERVICEDEFINITIONPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <serviceDefinition_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL ServiceDefinitionPackage : public virtual ::ecore::EPackage
{
public:

    static ServiceDefinitionPackage_ptr _instance();
    static ServiceDefinitionPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int ABSTRACTSERVICEDEFINITION = 0;

    static const int COMMREPOIMPORT = 1;

    static const int COMMUNICATIONSERVICEDEFINITION = 2;

    static const int COORDINATIONSERVICEDEFINITION = 3;

    static const int FORKINGSERVICEDEFINITION = 4;

    static const int JOININGSERVICEDEFINITION = 5;

    static const int ONEWAYCOMMUNICATIONSERVICE = 6;

    static const int OPTIONALCOORDINATIONSERVICE = 7;

    static const int REQUESTANSWERSERVICEDEFINITION = 8;

    static const int SERVICEDEFMODEL = 9;

    static const int SERVICEDEFREPOSITORY = 10;

    static const int SERVICEPROPERTY = 11;

    static const int SERVICEREPOVERSION = 12;

    static const int TWOWAYCOMMUNICATIONSERVICE = 13;

    static const int SERVICEDEFMODEL__IMPORTS = 0;

    static const int SERVICEDEFMODEL__REPOSITORY = 1;

    static const int SERVICEDEFREPOSITORY__NAME = 2;

    static const int SERVICEDEFREPOSITORY__VERSION = 3;

    static const int SERVICEDEFREPOSITORY__SERVICES = 4;

    static const int ABSTRACTSERVICEDEFINITION__NAME = 5;

    static const int ABSTRACTSERVICEDEFINITION__PROPERTIES = 6;

    static const int COMMREPOIMPORT__IMPORTEDNAMESPACE = 7;

    static const int SERVICEREPOVERSION__MAJOR = 8;

    static const int SERVICEREPOVERSION__MINOR = 9;

    static const int SERVICEREPOVERSION__PATCH = 10;

    static const int SERVICEPROPERTY__NAME = 11;

    static const int COORDINATIONSERVICEDEFINITION__STATEPATTERN = 12;

    static const int COORDINATIONSERVICEDEFINITION__PARAMETERPATTERN = 13;

    static const int COORDINATIONSERVICEDEFINITION__WIRINGPATTERN = 14;

    static const int COORDINATIONSERVICEDEFINITION__MONITORINGPATTERN = 15;

    static const int COORDINATIONSERVICEDEFINITION__SERVICES = 16;

    static const int FORKINGSERVICEDEFINITION__PATTERN = 17;

    static const int REQUESTANSWERSERVICEDEFINITION__PATTERN = 18;

    static const int OPTIONALCOORDINATIONSERVICE__NAME = 19;

    static const int OPTIONALCOORDINATIONSERVICE__SERVICEREF = 20;

    static const int JOININGSERVICEDEFINITION__PATTERN = 21;

    // IDs for classifiers for class AbstractServiceDefinition 

    // IDs for classifiers for class CommRepoImport 

    // IDs for classifiers for class CommunicationServiceDefinition 

    static const int COMMUNICATIONSERVICEDEFINITION__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int COMMUNICATIONSERVICEDEFINITION__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class CoordinationServiceDefinition 

    static const int COORDINATIONSERVICEDEFINITION__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int COORDINATIONSERVICEDEFINITION__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class ForkingServiceDefinition 

    static const int FORKINGSERVICEDEFINITION__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int FORKINGSERVICEDEFINITION__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class JoiningServiceDefinition 

    static const int JOININGSERVICEDEFINITION__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int JOININGSERVICEDEFINITION__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class OneWayCommunicationService 

    static const int ONEWAYCOMMUNICATIONSERVICE__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int ONEWAYCOMMUNICATIONSERVICE__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class OptionalCoordinationService 

    // IDs for classifiers for class RequestAnswerServiceDefinition 

    static const int REQUESTANSWERSERVICEDEFINITION__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int REQUESTANSWERSERVICEDEFINITION__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // IDs for classifiers for class ServiceDefModel 

    // IDs for classifiers for class ServiceDefRepository 

    // IDs for classifiers for class ServiceProperty 

    // IDs for classifiers for class ServiceRepoVersion 

    // IDs for classifiers for class TwoWayCommunicationService 

    static const int TWOWAYCOMMUNICATIONSERVICE__NAME = ABSTRACTSERVICEDEFINITION__NAME;

    static const int TWOWAYCOMMUNICATIONSERVICE__PROPERTIES = ABSTRACTSERVICEDEFINITION__PROPERTIES;

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getServiceDefModel();

    virtual ::ecore::EClass_ptr getServiceDefRepository();

    virtual ::ecore::EClass_ptr getAbstractServiceDefinition();

    virtual ::ecore::EClass_ptr getCommRepoImport();

    virtual ::ecore::EClass_ptr getServiceRepoVersion();

    virtual ::ecore::EClass_ptr getServiceProperty();

    virtual ::ecore::EClass_ptr getCommunicationServiceDefinition();

    virtual ::ecore::EClass_ptr getCoordinationServiceDefinition();

    virtual ::ecore::EClass_ptr getForkingServiceDefinition();

    virtual ::ecore::EClass_ptr getRequestAnswerServiceDefinition();

    virtual ::ecore::EClass_ptr getOneWayCommunicationService();

    virtual ::ecore::EClass_ptr getTwoWayCommunicationService();

    virtual ::ecore::EClass_ptr getOptionalCoordinationService();

    virtual ::ecore::EClass_ptr getJoiningServiceDefinition();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getServiceDefModel__imports();

    virtual ::ecore::EReference_ptr getServiceDefModel__repository();

    virtual ::ecore::EAttribute_ptr getServiceDefRepository__name();

    virtual ::ecore::EReference_ptr getServiceDefRepository__version();

    virtual ::ecore::EReference_ptr getServiceDefRepository__services();

    virtual ::ecore::EAttribute_ptr getAbstractServiceDefinition__name();

    virtual ::ecore::EReference_ptr getAbstractServiceDefinition__properties();

    virtual ::ecore::EAttribute_ptr getCommRepoImport__importedNamespace();

    virtual ::ecore::EAttribute_ptr getServiceRepoVersion__major();

    virtual ::ecore::EAttribute_ptr getServiceRepoVersion__minor();

    virtual ::ecore::EAttribute_ptr getServiceRepoVersion__patch();

    virtual ::ecore::EAttribute_ptr getServiceProperty__name();

    virtual ::ecore::EReference_ptr getCoordinationServiceDefinition__statePattern();

    virtual ::ecore::EReference_ptr getCoordinationServiceDefinition__parameterPattern();

    virtual ::ecore::EReference_ptr getCoordinationServiceDefinition__wiringPattern();

    virtual ::ecore::EReference_ptr getCoordinationServiceDefinition__monitoringPattern();

    virtual ::ecore::EReference_ptr getCoordinationServiceDefinition__services();

    virtual ::ecore::EReference_ptr getForkingServiceDefinition__pattern();

    virtual ::ecore::EReference_ptr getRequestAnswerServiceDefinition__pattern();

    virtual ::ecore::EAttribute_ptr getOptionalCoordinationService__name();

    virtual ::ecore::EReference_ptr getOptionalCoordinationService__serviceref();

    virtual ::ecore::EReference_ptr getJoiningServiceDefinition__pattern();

protected:

    static ::ecore::Ptr< ServiceDefinitionPackage > s_instance;

    ServiceDefinitionPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ServiceDefModelEClass;

    ::ecore::EClass_ptr m_ServiceDefRepositoryEClass;

    ::ecore::EClass_ptr m_AbstractServiceDefinitionEClass;

    ::ecore::EClass_ptr m_CommRepoImportEClass;

    ::ecore::EClass_ptr m_ServiceRepoVersionEClass;

    ::ecore::EClass_ptr m_ServicePropertyEClass;

    ::ecore::EClass_ptr m_CommunicationServiceDefinitionEClass;

    ::ecore::EClass_ptr m_CoordinationServiceDefinitionEClass;

    ::ecore::EClass_ptr m_ForkingServiceDefinitionEClass;

    ::ecore::EClass_ptr m_RequestAnswerServiceDefinitionEClass;

    ::ecore::EClass_ptr m_OneWayCommunicationServiceEClass;

    ::ecore::EClass_ptr m_TwoWayCommunicationServiceEClass;

    ::ecore::EClass_ptr m_OptionalCoordinationServiceEClass;

    ::ecore::EClass_ptr m_JoiningServiceDefinitionEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_ServiceDefModel__imports;

    ::ecore::EReference_ptr m_ServiceDefModel__repository;

    ::ecore::EAttribute_ptr m_ServiceDefRepository__name;

    ::ecore::EReference_ptr m_ServiceDefRepository__version;

    ::ecore::EReference_ptr m_ServiceDefRepository__services;

    ::ecore::EAttribute_ptr m_AbstractServiceDefinition__name;

    ::ecore::EReference_ptr m_AbstractServiceDefinition__properties;

    ::ecore::EAttribute_ptr m_CommRepoImport__importedNamespace;

    ::ecore::EAttribute_ptr m_ServiceRepoVersion__major;

    ::ecore::EAttribute_ptr m_ServiceRepoVersion__minor;

    ::ecore::EAttribute_ptr m_ServiceRepoVersion__patch;

    ::ecore::EAttribute_ptr m_ServiceProperty__name;

    ::ecore::EReference_ptr m_CoordinationServiceDefinition__statePattern;

    ::ecore::EReference_ptr m_CoordinationServiceDefinition__parameterPattern;

    ::ecore::EReference_ptr m_CoordinationServiceDefinition__wiringPattern;

    ::ecore::EReference_ptr m_CoordinationServiceDefinition__monitoringPattern;

    ::ecore::EReference_ptr m_CoordinationServiceDefinition__services;

    ::ecore::EReference_ptr m_ForkingServiceDefinition__pattern;

    ::ecore::EReference_ptr m_RequestAnswerServiceDefinition__pattern;

    ::ecore::EAttribute_ptr m_OptionalCoordinationService__name;

    ::ecore::EReference_ptr m_OptionalCoordinationService__serviceref;

    ::ecore::EReference_ptr m_JoiningServiceDefinition__pattern;

};

}
 // serviceDefinition

#endif // _SERVICEDEFINITIONPACKAGE_HPP

