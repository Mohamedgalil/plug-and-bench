// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachineFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _STATEMACHINEFACTORY_HPP
#define _STATEMACHINEFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <stateMachine.hpp>

#include <stateMachine/dllStateMachine.hpp>

namespace stateMachine
{

    class EXPORT_STATEMACHINE_DLL StateMachineFactory : public virtual ::ecore::EFactory
    {
    public:

        static StateMachineFactory_ptr _instance();

        virtual StateTransition_ptr createStateTransition();
        virtual StateMachine_ptr createStateMachine();
        virtual AbstractMachineElement_ptr createAbstractMachineElement();
        virtual AbstractStateElement_ptr createAbstractStateElement();
        virtual State_ptr createState();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< StateMachineFactory > s_holder;

        StateMachineFactory();

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

    template< > inline StateTransition_ptr create< StateTransition >()
    {
        auto eFactory = StateMachinePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< StateMachineFactory* >(eFactory.get());
        return packageFactory->createStateTransition();
    }

    template< > inline StateMachine_ptr create< StateMachine >()
    {
        auto eFactory = StateMachinePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< StateMachineFactory* >(eFactory.get());
        return packageFactory->createStateMachine();
    }

    template< > inline AbstractMachineElement_ptr create< AbstractMachineElement >()
    {
        auto eFactory = StateMachinePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< StateMachineFactory* >(eFactory.get());
        return packageFactory->createAbstractMachineElement();
    }

    template< > inline AbstractStateElement_ptr create< AbstractStateElement >()
    {
        auto eFactory = StateMachinePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< StateMachineFactory* >(eFactory.get());
        return packageFactory->createAbstractStateElement();
    }

    template< > inline State_ptr create< State >()
    {
        auto eFactory = StateMachinePackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< StateMachineFactory* >(eFactory.get());
        return packageFactory->createState();
    }

} // stateMachine

#endif // _STATEMACHINEFACTORY_HPP

