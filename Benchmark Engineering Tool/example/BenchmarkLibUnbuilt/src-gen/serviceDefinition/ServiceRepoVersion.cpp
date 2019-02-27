// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceRepoVersion.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceRepoVersion.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ServiceRepoVersion.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
ServiceRepoVersion::ServiceRepoVersion()
{

    /*PROTECTED REGION ID(ServiceRepoVersionImpl__ServiceRepoVersionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ServiceRepoVersion::~ServiceRepoVersion()
{
}

// Attributes

::ecore::EInt ServiceRepoVersion::getMajor() const
{
    return m_major;
}

void ServiceRepoVersion::setMajor(::ecore::EInt _major)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_major = m_major;
#endif
    m_major = _major;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceRepoVersion__major(),
                _old_major,
                m_major
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ServiceRepoVersion::getMinor() const
{
    return m_minor;
}

void ServiceRepoVersion::setMinor(::ecore::EInt _minor)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_minor = m_minor;
#endif
    m_minor = _minor;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceRepoVersion__minor(),
                _old_minor,
                m_minor
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt ServiceRepoVersion::getPatch() const
{
    return m_patch;
}

void ServiceRepoVersion::setPatch(::ecore::EInt _patch)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EInt _old_patch = m_patch;
#endif
    m_patch = _patch;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceRepoVersion__patch(),
                _old_patch,
                m_patch
        );
        eNotify(&notification);
    }
#endif
}

// References

