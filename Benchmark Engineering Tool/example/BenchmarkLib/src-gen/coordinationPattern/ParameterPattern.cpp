// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/ParameterPattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ParameterPattern.hpp"
#include <coordinationPattern/CoordinationPattern.hpp>
#include <parameterDefinition/ParameterSetDefinition.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "coordinationPattern/CoordinationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ParameterPattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::coordinationPattern;

// Default constructor
ParameterPattern::ParameterPattern() :
        m_parameterSet(0)
{

    /*PROTECTED REGION ID(ParameterPatternImpl__ParameterPatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ParameterPattern::~ParameterPattern()
{
}

// Attributes

// References

::parameterDefinition::ParameterSetDefinition_ptr ParameterPattern::getParameterSet() const
{
    return m_parameterSet;
}

void ParameterPattern::setParameterSet(
        ::parameterDefinition::ParameterSetDefinition_ptr _parameterSet)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::parameterDefinition::ParameterSetDefinition_ptr _old_parameterSet = m_parameterSet;
#endif
    m_parameterSet = _parameterSet;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::coordinationPattern::CoordinationPatternPackage::_instance()->getParameterPattern__parameterSet(),
                _old_parameterSet,
                m_parameterSet
        );
        eNotify(&notification);
    }
#endif
}

