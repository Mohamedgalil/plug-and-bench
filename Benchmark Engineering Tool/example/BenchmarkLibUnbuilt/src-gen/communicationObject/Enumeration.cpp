// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/Enumeration.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Enumeration.hpp"
#include <communicationObject/AbstractCommElement.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Enumeration.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
Enumeration::Enumeration()
{

    m_enums.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::basicAttributes::EnumerationElement_ptr, -1, true, false >(
                    this,
                    ::communicationObject::CommunicationObjectPackage::_instance()->getEnumeration__enums()));

    /*PROTECTED REGION ID(EnumerationImpl__EnumerationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Enumeration::~Enumeration()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& Enumeration::getEnums() const
{
    return *m_enums;
}

::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& Enumeration::getEnums()
{
    return *m_enums;
}

