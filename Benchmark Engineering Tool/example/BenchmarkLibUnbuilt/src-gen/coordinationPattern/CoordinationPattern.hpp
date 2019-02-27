// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/CoordinationPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COORDINATIONPATTERN_COORDINATIONPATTERN_HPP
#define COORDINATIONPATTERN_COORDINATIONPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>
#include <coordinationPattern_forward.hpp>

#include "CoordinationPatternPackage.hpp"

/*PROTECTED REGION ID(CoordinationPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace coordinationPattern
{

class EXPORT_COORDINATIONPATTERN_DLL CoordinationPattern : public virtual ::ecore::EObject
{
public:
    CoordinationPattern();

    virtual ~CoordinationPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CoordinationPatternPackage::COORDINATIONPATTERN;

    /*PROTECTED REGION ID(CoordinationPattern) START*/
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

    /*PROTECTED REGION ID(CoordinationPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CoordinationPattern_ptr _this()
    {   return CoordinationPattern_ptr(this);}

    // Attributes

    // References

};

}
 // coordinationPattern

#endif // COORDINATIONPATTERN_COORDINATIONPATTERN_HPP

