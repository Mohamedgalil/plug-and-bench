// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_HPP
#define SERVICEDEFINITION_HPP

#include "serviceDefinition_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "serviceDefinition/ServiceDefModel.hpp"
#include "serviceDefinition/ServiceDefRepository.hpp"
#include "serviceDefinition/AbstractServiceDefinition.hpp"
#include "serviceDefinition/CommRepoImport.hpp"
#include "serviceDefinition/ServiceRepoVersion.hpp"
#include "serviceDefinition/ServiceProperty.hpp"
#include "serviceDefinition/CommunicationServiceDefinition.hpp"
#include "serviceDefinition/CoordinationServiceDefinition.hpp"
#include "serviceDefinition/ForkingServiceDefinition.hpp"
#include "serviceDefinition/RequestAnswerServiceDefinition.hpp"
#include "serviceDefinition/OneWayCommunicationService.hpp"
#include "serviceDefinition/TwoWayCommunicationService.hpp"
#include "serviceDefinition/OptionalCoordinationService.hpp"
#include "serviceDefinition/JoiningServiceDefinition.hpp"

// Package & Factory
#include "serviceDefinition/ServiceDefinitionPackage.hpp"
#include "serviceDefinition/ServiceDefinitionFactory.hpp"

#endif // SERVICEDEFINITION_HPP
