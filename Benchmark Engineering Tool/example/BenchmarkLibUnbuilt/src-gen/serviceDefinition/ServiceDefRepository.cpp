// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefRepository.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceDefRepository.hpp"
#include <serviceDefinition/ServiceRepoVersion.hpp>
#include <serviceDefinition/AbstractServiceDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ServiceDefRepository.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
ServiceDefRepository::ServiceDefRepository() :
        m_version(0)
{

    m_services.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::AbstractServiceDefinition_ptr, -1,
                    true, false >(this,
                    ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefRepository__services()));

    /*PROTECTED REGION ID(ServiceDefRepositoryImpl__ServiceDefRepositoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ServiceDefRepository::~ServiceDefRepository()
{
    if (m_version)
    {
        m_version.reset();
    }
}

// Attributes

::ecore::EString const& ServiceDefRepository::getName() const
{
    return m_name;
}

void ServiceDefRepository::setName(::ecore::EString const& _name)
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
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefRepository__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

::serviceDefinition::ServiceRepoVersion_ptr ServiceDefRepository::getVersion() const
{
    return m_version;
}

void ServiceDefRepository::setVersion(
        ::serviceDefinition::ServiceRepoVersion_ptr _version)
{
    if (m_version)
        m_version->_setEContainer(ServiceDefRepository_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefRepository__version());
    if (_version)
        _version->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefRepository__version());

#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::ServiceRepoVersion_ptr _old_version = m_version;
#endif
    m_version = _version;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefRepository__version(),
                _old_version,
                m_version
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList<
        ::serviceDefinition::AbstractServiceDefinition_ptr >& ServiceDefRepository::getServices() const
{
    return *m_services;
}

::ecorecpp::mapping::EList< ::serviceDefinition::AbstractServiceDefinition_ptr >& ServiceDefRepository::getServices()
{
    return *m_services;
}

