// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/IScoreElement.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "IScoreElement.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "standardized_problem/Standardized_problemPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(IScoreElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::standardized_problem;

// Default constructor
IScoreElement::IScoreElement()
{

    /*PROTECTED REGION ID(IScoreElementImpl__IScoreElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

IScoreElement::~IScoreElement()
{
}

// Attributes

::ecore::EBigDecimal IScoreElement::getScore() const
{
    return m_score;
}

void IScoreElement::setScore(::ecore::EBigDecimal _score)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EBigDecimal _old_score = m_score;
#endif
    m_score = _score;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::standardized_problem::Standardized_problemPackage::_instance()->getIScoreElement__score(),
                _old_score,
                m_score
        );
        eNotify(&notification);
    }
#endif
}

// References

