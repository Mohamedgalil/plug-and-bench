// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/Activity.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Activity.hpp"
#include <componentDefinition/ComponentSubNode.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>
#include <componentDefinition/ActivityExtension.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(Activity.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
Activity::Activity()
{

    m_extensions.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentDefinition::ActivityExtension_ptr, -1, true,
                    false >(this,
                    ::componentDefinition::ComponentDefinitionPackage::_instance()->getActivity__extensions()));

    /*PROTECTED REGION ID(ActivityImpl__ActivityImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Activity::~Activity()
{
}

// Attributes

// References

const ::ecorecpp::mapping::EList< ::componentDefinition::ActivityExtension_ptr >& Activity::getExtensions() const
{
    return *m_extensions;
}

::ecorecpp::mapping::EList< ::componentDefinition::ActivityExtension_ptr >& Activity::getExtensions()
{
    return *m_extensions;
}

