// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMPONENTMODEFACTORY_HPP
#define _COMPONENTMODEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <componentMode.hpp>

#include <componentMode/dllComponentMode.hpp>

namespace componentMode
{

    class EXPORT_COMPONENTMODE_DLL ComponentModeFactory : public virtual ::ecore::EFactory
    {
    public:

        static ComponentModeFactory_ptr _instance();

        virtual ComponentModeModel_ptr createComponentModeModel();
        virtual ComponentModeRepository_ptr createComponentModeRepository();
        virtual ComponentModeCollection_ptr createComponentModeCollection();
        virtual ComponentModeDefinition_ptr createComponentModeDefinition();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< ComponentModeFactory > s_holder;

        ComponentModeFactory();

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

    template< > inline ComponentModeModel_ptr create< ComponentModeModel >()
    {
        auto eFactory =
                ComponentModePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentModeFactory* >(eFactory.get());
        return packageFactory->createComponentModeModel();
    }

    template< > inline ComponentModeRepository_ptr create<
            ComponentModeRepository >()
    {
        auto eFactory =
                ComponentModePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentModeFactory* >(eFactory.get());
        return packageFactory->createComponentModeRepository();
    }

    template< > inline ComponentModeCollection_ptr create<
            ComponentModeCollection >()
    {
        auto eFactory =
                ComponentModePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentModeFactory* >(eFactory.get());
        return packageFactory->createComponentModeCollection();
    }

    template< > inline ComponentModeDefinition_ptr create<
            ComponentModeDefinition >()
    {
        auto eFactory =
                ComponentModePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< ComponentModeFactory* >(eFactory.get());
        return packageFactory->createComponentModeDefinition();
    }

} // componentMode

#endif // _COMPONENTMODEFACTORY_HPP

