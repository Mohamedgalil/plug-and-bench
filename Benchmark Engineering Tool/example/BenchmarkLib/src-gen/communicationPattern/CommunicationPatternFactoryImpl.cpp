// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternFactoryImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationPattern/CommunicationPatternFactory.hpp>
#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/CommunicationPattern.hpp>
#include <communicationPattern/PushPattern.hpp>
#include <communicationPattern/QueryPattern.hpp>
#include <communicationPattern/EventPattern.hpp>
#include <communicationPattern/SendPattern.hpp>
#include <communicationPattern/ForkingPattern.hpp>
#include <communicationPattern/JoiningPattern.hpp>
#include <communicationPattern/RequestAnswerPattern.hpp>
#include <communicationPattern/OneWayCommunicationPattern.hpp>
#include <communicationPattern/TwoWayCommunicationPattern.hpp>

#include <ecore.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::communicationPattern;

CommunicationPatternFactory::CommunicationPatternFactory()
{
}

::ecore::EObject_ptr CommunicationPatternFactory::create(
        ::ecore::EClass_ptr _eClass)
{
    switch (_eClass->getClassifierID())
    {
    case CommunicationPatternPackage::COMMUNICATIONPATTERN:
        return createCommunicationPattern();
    case CommunicationPatternPackage::PUSHPATTERN:
        return createPushPattern();
    case CommunicationPatternPackage::QUERYPATTERN:
        return createQueryPattern();
    case CommunicationPatternPackage::EVENTPATTERN:
        return createEventPattern();
    case CommunicationPatternPackage::SENDPATTERN:
        return createSendPattern();
    case CommunicationPatternPackage::FORKINGPATTERN:
        return createForkingPattern();
    case CommunicationPatternPackage::JOININGPATTERN:
        return createJoiningPattern();
    case CommunicationPatternPackage::REQUESTANSWERPATTERN:
        return createRequestAnswerPattern();
    case CommunicationPatternPackage::ONEWAYCOMMUNICATIONPATTERN:
        return createOneWayCommunicationPattern();
    case CommunicationPatternPackage::TWOWAYCOMMUNICATIONPATTERN:
        return createTwoWayCommunicationPattern();
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EJavaObject CommunicationPatternFactory::createFromString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EString const& _literalValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

::ecore::EString CommunicationPatternFactory::convertToString(
        ::ecore::EDataType_ptr _eDataType,
        ::ecore::EJavaObject const& _instanceValue)
{
    switch (_eDataType->getClassifierID())
    {
    default:
        throw "IllegalArgumentException";
    }
}

CommunicationPattern_ptr CommunicationPatternFactory::createCommunicationPattern()
{
    return ::ecore::Ptr < CommunicationPattern > (new CommunicationPattern);
}
PushPattern_ptr CommunicationPatternFactory::createPushPattern()
{
    return ::ecore::Ptr < PushPattern > (new PushPattern);
}
QueryPattern_ptr CommunicationPatternFactory::createQueryPattern()
{
    return ::ecore::Ptr < QueryPattern > (new QueryPattern);
}
EventPattern_ptr CommunicationPatternFactory::createEventPattern()
{
    return ::ecore::Ptr < EventPattern > (new EventPattern);
}
SendPattern_ptr CommunicationPatternFactory::createSendPattern()
{
    return ::ecore::Ptr < SendPattern > (new SendPattern);
}
ForkingPattern_ptr CommunicationPatternFactory::createForkingPattern()
{
    return ::ecore::Ptr < ForkingPattern > (new ForkingPattern);
}
JoiningPattern_ptr CommunicationPatternFactory::createJoiningPattern()
{
    return ::ecore::Ptr < JoiningPattern > (new JoiningPattern);
}
RequestAnswerPattern_ptr CommunicationPatternFactory::createRequestAnswerPattern()
{
    return ::ecore::Ptr < RequestAnswerPattern > (new RequestAnswerPattern);
}
OneWayCommunicationPattern_ptr CommunicationPatternFactory::createOneWayCommunicationPattern()
{
    return ::ecore::Ptr < OneWayCommunicationPattern
            > (new OneWayCommunicationPattern);
}
TwoWayCommunicationPattern_ptr CommunicationPatternFactory::createTwoWayCommunicationPattern()
{
    return ::ecore::Ptr < TwoWayCommunicationPattern
            > (new TwoWayCommunicationPattern);
}

