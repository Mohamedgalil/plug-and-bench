// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommObjectModel.hpp"
#include <communicationObject/CommObjectsRepository.hpp>
#include <communicationObject/CommRepositoryImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommObjectModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommObjectModel::CommObjectModel() :
        m_repository(0)
{

    m_imports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::communicationObject::CommRepositoryImport_ptr, -1, true,
                    false >(this,
                    ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectModel__imports()));

    /*PROTECTED REGION ID(CommObjectModelImpl__CommObjectModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommObjectModel::~CommObjectModel()
{
    if (m_repository)
    {
        m_repository.reset();
    }
}

// Attributes

// References

::communicationObject::CommObjectsRepository_ptr CommObjectModel::getRepository() const
{
    return m_repository;
}

void CommObjectModel::setRepository(
        ::communicationObject::CommObjectsRepository_ptr _repository)
{
    if (m_repository)
        m_repository->_setEContainer(CommObjectModel_ptr(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectModel__repository());
    if (_repository)
        _repository->_setEContainer(_this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectModel__repository());

#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::CommObjectsRepository_ptr _old_repository = m_repository;
#endif
    m_repository = _repository;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommObjectModel__repository(),
                _old_repository,
                m_repository
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList<
        ::communicationObject::CommRepositoryImport_ptr >& CommObjectModel::getImports() const
{
    return *m_imports;
}

::ecorecpp::mapping::EList< ::communicationObject::CommRepositoryImport_ptr >& CommObjectModel::getImports()
{
    return *m_imports;
}

