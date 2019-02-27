// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/EventPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONPATTERN_EVENTPATTERN_HPP
#define COMMUNICATIONPATTERN_EVENTPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>
#include <communicationPattern_forward.hpp>

#include <communicationObject_forward.hpp>
#include <communicationPattern/ForkingPattern.hpp>

#include "CommunicationPatternPackage.hpp"

/*PROTECTED REGION ID(EventPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationPattern
{

class EXPORT_COMMUNICATIONPATTERN_DLL EventPattern : public virtual ::communicationPattern::ForkingPattern
{
public:
    EventPattern();

    virtual ~EventPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationObject::CommunicationObject_ptr getEventType () const;
    virtual void setEventType (::communicationObject::CommunicationObject_ptr _eventType);

    virtual ::communicationObject::CommunicationObject_ptr getActivationType () const;
    virtual void setActivationType (::communicationObject::CommunicationObject_ptr _activationType);

    virtual ::communicationObject::CommunicationObject_ptr getEventStateType () const;
    virtual void setEventStateType (::communicationObject::CommunicationObject_ptr _eventStateType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationPatternPackage::EVENTPATTERN;

    /*PROTECTED REGION ID(EventPattern) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(EventPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EventPattern_ptr _this()
    {   return EventPattern_ptr(this);}

    // Attributes

    // References

    ::communicationObject::CommunicationObject_ptr m_eventType;

    ::communicationObject::CommunicationObject_ptr m_activationType;

    ::communicationObject::CommunicationObject_ptr m_eventStateType;

};

}
 // communicationPattern

#endif // COMMUNICATIONPATTERN_EVENTPATTERN_HPP

