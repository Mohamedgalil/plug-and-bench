// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommElementReference.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommElementReference.hpp"
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <communicationObject/AbstractCommElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommElementReference.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommElementReference::CommElementReference() :
        m_typeName(0)
{

    /*PROTECTED REGION ID(CommElementReferenceImpl__CommElementReferenceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommElementReference::~CommElementReference()
{
}

// Attributes

// References

::communicationObject::AbstractCommElement_ptr CommElementReference::getTypeName() const
{
    return m_typeName;
}

void CommElementReference::setTypeName(
        ::communicationObject::AbstractCommElement_ptr _typeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::communicationObject::AbstractCommElement_ptr _old_typeName = m_typeName;
#endif
    m_typeName = _typeName;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::communicationObject::CommunicationObjectPackage::_instance()->getCommElementReference__typeName(),
                _old_typeName,
                m_typeName
        );
        eNotify(&notification);
    }
#endif
}

