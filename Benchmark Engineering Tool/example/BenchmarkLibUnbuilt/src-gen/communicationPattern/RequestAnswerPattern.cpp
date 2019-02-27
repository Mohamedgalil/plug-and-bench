// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/RequestAnswerPattern.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RequestAnswerPattern.hpp"
#include <communicationPattern/TwoWayCommunicationPattern.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "communicationPattern/CommunicationPatternPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(RequestAnswerPattern.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::communicationPattern;

// Default constructor
RequestAnswerPattern::RequestAnswerPattern()
{

    /*PROTECTED REGION ID(RequestAnswerPatternImpl__RequestAnswerPatternImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RequestAnswerPattern::~RequestAnswerPattern()
{
}

// Attributes

// References

