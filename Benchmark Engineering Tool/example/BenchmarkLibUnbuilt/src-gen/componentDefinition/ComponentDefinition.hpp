// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_COMPONENTDEFINITION_HPP
#define COMPONENTDEFINITION_COMPONENTDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(ComponentDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL ComponentDefinition : public virtual ::ecore::EObject
{
public:
    ComponentDefinition();

    virtual ~ComponentDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::componentDefinition::AbstractComponentElement_ptr >& getElements () const;
    virtual ::ecorecpp::mapping::EList< ::componentDefinition::AbstractComponentElement_ptr >& getElements ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::COMPONENTDEFINITION;

    /*PROTECTED REGION ID(ComponentDefinition) START*/
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

    /*PROTECTED REGION ID(ComponentDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentDefinition_ptr _this()
    {   return ComponentDefinition_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::componentDefinition::AbstractComponentElement_ptr >> m_elements;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_COMPONENTDEFINITION_HPP

