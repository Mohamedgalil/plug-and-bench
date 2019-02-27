// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentPort.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentPort.hpp"
#include <componentDefinition/NamedComponentElement.hpp>
#include <componentDefinition/ComponentPortExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentPort.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
ComponentPort::ComponentPort()
{

    m_extensions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentDefinition::ComponentPortExtension_ptr, -1, true,
                    false >(this,
                    ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentPort__extensions()));

    /*PROTECTED REGION ID(ComponentPortImpl__ComponentPortImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentPort::~ComponentPort()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList<
        ::componentDefinition::ComponentPortExtension_ptr >& ComponentPort::getExtensions() const
{
    return *m_extensions;
}

::ecorecpp::mapping::EList< ::componentDefinition::ComponentPortExtension_ptr >& ComponentPort::getExtensions()
{
    return *m_extensions;
}

