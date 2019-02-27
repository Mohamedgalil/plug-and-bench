// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterDefinitionFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _PARAMETERDEFINITIONFACTORY_HPP
#define _PARAMETERDEFINITIONFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <parameterDefinition.hpp>

#include <parameterDefinition/dllParameterDefinition.hpp>

namespace parameterDefinition
{

    class EXPORT_PARAMETERDEFINITION_DLL ParameterDefinitionFactory : public virtual ::ecore::EFactory
    {
    public:

        static ParameterDefinitionFactory_ptr _instance();

        virtual ParamDefModel_ptr createParamDefModel();
        virtual ParameterSetRepository_ptr createParameterSetRepository();
        virtual ParameterSetDefinition_ptr createParameterSetDefinition();
        virtual AbstractParameter_ptr createAbstractParameter();
        virtual ParameterDefinition_ptr createParameterDefinition();
        virtual TriggerDefinition_ptr createTriggerDefinition();
        virtual ParamDefRepoImport_ptr createParamDefRepoImport();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ParameterDefinitionFactory > s_holder;

        ParameterDefinitionFactory();

    };

    /** An object creation helper
     *
     * Usage (add namespaces as required):
     *   auto p = create<MyClass>();
     *
     */
    template< class T > inline ::ecore::Ptr< T > create()
    {
        return ::ecore::Ptr< T >();
    }

    template< > inline ParamDefModel_ptr create< ParamDefModel >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createParamDefModel();
    }

    template< > inline ParameterSetRepository_ptr create< ParameterSetRepository >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createParameterSetRepository();
    }

    template< > inline ParameterSetDefinition_ptr create< ParameterSetDefinition >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createParameterSetDefinition();
    }

    template< > inline AbstractParameter_ptr create< AbstractParameter >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createAbstractParameter();
    }

    template< > inline ParameterDefinition_ptr create< ParameterDefinition >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createParameterDefinition();
    }

    template< > inline TriggerDefinition_ptr create< TriggerDefinition >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createTriggerDefinition();
    }

    template< > inline ParamDefRepoImport_ptr create< ParamDefRepoImport >()
    {
        auto eFactory =
                ParameterDefinitionPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ParameterDefinitionFactory* >(eFactory.get());
        return packageFactory->createParamDefRepoImport();
    }

} // parameterDefinition

#endif // _PARAMETERDEFINITIONFACTORY_HPP

