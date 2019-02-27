// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern_forward.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONPATTERN_FORWARD_HPP
#define _COMMUNICATIONPATTERN_FORWARD_HPP

#include <ecorecpp/mapping_forward.hpp>

/*PROTECTED REGION ID(communicationPattern_forward) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
// Additional headers here
/*PROTECTED REGION END*/

// EPackage

#include <ecore_forward.hpp> // for EDataTypes

namespace communicationPattern
{

// EDataType

// EClass

// CommunicationPattern
    class CommunicationPattern;
    using CommunicationPattern_ptr = ::ecore::Ptr<CommunicationPattern>;

// PushPattern
    class PushPattern;
    using PushPattern_ptr = ::ecore::Ptr<PushPattern>;

// QueryPattern
    class QueryPattern;
    using QueryPattern_ptr = ::ecore::Ptr<QueryPattern>;

// EventPattern
    class EventPattern;
    using EventPattern_ptr = ::ecore::Ptr<EventPattern>;

// SendPattern
    class SendPattern;
    using SendPattern_ptr = ::ecore::Ptr<SendPattern>;

// ForkingPattern
    class ForkingPattern;
    using ForkingPattern_ptr = ::ecore::Ptr<ForkingPattern>;

// JoiningPattern
    class JoiningPattern;
    using JoiningPattern_ptr = ::ecore::Ptr<JoiningPattern>;

// RequestAnswerPattern
    class RequestAnswerPattern;
    using RequestAnswerPattern_ptr = ::ecore::Ptr<RequestAnswerPattern>;

// OneWayCommunicationPattern
    class OneWayCommunicationPattern;
    using OneWayCommunicationPattern_ptr = ::ecore::Ptr<OneWayCommunicationPattern>;

// TwoWayCommunicationPattern
    class TwoWayCommunicationPattern;
    using TwoWayCommunicationPattern_ptr = ::ecore::Ptr<TwoWayCommunicationPattern>;

// EEnum

// Package & Factory
    class CommunicationPatternFactory;
    using CommunicationPatternFactory_ptr = ::ecore::Ptr<CommunicationPatternFactory>;
    class CommunicationPatternPackage;
    using CommunicationPatternPackage_ptr = ::ecore::Ptr<CommunicationPatternPackage>;

} // communicationPattern

#endif // _COMMUNICATIONPATTERN_FORWARD_HPP

