// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentPortExtension.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_COMPONENTPORTEXTENSION_HPP
#define COMPONENTDEFINITION_COMPONENTPORTEXTENSION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(ComponentPortExtension_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL ComponentPortExtension : public virtual ::ecore::EObject
{
public:
    ComponentPortExtension();

    virtual ~ComponentPortExtension();

    virtual void _initialize();

    // Operations

    // Attributes

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::COMPONENTPORTEXTENSION;

    /*PROTECTED REGION ID(ComponentPortExtension) START*/
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

    /*PROTECTED REGION ID(ComponentPortExtensionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentPortExtension_ptr _this()
    {   return ComponentPortExtension_ptr(this);}

    // Attributes

    // References

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_COMPONENTPORTEXTENSION_HPP

