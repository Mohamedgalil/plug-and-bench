// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AbstractAttributeType.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractAttributeType.hpp"
#include <basicAttributes/ArrayType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractAttributeType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
AbstractAttributeType::AbstractAttributeType() :
        m_array(0)
{

    /*PROTECTED REGION ID(AbstractAttributeTypeImpl__AbstractAttributeTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractAttributeType::~AbstractAttributeType()
{
    if (m_array)
    {
        m_array.reset();
    }
}

// Attributes

// References

::basicAttributes::ArrayType_ptr AbstractAttributeType::getArray() const
{
    return m_array;
}

void AbstractAttributeType::setArray(::basicAttributes::ArrayType_ptr _array)
{
    if (m_array)
        m_array->_setEContainer(AbstractAttributeType_ptr(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAbstractAttributeType__array());
    if (_array)
        _array->_setEContainer(_this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAbstractAttributeType__array());

#ifdef ECORECPP_NOTIFICATION_API
    ::basicAttributes::ArrayType_ptr _old_array = m_array;
#endif
    m_array = _array;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::basicAttributes::BasicAttributesPackage::_instance()->getAbstractAttributeType__array(),
                _old_array,
                m_array
        );
        eNotify(&notification);
    }
#endif
}

