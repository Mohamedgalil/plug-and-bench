// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * basicAttributes/AttributeRefinement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BASICATTRIBUTES_ATTRIBUTEREFINEMENT_HPP
#define BASICATTRIBUTES_ATTRIBUTEREFINEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <basicAttributes/dllBasicAttributes.hpp>
#include <basicAttributes_forward.hpp>

#include "BasicAttributesPackage.hpp"

/*PROTECTED REGION ID(AttributeRefinement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace basicAttributes
{

class EXPORT_BASICATTRIBUTES_DLL AttributeRefinement : public virtual ::ecore::EObject
{
public:
    AttributeRefinement();

    virtual ~AttributeRefinement();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::basicAttributes::AbstractValue_ptr getValue () const;
    virtual void setValue (::basicAttributes::AbstractValue_ptr _value);

    virtual ::basicAttributes::AttributeDefinition_ptr getAttribute () const;
    virtual void setAttribute (::basicAttributes::AttributeDefinition_ptr _attribute);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = BasicAttributesPackage::ATTRIBUTEREFINEMENT;

    /*PROTECTED REGION ID(AttributeRefinement) START*/
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

    /*PROTECTED REGION ID(AttributeRefinementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AttributeRefinement_ptr _this()
    {   return AttributeRefinement_ptr(this);}

    // Attributes

    // References

    ::basicAttributes::AbstractValue_ptr m_value;

    ::basicAttributes::AttributeDefinition_ptr m_attribute;

};

}
 // basicAttributes

#endif // BASICATTRIBUTES_ATTRIBUTEREFINEMENT_HPP

