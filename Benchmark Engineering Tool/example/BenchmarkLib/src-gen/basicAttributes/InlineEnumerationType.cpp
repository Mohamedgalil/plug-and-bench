// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/InlineEnumerationType.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InlineEnumerationType.hpp"
#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/ArrayType.hpp>
#include <basicAttributes/EnumerationElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(InlineEnumerationType.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
InlineEnumerationType::InlineEnumerationType()
{

    m_enums.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::basicAttributes::EnumerationElement_ptr, -1, true, false >(
                    this,
                    ::basicAttributes::BasicAttributesPackage::_instance()->getInlineEnumerationType__enums()));

    /*PROTECTED REGION ID(InlineEnumerationTypeImpl__InlineEnumerationTypeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InlineEnumerationType::~InlineEnumerationType()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& InlineEnumerationType::getEnums() const
{
    return *m_enums;
}

::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& InlineEnumerationType::getEnums()
{
    return *m_enums;
}

