// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/AbstractServiceDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AbstractServiceDefinition.hpp"
#include <serviceDefinition/ServiceProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(AbstractServiceDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
AbstractServiceDefinition::AbstractServiceDefinition()
{

    m_properties.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::serviceDefinition::ServiceProperty_ptr, -1, true, false >(
                    this,
                    ::serviceDefinition::ServiceDefinitionPackage::_instance()->getAbstractServiceDefinition__properties()));

    /*PROTECTED REGION ID(AbstractServiceDefinitionImpl__AbstractServiceDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AbstractServiceDefinition::~AbstractServiceDefinition()
{
}

// Attributes

::ecore::EString const& AbstractServiceDefinition::getName() const
{
    return m_name;
}

void AbstractServiceDefinition::setName(::ecore::EString const& _name)
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
                ::serviceDefinition::ServiceDefinitionPackage::_instance()->getAbstractServiceDefinition__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::serviceDefinition::ServiceProperty_ptr >& AbstractServiceDefinition::getProperties() const
{
    return *m_properties;
}

::ecorecpp::mapping::EList< ::serviceDefinition::ServiceProperty_ptr >& AbstractServiceDefinition::getProperties()
{
    return *m_properties;
}

