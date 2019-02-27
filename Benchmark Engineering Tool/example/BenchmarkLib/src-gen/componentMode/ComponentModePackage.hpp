// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModePackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTMODEPACKAGE_HPP
#define _COMPONENTMODEPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <componentMode_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <componentMode/dllComponentMode.hpp>

namespace componentMode
{

class EXPORT_COMPONENTMODE_DLL ComponentModePackage : public virtual ::ecore::EPackage
{
public:

    static ComponentModePackage_ptr _instance();
    static ComponentModePackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int COMPONENTMODECOLLECTION = 0;

    static const int COMPONENTMODEDEFINITION = 1;

    static const int COMPONENTMODEMODEL = 2;

    static const int COMPONENTMODEREPOSITORY = 3;

    static const int COMPONENTMODEMODEL__REPOSITORY = 0;

    static const int COMPONENTMODEREPOSITORY__NAME = 1;

    static const int COMPONENTMODEREPOSITORY__COLLECTIONS = 2;

    static const int COMPONENTMODECOLLECTION__NAME = 3;

    static const int COMPONENTMODECOLLECTION__MODES = 4;

    static const int COMPONENTMODEDEFINITION__NAME = 5;

    // IDs for classifiers for class ComponentModeCollection 

    // IDs for classifiers for class ComponentModeDefinition 

    // IDs for classifiers for class ComponentModeModel 

    // IDs for classifiers for class ComponentModeRepository 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getComponentModeModel();

    virtual ::ecore::EClass_ptr getComponentModeRepository();

    virtual ::ecore::EClass_ptr getComponentModeCollection();

    virtual ::ecore::EClass_ptr getComponentModeDefinition();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getComponentModeModel__repository();

    virtual ::ecore::EAttribute_ptr getComponentModeRepository__name();

    virtual ::ecore::EReference_ptr getComponentModeRepository__collections();

    virtual ::ecore::EAttribute_ptr getComponentModeCollection__name();

    virtual ::ecore::EReference_ptr getComponentModeCollection__modes();

    virtual ::ecore::EAttribute_ptr getComponentModeDefinition__name();

protected:

    static ::ecore::Ptr< ComponentModePackage > s_instance;

    ComponentModePackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_ComponentModeModelEClass;

    ::ecore::EClass_ptr m_ComponentModeRepositoryEClass;

    ::ecore::EClass_ptr m_ComponentModeCollectionEClass;

    ::ecore::EClass_ptr m_ComponentModeDefinitionEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_ComponentModeModel__repository;

    ::ecore::EAttribute_ptr m_ComponentModeRepository__name;

    ::ecore::EReference_ptr m_ComponentModeRepository__collections;

    ::ecore::EAttribute_ptr m_ComponentModeCollection__name;

    ::ecore::EReference_ptr m_ComponentModeCollection__modes;

    ::ecore::EAttribute_ptr m_ComponentModeDefinition__name;

};

}
 // componentMode

#endif // _COMPONENTMODEPACKAGE_HPP

