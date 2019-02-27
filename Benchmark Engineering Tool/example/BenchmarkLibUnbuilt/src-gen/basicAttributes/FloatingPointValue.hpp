// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/FloatingPointValue.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_FLOATINGPOINTVALUE_HPP
#define BASICATTRIBUTES_FLOATINGPOINTVALUE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <ecore_forward.hpp>
#include <basicAttributes/SingleValue.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(FloatingPointValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL FloatingPointValue : public virtual ::basicAttributes::SingleValue
{
public:
    FloatingPointValue();

    virtual ~FloatingPointValue();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EDouble getValue () const;
    virtual void setValue (::ecore::EDouble _value);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::FLOATINGPOINTVALUE;

    /*PROTECTED REGION ID(FloatingPointValue) START*/
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

    /*PROTECTED REGION ID(FloatingPointValueImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    FloatingPointValue_ptr _this()
    {   return FloatingPointValue_ptr(this);}

    // Attributes

    ::ecore::EDouble m_value;

    // References

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_FLOATINGPOINTVALUE_HPP

