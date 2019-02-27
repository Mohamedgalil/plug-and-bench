// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AbstractAttributeType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_ABSTRACTATTRIBUTETYPE_HPP
#define BASICATTRIBUTES_ABSTRACTATTRIBUTETYPE_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(AbstractAttributeType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL AbstractAttributeType : public virtual ::ecore::EObject
{
public:
    AbstractAttributeType();

    virtual ~AbstractAttributeType();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::basicAttributes::ArrayType_ptr getArray () const;
    virtual void setArray (::basicAttributes::ArrayType_ptr _array);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::ABSTRACTATTRIBUTETYPE;

    /*PROTECTED REGION ID(AbstractAttributeType) START*/
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

    /*PROTECTED REGION ID(AbstractAttributeTypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AbstractAttributeType_ptr _this()
    {   return AbstractAttributeType_ptr(this);}

    // Attributes

    // References

    ::basicAttributes::ArrayType_ptr m_array;

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_ABSTRACTATTRIBUTETYPE_HPP

