// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/DescriptorObject.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "DescriptorObject.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(DescriptorObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
DescriptorObject::DescriptorObject()
{

    /*PROTECTED REGION ID(DescriptorObjectImpl__DescriptorObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

DescriptorObject::~DescriptorObject()
{
}

// Attributes

::ecore::EString const& DescriptorObject::getLabel() const
{
    return m_label;
}

void DescriptorObject::setLabel(::ecore::EString const& _label)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_label = m_label;
#endif
    m_label = _label;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getDescriptorObject__label(),
                _old_label,
                m_label
        );
        eNotify(&notification);
    }
#endif
}

::ecore::EString const& DescriptorObject::getDescription() const
{
    return m_description;
}

void DescriptorObject::setDescription(::ecore::EString const& _description)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_description = m_description;
#endif
    m_description = _description;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getDescriptorObject__description(),
                _old_description,
                m_description
        );
        eNotify(&notification);
    }
#endif
}

// References

