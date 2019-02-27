// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * stateMachine/StateMachine.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "StateMachine.hpp"
#include <stateMachine/AbstractMachineElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "stateMachine/StateMachinePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(StateMachine.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::stateMachine;

// Default constructor
StateMachine::StateMachine()
{

    m_elements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::stateMachine::AbstractMachineElement_ptr, -1, true, false >(
                    this,
                    ::stateMachine::StateMachinePackage::_instance()->getStateMachine__elements()));

    /*PROTECTED REGION ID(StateMachineImpl__StateMachineImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

StateMachine::~StateMachine()
{
}

// Attributes

::ecore::EString const& StateMachine::getName() const
{
    return m_name;
}

void StateMachine::setName(::ecore::EString const& _name)
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
                ::stateMachine::StateMachinePackage::_instance()->getStateMachine__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::stateMachine::AbstractMachineElement_ptr >& StateMachine::getElements() const
{
    return *m_elements;
}

::ecorecpp::mapping::EList< ::stateMachine::AbstractMachineElement_ptr >& StateMachine::getElements()
{
    return *m_elements;
}

