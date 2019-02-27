// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/DynamicWiringPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COORDINATIONPATTERN_DYNAMICWIRINGPATTERN_HPP
#define COORDINATIONPATTERN_DYNAMICWIRINGPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>
#include <coordinationPattern_forward.hpp>

#include <coordinationPattern/CoordinationPattern.hpp>

#include "CoordinationPatternPackage.hpp"

/*PROTECTED REGION ID(DynamicWiringPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace coordinationPattern
{

class EXPORT_COORDINATIONPATTERN_DLL DynamicWiringPattern : public virtual ::coordinationPattern::CoordinationPattern
{
public:
    DynamicWiringPattern();

    virtual ~DynamicWiringPattern();

    virtual void _initialize();

    // Operations

    virtual void connect ( ::ecore::EString const& _sourceComponent, ::ecore::EString const& _sourcePort, ::ecore::EString const& _targetComponent, ::ecore::EString const& _targetPort);

    virtual void disconnect ( ::ecore::EString const& _sourceComponent, ::ecore::EString const& _sourcePort);

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CoordinationPatternPackage::DYNAMICWIRINGPATTERN;

    /*PROTECTED REGION ID(DynamicWiringPattern) START*/
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

    /*PROTECTED REGION ID(DynamicWiringPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DynamicWiringPattern_ptr _this()
    {   return DynamicWiringPattern_ptr(this);}

    // Attributes

    // References

};

}
 // coordinationPattern

#endif // COORDINATIONPATTERN_DYNAMICWIRINGPATTERN_HPP

