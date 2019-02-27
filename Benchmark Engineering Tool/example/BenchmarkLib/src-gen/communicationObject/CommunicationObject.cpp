// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObject.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CommunicationObject.hpp"
#include <communicationObject/AbstractCommElement.hpp>
#include <basicAttributes/AttributeDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationObject/CommunicationObjectPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(CommunicationObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationObject;

// Default constructor
CommunicationObject::CommunicationObject()
{

    m_attributes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::basicAttributes::AttributeDefinition_ptr, -1, true, false >(
                    this,
                    ::communicationObject::CommunicationObjectPackage::_instance()->getCommunicationObject__attributes()));

    /*PROTECTED REGION ID(CommunicationObjectImpl__CommunicationObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CommunicationObject::~CommunicationObject()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& CommunicationObject::getAttributes() const
{
    return *m_attributes;
}

::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& CommunicationObject::getAttributes()
{
    return *m_attributes;
}

