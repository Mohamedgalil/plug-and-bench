// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/DerivedComponentElement.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_DERIVEDCOMPONENTELEMENT_HPP
#define COMPONENTDEFINITION_DERIVEDCOMPONENTELEMENT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <componentDefinition/AbstractComponentElement.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(DerivedComponentElement_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL DerivedComponentElement : public virtual ::componentDefinition::AbstractComponentElement
{
public:
    DerivedComponentElement();

    virtual ~DerivedComponentElement();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::DERIVEDCOMPONENTELEMENT;

    /*PROTECTED REGION ID(DerivedComponentElement) START*/
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

    /*PROTECTED REGION ID(DerivedComponentElementImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    DerivedComponentElement_ptr _this()
    {   return DerivedComponentElement_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_DERIVEDCOMPONENTELEMENT_HPP

