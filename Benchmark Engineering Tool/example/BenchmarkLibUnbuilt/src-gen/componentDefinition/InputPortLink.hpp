// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/InputPortLink.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_INPUTPORTLINK_HPP
#define COMPONENTDEFINITION_INPUTPORTLINK_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <componentDefinition/AbstractComponentLink.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(InputPortLink_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL InputPortLink : public virtual ::componentDefinition::AbstractComponentLink
{
public:
    InputPortLink();

    virtual ~InputPortLink();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isOptional () const;
    virtual void setOptional (::ecore::EBoolean _optional);

    // References
    virtual ::componentDefinition::InputPort_ptr getInputPort () const;
    virtual void setInputPort (::componentDefinition::InputPort_ptr _inputPort);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::INPUTPORTLINK;

    /*PROTECTED REGION ID(InputPortLink) START*/
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

    /*PROTECTED REGION ID(InputPortLinkImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    InputPortLink_ptr _this()
    {   return InputPortLink_ptr(this);}

    // Attributes

    ::ecore::EBoolean m_optional;

    // References

    ::componentDefinition::InputPort_ptr m_inputPort;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_INPUTPORTLINK_HPP

