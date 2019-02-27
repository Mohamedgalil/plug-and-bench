// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONPATTERNFACTORY_HPP
#define _COMMUNICATIONPATTERNFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <communicationPattern.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>

namespace communicationPattern
{

    class EXPORT_COMMUNICATIONPATTERN_DLL CommunicationPatternFactory : public virtual ::ecore::EFactory
    {
    public:

        static CommunicationPatternFactory_ptr _instance();

        virtual CommunicationPattern_ptr createCommunicationPattern();
        virtual PushPattern_ptr createPushPattern();
        virtual QueryPattern_ptr createQueryPattern();
        virtual EventPattern_ptr createEventPattern();
        virtual SendPattern_ptr createSendPattern();
        virtual ForkingPattern_ptr createForkingPattern();
        virtual JoiningPattern_ptr createJoiningPattern();
        virtual RequestAnswerPattern_ptr createRequestAnswerPattern();
        virtual OneWayCommunicationPattern_ptr createOneWayCommunicationPattern();
        virtual TwoWayCommunicationPattern_ptr createTwoWayCommunicationPattern();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< CommunicationPatternFactory > s_holder;

        CommunicationPatternFactory();

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

    template< > inline CommunicationPattern_ptr create< CommunicationPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createCommunicationPattern();
    }

    template< > inline PushPattern_ptr create< PushPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createPushPattern();
    }

    template< > inline QueryPattern_ptr create< QueryPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createQueryPattern();
    }

    template< > inline EventPattern_ptr create< EventPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createEventPattern();
    }

    template< > inline SendPattern_ptr create< SendPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createSendPattern();
    }

    template< > inline ForkingPattern_ptr create< ForkingPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createForkingPattern();
    }

    template< > inline JoiningPattern_ptr create< JoiningPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createJoiningPattern();
    }

    template< > inline RequestAnswerPattern_ptr create< RequestAnswerPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createRequestAnswerPattern();
    }

    template< > inline OneWayCommunicationPattern_ptr create<
            OneWayCommunicationPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createOneWayCommunicationPattern();
    }

    template< > inline TwoWayCommunicationPattern_ptr create<
            TwoWayCommunicationPattern >()
    {
        auto eFactory =
                CommunicationPatternPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationPatternFactory* >(eFactory.get());
        return packageFactory->createTwoWayCommunicationPattern();
    }

} // communicationPattern

#endif // _COMMUNICATIONPATTERNFACTORY_HPP

