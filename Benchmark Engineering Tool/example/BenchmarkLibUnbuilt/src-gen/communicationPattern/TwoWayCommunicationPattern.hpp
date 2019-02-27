// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/TwoWayCommunicationPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONPATTERN_TWOWAYCOMMUNICATIONPATTERN_HPP
#define COMMUNICATIONPATTERN_TWOWAYCOMMUNICATIONPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>
#include <communicationPattern_forward.hpp>

#include <communicationPattern/CommunicationPattern.hpp>

#include "CommunicationPatternPackage.hpp"

/*PROTECTED REGION ID(TwoWayCommunicationPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationPattern
{

class EXPORT_COMMUNICATIONPATTERN_DLL TwoWayCommunicationPattern : public virtual ::communicationPattern::CommunicationPattern
{
public:
    TwoWayCommunicationPattern();

    virtual ~TwoWayCommunicationPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationPatternPackage::TWOWAYCOMMUNICATIONPATTERN;

    /*PROTECTED REGION ID(TwoWayCommunicationPattern) START*/
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

    /*PROTECTED REGION ID(TwoWayCommunicationPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TwoWayCommunicationPattern_ptr _this()
    {   return TwoWayCommunicationPattern_ptr(this);}

    // Attributes

    // References

};

}
 // communicationPattern

#endif // COMMUNICATIONPATTERN_TWOWAYCOMMUNICATIONPATTERN_HPP

