// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/ArrayValue.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ArrayValue.hpp"
#include <basicAttributes/AbstractValue.hpp>
#include <basicAttributes/SingleValue.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "basicAttributes/BasicAttributesPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ArrayValue.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::basicAttributes;

// Default constructor
ArrayValue::ArrayValue()
{

    m_values.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::basicAttributes::SingleValue_ptr, -1, true, false >(this,
                    ::basicAttributes::BasicAttributesPackage::_instance()->getArrayValue__values()));

    /*PROTECTED REGION ID(ArrayValueImpl__ArrayValueImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ArrayValue::~ArrayValue()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::basicAttributes::SingleValue_ptr >& ArrayValue::getValues() const
{
    return *m_values;
}

::ecorecpp::mapping::EList< ::basicAttributes::SingleValue_ptr >& ArrayValue::getValues()
{
    return *m_values;
}

