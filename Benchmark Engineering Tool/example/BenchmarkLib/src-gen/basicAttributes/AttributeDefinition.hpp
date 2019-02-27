// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AttributeDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_ATTRIBUTEDEFINITION_HPP
#define BASICATTRIBUTES_ATTRIBUTEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include <ecore_forward.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(AttributeDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL AttributeDefinition : public virtual ::ecore::EObject
{
public:
    AttributeDefinition();

    virtual ~AttributeDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual ::basicAttributes::AbstractAttributeType_ptr getType () const;
    virtual void setType (::basicAttributes::AbstractAttributeType_ptr _type);

    virtual ::basicAttributes::AbstractValue_ptr getDefaultvalue () const;
    virtual void setDefaultvalue (::basicAttributes::AbstractValue_ptr _defaultvalue);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::ATTRIBUTEDEFINITION;

    /*PROTECTED REGION ID(AttributeDefinition) START*/
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

    /*PROTECTED REGION ID(AttributeDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AttributeDefinition_ptr _this()
    {   return AttributeDefinition_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    ::basicAttributes::AbstractAttributeType_ptr m_type;

    ::basicAttributes::AbstractValue_ptr m_defaultvalue;

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_ATTRIBUTEDEFINITION_HPP

