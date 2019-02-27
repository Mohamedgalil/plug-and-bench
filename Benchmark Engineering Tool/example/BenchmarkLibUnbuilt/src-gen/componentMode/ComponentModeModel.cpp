// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentModeModel.hpp"
#include <componentMode/ComponentModeRepository.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentMode/ComponentModePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentModeModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentMode;

// Default constructor
ComponentModeModel::ComponentModeModel() :
        m_repository(0)
{

    /*PROTECTED REGION ID(ComponentModeModelImpl__ComponentModeModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentModeModel::~ComponentModeModel()
{
    if (m_repository)
    {
        m_repository.reset();
    }
}

// Attributes

// References

::componentMode::ComponentModeRepository_ptr ComponentModeModel::getRepository() const
{
    return m_repository;
}

void ComponentModeModel::setRepository(
        ::componentMode::ComponentModeRepository_ptr _repository)
{
    if (m_repository)
        m_repository->_setEContainer(ComponentModeModel_ptr(),
                ::componentMode::ComponentModePackage::_instance()->getComponentModeModel__repository());
    if (_repository)
        _repository->_setEContainer(_this(),
                ::componentMode::ComponentModePackage::_instance()->getComponentModeModel__repository());

#ifdef ECORECPP_NOTIFICATION_API
    ::componentMode::ComponentModeRepository_ptr _old_repository = m_repository;
#endif
    m_repository = _repository;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentMode::ComponentModePackage::_instance()->getComponentModeModel__repository(),
                _old_repository,
                m_repository
        );
        eNotify(&notification);
    }
#endif
}

