// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParamDefRepoImport.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParamDefRepoImport.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "parameterDefinition/ParameterDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ParamDefRepoImport.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

// Default constructor
ParamDefRepoImport::ParamDefRepoImport()
{

    /*PROTECTED REGION ID(ParamDefRepoImportImpl__ParamDefRepoImportImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ParamDefRepoImport::~ParamDefRepoImport()
{
}

// Attributes

::ecore::EString const& ParamDefRepoImport::getImportedNamespace() const
{
    return m_importedNamespace;
}

void ParamDefRepoImport::setImportedNamespace(
        ::ecore::EString const& _importedNamespace)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_importedNamespace = m_importedNamespace;
#endif
    m_importedNamespace = _importedNamespace;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParamDefRepoImport__importedNamespace(),
                _old_importedNamespace,
                m_importedNamespace
        );
        eNotify(&notification);
    }
#endif
}

// References

