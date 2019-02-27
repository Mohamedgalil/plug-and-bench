// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/PrimitiveType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_PRIMITIVETYPE_HPP
#define BASICATTRIBUTES_PRIMITIVETYPE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <basicAttributes/AbstractAttributeType.hpp>
#include <basicAttributes/PRIMITIVE_TYPE_NAME.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(PrimitiveType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL PrimitiveType : public virtual ::basicAttributes::AbstractAttributeType
{
public:
    PrimitiveType();

    virtual ~PrimitiveType();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::basicAttributes::PRIMITIVE_TYPE_NAME getTypeName () const;
    virtual void setTypeName (::basicAttributes::PRIMITIVE_TYPE_NAME _typeName);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::PRIMITIVETYPE;

    /*PROTECTED REGION ID(PrimitiveType) START*/
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

    /*PROTECTED REGION ID(PrimitiveTypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PrimitiveType_ptr _this()
    {   return PrimitiveType_ptr(this);}

    // Attributes

    ::basicAttributes::PRIMITIVE_TYPE_NAME m_typeName;

    // References

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_PRIMITIVETYPE_HPP

