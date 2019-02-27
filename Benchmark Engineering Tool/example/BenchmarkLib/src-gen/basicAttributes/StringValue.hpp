// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/StringValue.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_STRINGVALUE_HPP
#define BASICATTRIBUTES_STRINGVALUE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <ecore_forward.hpp>
#include <basicAttributes/SingleValue.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(StringValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL StringValue : public virtual ::basicAttributes::SingleValue
{
public:
    StringValue();

    virtual ~StringValue();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getValue () const;
    virtual void setValue (::ecore::EString const& _value);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::STRINGVALUE;

    /*PROTECTED REGION ID(StringValue) START*/
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

    /*PROTECTED REGION ID(StringValueImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    StringValue_ptr _this()
    {   return StringValue_ptr(this);}

    // Attributes

    ::ecore::EString m_value;

    // References

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_STRINGVALUE_HPP

