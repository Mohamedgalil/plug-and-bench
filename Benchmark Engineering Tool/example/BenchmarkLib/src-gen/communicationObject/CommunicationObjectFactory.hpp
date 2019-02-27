// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObjectFactory.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONOBJECTFACTORY_HPP
#define _COMMUNICATIONOBJECTFACTORY_HPP

#include <ecore/EFactory.hpp>
#include <communicationObject.hpp>

#include <communicationObject/dllCommunicationObject.hpp>

namespace communicationObject
{

    class EXPORT_COMMUNICATIONOBJECT_DLL CommunicationObjectFactory : public virtual ::ecore::EFactory
    {
    public:

        static CommunicationObjectFactory_ptr _instance();

        virtual CommObjectModel_ptr createCommObjectModel();
        virtual CommObjectsRepository_ptr createCommObjectsRepository();
        virtual AbstractCommElement_ptr createAbstractCommElement();
        virtual CommRepositoryImport_ptr createCommRepositoryImport();
        virtual Version_ptr createVersion();
        virtual Enumeration_ptr createEnumeration();
        virtual CommunicationObject_ptr createCommunicationObject();
        virtual CommElementValue_ptr createCommElementValue();
        virtual CommElementReference_ptr createCommElementReference();

        virtual ::ecore::EObject_ptr create ( ::ecore::EClass_ptr _eClass);
        virtual ::ecore::EJavaObject createFromString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EString const& _literalValue);
        virtual ::ecore::EString convertToString ( ::ecore::EDataType_ptr _eDataType, ::ecore::EJavaObject const& _instanceValue);

    protected:

        static ::ecore::Ptr< CommunicationObjectFactory > s_holder;

        CommunicationObjectFactory();

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

    template< > inline CommObjectModel_ptr create< CommObjectModel >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommObjectModel();
    }

    template< > inline CommObjectsRepository_ptr create< CommObjectsRepository >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommObjectsRepository();
    }

    template< > inline AbstractCommElement_ptr create< AbstractCommElement >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createAbstractCommElement();
    }

    template< > inline CommRepositoryImport_ptr create< CommRepositoryImport >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommRepositoryImport();
    }

    template< > inline Version_ptr create< Version >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createVersion();
    }

    template< > inline Enumeration_ptr create< Enumeration >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createEnumeration();
    }

    template< > inline CommunicationObject_ptr create< CommunicationObject >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommunicationObject();
    }

    template< > inline CommElementValue_ptr create< CommElementValue >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommElementValue();
    }

    template< > inline CommElementReference_ptr create< CommElementReference >()
    {
        auto eFactory =
                CommunicationObjectPackage::_instance()->getEFactoryInstance();
        auto packageFactory =
                dynamic_cast< CommunicationObjectFactory* >(eFactory.get());
        return packageFactory->createCommElementReference();
    }

} // communicationObject

#endif // _COMMUNICATIONOBJECTFACTORY_HPP

