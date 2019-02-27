// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * coordinationPattern/ParameterPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COORDINATIONPATTERN_PARAMETERPATTERN_HPP
#define COORDINATIONPATTERN_PARAMETERPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <coordinationPattern/dllCoordinationPattern.hpp>
#include <coordinationPattern_forward.hpp>

#include <parameterDefinition_forward.hpp>
#include <coordinationPattern/CoordinationPattern.hpp>

#include "CoordinationPatternPackage.hpp"

/*PROTECTED REGION ID(ParameterPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace coordinationPattern
{

class EXPORT_COORDINATIONPATTERN_DLL ParameterPattern : public virtual ::coordinationPattern::CoordinationPattern
{
public:
    ParameterPattern();

    virtual ~ParameterPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::parameterDefinition::ParameterSetDefinition_ptr getParameterSet () const;
    virtual void setParameterSet (::parameterDefinition::ParameterSetDefinition_ptr _parameterSet);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CoordinationPatternPackage::PARAMETERPATTERN;

    /*PROTECTED REGION ID(ParameterPattern) START*/
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

    /*PROTECTED REGION ID(ParameterPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ParameterPattern_ptr _this()
    {   return ParameterPattern_ptr(this);}

    // Attributes

    // References

    ::parameterDefinition::ParameterSetDefinition_ptr m_parameterSet;

};

}
 // coordinationPattern

#endif // COORDINATIONPATTERN_PARAMETERPATTERN_HPP

