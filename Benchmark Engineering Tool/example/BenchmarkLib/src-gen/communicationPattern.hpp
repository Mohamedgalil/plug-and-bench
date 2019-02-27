// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONPATTERN_HPP
#define COMMUNICATIONPATTERN_HPP

#include "communicationPattern_forward.hpp"
#include <boost/intrusive_ptr.hpp>
#include <ecorecpp/mapping.hpp>

// EPackage

// EClass
#include "communicationPattern/CommunicationPattern.hpp"
#include "communicationPattern/PushPattern.hpp"
#include "communicationPattern/QueryPattern.hpp"
#include "communicationPattern/EventPattern.hpp"
#include "communicationPattern/SendPattern.hpp"
#include "communicationPattern/ForkingPattern.hpp"
#include "communicationPattern/JoiningPattern.hpp"
#include "communicationPattern/RequestAnswerPattern.hpp"
#include "communicationPattern/OneWayCommunicationPattern.hpp"
#include "communicationPattern/TwoWayCommunicationPattern.hpp"

// Package & Factory
#include "communicationPattern/CommunicationPatternPackage.hpp"
#include "communicationPattern/CommunicationPatternFactory.hpp"

#endif // COMMUNICATIONPATTERN_HPP
