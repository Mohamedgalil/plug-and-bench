// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentDefinition.hpp"
#include <componentDefinition/AbstractComponentElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
ComponentDefinition::ComponentDefinition()
{

    m_elements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentDefinition::AbstractComponentElement_ptr, -1,
                    true, false >(this,
                    ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefinition__elements()));

    /*PROTECTED REGION ID(ComponentDefinitionImpl__ComponentDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentDefinition::~ComponentDefinition()
{
}

// Attributes

::ecore::EString const& ComponentDefinition::getName() const
{
    return m_name;
}

void ComponentDefinition::setName(::ecore::EString const& _name)
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
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefinition__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList<
        ::componentDefinition::AbstractComponentElement_ptr >& ComponentDefinition::getElements() const
{
    return *m_elements;
}

::ecorecpp::mapping::EList< ::componentDefinition::AbstractComponentElement_ptr >& ComponentDefinition::getElements()
{
    return *m_elements;
}

