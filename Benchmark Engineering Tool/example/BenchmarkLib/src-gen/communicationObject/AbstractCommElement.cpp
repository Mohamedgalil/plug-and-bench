// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/AbstractCommElement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractCommElement.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractCommElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
AbstractCommElement::AbstractCommElement()
{

    /*PROTECTED REGION ID(AbstractCommElementImpl__AbstractCommElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractCommElement::~AbstractCommElement()
{
}

// Attributes

::ecore::EString const& AbstractCommElement::getName() const
{
    return m_name;
}

void AbstractCommElement::setName(::ecore::EString const& _name)
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
                ::communicationObject::CommunicationObjectPackage::_instance()->getAbstractCommElement__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

