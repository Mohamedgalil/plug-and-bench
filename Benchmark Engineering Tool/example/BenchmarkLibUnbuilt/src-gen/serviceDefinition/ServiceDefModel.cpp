// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/ServiceDefModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ServiceDefModel.hpp"
#include <serviceDefinition/CommRepoImport.hpp>
#include <serviceDefinition/ServiceDefRepository.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ServiceDefModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
ServiceDefModel::ServiceDefModel() :
        m_repository(0)
{

    m_imports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::CommRepoImport_ptr, -1, true, false >(
                    this,
                    ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefModel__imports()));

    /*PROTECTED REGION ID(ServiceDefModelImpl__ServiceDefModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ServiceDefModel::~ServiceDefModel()
{
    if (m_repository)
    {
        m_repository.reset();
    }
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::serviceDefinition::CommRepoImport_ptr >& ServiceDefModel::getImports() const
{
    return *m_imports;
}

::ecorecpp::mapping::EList< ::serviceDefinition::CommRepoImport_ptr >& ServiceDefModel::getImports()
{
    return *m_imports;
}

::serviceDefinition::ServiceDefRepository_ptr ServiceDefModel::getRepository() const
{
    return m_repository;
}

void ServiceDefModel::setRepository(
        ::serviceDefinition::ServiceDefRepository_ptr _repository)
{
    if (m_repository)
        m_repository->_setEContainer(ServiceDefModel_ptr(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefModel__repository());
    if (_repository)
        _repository->_setEContainer(_this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefModel__repository());

#ifdef ECORECPP_NOTIFICATION_API
    ::serviceDefinition::ServiceDefRepository_ptr _old_repository = m_repository;
#endif
    m_repository = _repository;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getServiceDefModel__repository(),
                _old_repository,
                m_repository
        );
        eNotify(&notification);
    }
#endif
}

