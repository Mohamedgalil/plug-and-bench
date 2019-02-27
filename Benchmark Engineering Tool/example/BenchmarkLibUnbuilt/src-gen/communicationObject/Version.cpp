// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/Version.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Version.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Version.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
Version::Version()
{

    /*PROTECTED REGION ID(VersionImpl__VersionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Version::~Version()
{
}

// Attributes

::ecore::EInt Version::getMajor() const
{
    return m_major;
}

void Version::setMajor(::ecore::EInt _major)
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
                ::communicationObject::CommunicationObjectPackage::_instance()->getVersion__major(),
                _old_major,
                m_major
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Version::getMinor() const
{
    return m_minor;
}

void Version::setMinor(::ecore::EInt _minor)
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
                ::communicationObject::CommunicationObjectPackage::_instance()->getVersion__minor(),
                _old_minor,
                m_minor
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EInt Version::getPatch() const
{
    return m_patch;
}

void Version::setPatch(::ecore::EInt _patch)
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
                ::communicationObject::CommunicationObjectPackage::_instance()->getVersion__patch(),
                _old_patch,
                m_patch
        );
        eNotify(&notification);
    }
#endif
}

// References

