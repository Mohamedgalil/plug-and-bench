// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPatternFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COORDINATIONPATTERNFACTORY_HPP
#define _COORDINATIONPATTERNFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <coordinationPattern.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>

namespace coordinationPattern
{

    class EXPORT_COORDINATIONPATTERN_DLL CoordinationPatternFactory : public virtual ::ecore::EFactory
    {
    public:

        static CoordinationPatternFactory_ptr _instance();

        virtual CoordinationPattern_ptr createCoordinationPattern();
        virtual StatePattern_ptr createStatePattern();
        virtual ParameterPattern_ptr createParameterPattern();
        virtual DynamicWiringPattern_ptr createDynamicWiringPattern();
        virtual MonitoringPattern_ptr createMonitoringPattern();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< CoordinationPatternFactory > s_holder;

        CoordinationPatternFactory();

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

    template< > inline CoordinationPattern_ptr create< CoordinationPattern >()
    {
        auto eFactory =
                CoordinationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CoordinationPatternFactory* >(eFactory.get());
        return packageFactory->createCoordinationPattern();
    }

    template< > inline StatePattern_ptr create< StatePattern >()
    {
        auto eFactory =
                CoordinationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CoordinationPatternFactory* >(eFactory.get());
        return packageFactory->createStatePattern();
    }

    template< > inline ParameterPattern_ptr create< ParameterPattern >()
    {
        auto eFactory =
                CoordinationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CoordinationPatternFactory* >(eFactory.get());
        return packageFactory->createParameterPattern();
    }

    template< > inline DynamicWiringPattern_ptr create< DynamicWiringPattern >()
    {
        auto eFactory =
                CoordinationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CoordinationPatternFactory* >(eFactory.get());
        return packageFactory->createDynamicWiringPattern();
    }

    template< > inline MonitoringPattern_ptr create< MonitoringPattern >()
    {
        auto eFactory =
                CoordinationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CoordinationPatternFactory* >(eFactory.get());
        return packageFactory->createMonitoringPattern();
    }

} // coordinationPattern

#endif // _COORDINATIONPATTERNFACTORY_HPP

