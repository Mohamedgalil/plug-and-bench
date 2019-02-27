// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/PrimitiveType.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "PrimitiveType.hpp"
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(PrimitiveType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
PrimitiveType::PrimitiveType()
{

    /*PROTECTED REGION ID(PrimitiveTypeImpl__PrimitiveTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

PrimitiveType::~PrimitiveType()
{
}

// Attributes

::basicAttributes::PRIMITIVE_TYPE_NAME PrimitiveType::getTypeName() const
{
    return m_typeName;
}

void PrimitiveType::setTypeName(
        ::basicAttributes::PRIMITIVE_TYPE_NAME _typeName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::PRIMITIVE_TYPE_NAME _old_typeName = m_typeName;
#endif
    m_typeName = _typeName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getPrimitiveType__typeName(),
                _old_typeName,
                m_typeName
        );
        eNotify(&notification);
    }
#endif
}

// References

