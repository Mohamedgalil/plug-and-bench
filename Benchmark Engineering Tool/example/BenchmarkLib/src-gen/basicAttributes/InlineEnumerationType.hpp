// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/InlineEnumerationType.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_INLINEENUMERATIONTYPE_HPP
#define BASICATTRIBUTES_INLINEENUMERATIONTYPE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <basicAttributes/AbstractAttributeType.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(InlineEnumerationType_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL InlineEnumerationType : public virtual ::basicAttributes::AbstractAttributeType
{
public:
    InlineEnumerationType();

    virtual ~InlineEnumerationType();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& getEnums () const;
    virtual ::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >& getEnums ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::INLINEENUMERATIONTYPE;

    /*PROTECTED REGION ID(InlineEnumerationType) START*/
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

    /*PROTECTED REGION ID(InlineEnumerationTypeImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InlineEnumerationType_ptr _this()
    {   return InlineEnumerationType_ptr(this);}

    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::basicAttributes::EnumerationElement_ptr >> m_enums;

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_INLINEENUMERATIONTYPE_HPP

