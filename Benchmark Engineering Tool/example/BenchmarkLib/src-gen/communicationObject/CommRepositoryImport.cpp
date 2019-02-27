// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommRepositoryImport.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommRepositoryImport.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommRepositoryImport.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommRepositoryImport::CommRepositoryImport()
{

    /*PROTECTED REGION ID(CommRepositoryImportImpl__CommRepositoryImportImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommRepositoryImport::~CommRepositoryImport()
{
}

// Attributes

::ecore::EString const& CommRepositoryImport::getImportedNamespace() const
{
    return m_importedNamespace;
}

void CommRepositoryImport::setImportedNamespace(
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
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommRepositoryImport__importedNamespace(),
                _old_importedNamespace,
                m_importedNamespace
        );
        eNotify(&notification);
    }
#endif
}

// References

