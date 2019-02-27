// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentSubNode.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentSubNode.hpp"
#include <componentDefinition/NamedComponentElement.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentSubNode.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
ComponentSubNode::ComponentSubNode()
{

    m_links.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentDefinition::AbstractComponentLink_ptr, -1, true,
                    false >(this,
                    ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentSubNode__links()));

    /*PROTECTED REGION ID(ComponentSubNodeImpl__ComponentSubNodeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentSubNode::~ComponentSubNode()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList<
        ::componentDefinition::AbstractComponentLink_ptr >& ComponentSubNode::getLinks() const
{
    return *m_links;
}

::ecorecpp::mapping::EList< ::componentDefinition::AbstractComponentLink_ptr >& ComponentSubNode::getLinks()
{
    return *m_links;
}
