// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/StatePattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COORDINATIONPATTERN_STATEPATTERN_HPP
#define COORDINATIONPATTERN_STATEPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>
#include <coordinationPattern_forward.hpp>

#include <stateMachine_forward.hpp>
#include <componentMode_forward.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>

#include "CoordinationPatternPackage.hpp"

/*PROTECTED REGION ID(StatePattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace coordinationPattern
{

class EXPORT_COORDINATIONPATTERN_DLL StatePattern : public virtual ::coordinationPattern::CoordinationPattern
{
public:
    StatePattern();

    virtual ~StatePattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::stateMachine::StateMachine_ptr getLifecycle () const;
    virtual void setLifecycle (::stateMachine::StateMachine_ptr _lifecycle);

    virtual ::componentMode::ComponentModeCollection_ptr getModes () const;
    virtual void setModes (::componentMode::ComponentModeCollection_ptr _modes);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CoordinationPatternPackage::STATEPATTERN;

    /*PROTECTED REGION ID(StatePattern) START*/
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

    /*PROTECTED REGION ID(StatePatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    StatePattern_ptr _this()
    {   return StatePattern_ptr(this);}

    // Attributes

    // References

    ::stateMachine::StateMachine_ptr m_lifecycle;

    ::componentMode::ComponentModeCollection_ptr m_modes;

};

}
 // coordinationPattern

#endif // COORDINATIONPATTERN_STATEPATTERN_HPP

