// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * parameterDefinition/ParameterSetDefinition.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterSetDefinition.hpp"
#include <parameterDefinition/AbstractParameter.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "parameterDefinition/ParameterDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ParameterSetDefinition.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::parameterDefinition;

// Default constructor
ParameterSetDefinition::ParameterSetDefinition()
{

    m_parameters.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::parameterDefinition::AbstractParameter_ptr, -1, true,
                    false >(this,
                    ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParameterSetDefinition__parameters()));
    m_extends.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::parameterDefinition::ParameterSetDefinition_ptr, -1,
                    false, false >(this,
                    ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParameterSetDefinition__extends()));

    /*PROTECTED REGION ID(ParameterSetDefinitionImpl__ParameterSetDefinitionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ParameterSetDefinition::~ParameterSetDefinition()
{
}

// Attributes

::ecore::EString const& ParameterSetDefinition::getName() const
{
    return m_name;
}

void ParameterSetDefinition::setName(::ecore::EString const& _name)
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
                ::parameterDefinition::ParameterDefinitionPackage::_instance()->getParameterSetDefinition__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::parameterDefinition::AbstractParameter_ptr >& ParameterSetDefinition::getParameters() const
{
    return *m_parameters;
}

::ecorecpp::mapping::EList< ::parameterDefinition::AbstractParameter_ptr >& ParameterSetDefinition::getParameters()
{
    return *m_parameters;
}

const ::ecorecpp::mapping::EList<
        ::parameterDefinition::ParameterSetDefinition_ptr >& ParameterSetDefinition::getExtends() const
{
    return *m_extends;
}

::ecorecpp::mapping::EList< ::parameterDefinition::ParameterSetDefinition_ptr >& ParameterSetDefinition::getExtends()
{
    return *m_extends;
}

