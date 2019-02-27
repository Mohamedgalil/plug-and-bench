// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParamDefModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParamDefModel.hpp"
#include <parameterDefinition/ParameterSetRepository.hpp>
#include <parameterDefinition/ParamDefRepoImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "parameterDefinition/ParameterDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ParamDefModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

// Default constructor
ParamDefModel::ParamDefModel() :
        m_repository(0)
{

    m_imports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::parameterDefinition::ParamDefRepoImport_ptr, -1, true,
                    false >(this,
                    ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParamDefModel__imports()));

    /*PROTECTED REGION ID(ParamDefModelImpl__ParamDefModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ParamDefModel::~ParamDefModel()
{
    if (m_repository)
    {
        m_repository.reset();
    }
}

// Attributes

// References

::parameterDefinition::ParameterSetRepository_ptr ParamDefModel::getRepository() const
{
    return m_repository;
}

void ParamDefModel::setRepository(
        ::parameterDefinition::ParameterSetRepository_ptr _repository)
{
    if (m_repository)
        m_repository->_setEContainer(ParamDefModel_ptr(),
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParamDefModel__repository());
    if (_repository)
        _repository->_setEContainer(_this(),
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParamDefModel__repository());

#ifdef ECORECPP_NOTIFICATION_API
    ::parameterDefinition::ParameterSetRepository_ptr _old_repository = m_repository;
#endif
    m_repository = _repository;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParamDefModel__repository(),
                _old_repository,
                m_repository
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::parameterDefinition::ParamDefRepoImport_ptr >& ParamDefModel::getImports() const
{
    return *m_imports;
}

::ecorecpp::mapping::EList< ::parameterDefinition::ParamDefRepoImport_ptr >& ParamDefModel::getImports()
{
    return *m_imports;
}

