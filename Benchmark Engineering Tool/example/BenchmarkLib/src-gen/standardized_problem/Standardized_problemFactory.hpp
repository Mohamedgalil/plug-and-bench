// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Standardized_problemFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STANDARDIZED_PROBLEMFACTORY_HPP
#define _STANDARDIZED_PROBLEMFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <standardized_problem.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>

namespace standardized_problem
{

    class EXPORT_STANDARDIZED_PROBLEM_DLL Standardized_problemFactory : public virtual ::ecore::EFactory
    {
    public:

        static Standardized_problemFactory_ptr _instance();

        virtual StandardizedProblem_ptr createStandardizedProblem();
        virtual ScenarioDef_ptr createScenarioDef();
        virtual PerformanceMeasure_ptr createPerformanceMeasure();
        virtual DescriptorObject_ptr createDescriptorObject();
        virtual EnvironmentVariableDefinition_ptr createEnvironmentVariableDefinition();
        virtual IScoreElement_ptr createIScoreElement();
        virtual IScore_ptr createIScore();
        virtual Tuple_ptr createTuple();
        virtual WeightedPerfMeasure_ptr createWeightedPerfMeasure();
        virtual EnvironmentVariable_ptr createEnvironmentVariable();
        virtual BenchmarkConstraint_ptr createBenchmarkConstraint();
        virtual BenchmarkConstraintDefinition_ptr createBenchmarkConstraintDefinition();
        virtual BenchmarkAttributeDefinition_ptr createBenchmarkAttributeDefinition();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< Standardized_problemFactory > s_holder;

        Standardized_problemFactory();

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

    template< > inline StandardizedProblem_ptr create< StandardizedProblem >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createStandardizedProblem();
    }

    template< > inline ScenarioDef_ptr create< ScenarioDef >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createScenarioDef();
    }

    template< > inline PerformanceMeasure_ptr create< PerformanceMeasure >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createPerformanceMeasure();
    }

    template< > inline DescriptorObject_ptr create< DescriptorObject >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createDescriptorObject();
    }

    template< > inline EnvironmentVariableDefinition_ptr create<
            EnvironmentVariableDefinition >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createEnvironmentVariableDefinition();
    }

    template< > inline IScoreElement_ptr create< IScoreElement >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createIScoreElement();
    }

    template< > inline IScore_ptr create< IScore >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createIScore();
    }

    template< > inline Tuple_ptr create< Tuple >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createTuple();
    }

    template< > inline WeightedPerfMeasure_ptr create< WeightedPerfMeasure >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createWeightedPerfMeasure();
    }

    template< > inline EnvironmentVariable_ptr create< EnvironmentVariable >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createEnvironmentVariable();
    }

    template< > inline BenchmarkConstraint_ptr create< BenchmarkConstraint >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createBenchmarkConstraint();
    }

    template< > inline BenchmarkConstraintDefinition_ptr create<
            BenchmarkConstraintDefinition >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createBenchmarkConstraintDefinition();
    }

    template< > inline BenchmarkAttributeDefinition_ptr create<
            BenchmarkAttributeDefinition >()
    {
        auto eFactory =
                Standardized_problemPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< Standardized_problemFactory* >(eFactory.get());
        return packageFactory->createBenchmarkAttributeDefinition();
    }

} // standardized_problem

#endif // _STANDARDIZED_PROBLEMFACTORY_HPP

