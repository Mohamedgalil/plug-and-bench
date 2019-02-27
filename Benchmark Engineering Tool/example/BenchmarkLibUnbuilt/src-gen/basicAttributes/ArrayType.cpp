// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/ArrayType.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrayType.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ArrayType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
ArrayType::ArrayType()
{

    /*PROTECTED REGION ID(ArrayTypeImpl__ArrayTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ArrayType::~ArrayType()
{
}

// Attributes

::basicAttributes::Cardinality ArrayType::getLength() const
{
    return m_length;
}

void ArrayType::setLength(::basicAttributes::Cardinality _length)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::Cardinality _old_length = m_length;
#endif
    m_length = _length;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getArrayType__length(),
                _old_length,
                m_length
        );
        eNotify(&notification);
    }
#endif
}

// References

