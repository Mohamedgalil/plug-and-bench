// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/OneWayCommunicationService.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OneWayCommunicationService.hpp"
#include <serviceDefinition/CommunicationServiceDefinition.hpp>
#include <serviceDefinition/ServiceProperty.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(OneWayCommunicationService.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::serviceDefinition;

// Default constructor
OneWayCommunicationService::OneWayCommunicationService()
{

    /*PROTECTED REGION ID(OneWayCommunicationServiceImpl__OneWayCommunicationServiceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

OneWayCommunicationService::~OneWayCommunicationService()
{
}

// Attributes

// References

