// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectsRepository.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommObjectsRepository.hpp"
#include <communicationObject/AbstractCommElement.hpp>
#include <communicationObject/Version.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommObjectsRepository.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommObjectsRepository::CommObjectsRepository() :
        m_version(0)
{

    m_elements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::communicationObject::AbstractCommElement_ptr, -1, true,
                    false >(this,
                    ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__elements()));

    /*PROTECTED REGION ID(CommObjectsRepositoryImpl__CommObjectsRepositoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommObjectsRepository::~CommObjectsRepository()
{
    if (m_version)
    {
        m_version.reset();
    }
}

// Attributes

::ecore::EString const& CommObjectsRepository::getName() const
{
    return m_name;
}

void CommObjectsRepository::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& CommObjectsRepository::getDependency() const
{
    return m_dependency;
}

void CommObjectsRepository::setDependency(::ecore::EString const& _dependency)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_dependency = m_dependency;
#endif
    m_dependency = _dependency;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__dependency(),
                _old_dependency,
                m_dependency
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::communicationObject::AbstractCommElement_ptr >& CommObjectsRepository::getElements() const
{
    return *m_elements;
}

::ecorecpp::mapping::EList< ::communicationObject::AbstractCommElement_ptr >& CommObjectsRepository::getElements()
{
    return *m_elements;
}

::communicationObject::Version_ptr CommObjectsRepository::getVersion() const
{
    return m_version;
}

void CommObjectsRepository::setVersion(
        ::communicationObject::Version_ptr _version)
{
    if (m_version)
        m_version->_setEContainer(CommObjectsRepository_ptr(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__version());
    if (_version)
        _version->_setEContainer(_this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__version());

#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::Version_ptr _old_version = m_version;
#endif
    m_version = _version;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectsRepository__version(),
                _old_version,
                m_version
        );
        eNotify(&notification);
    }
#endif
}

