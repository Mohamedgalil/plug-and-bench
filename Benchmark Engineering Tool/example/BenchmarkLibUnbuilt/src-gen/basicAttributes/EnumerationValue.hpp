// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/EnumerationValue.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_ENUMERATIONVALUE_HPP
#define BASICATTRIBUTES_ENUMERATIONVALUE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <basicAttributes/SingleValue.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(EnumerationValue_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL EnumerationValue : public virtual ::basicAttributes::SingleValue
{
public:
    EnumerationValue();

    virtual ~EnumerationValue();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::basicAttributes::EnumerationElement_ptr getValue () const;
    virtual void setValue (::basicAttributes::EnumerationElement_ptr _value);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::ENUMERATIONVALUE;

    /*PROTECTED REGION ID(EnumerationValue) START*/
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

    /*PROTECTED REGION ID(EnumerationValueImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EnumerationValue_ptr _this()
    {   return EnumerationValue_ptr(this);}

    // Attributes

    // References

    ::basicAttributes::EnumerationElement_ptr m_value;

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_ENUMERATIONVALUE_HPP

