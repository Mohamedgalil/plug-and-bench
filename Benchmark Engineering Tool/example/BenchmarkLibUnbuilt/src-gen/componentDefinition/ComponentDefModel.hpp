// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_COMPONENTDEFMODEL_HPP
#define COMPONENTDEFINITION_COMPONENTDEFMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(ComponentDefModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL ComponentDefModel : public virtual ::ecore::EObject
{
public:
    ComponentDefModel();

    virtual ~ComponentDefModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::componentDefinition::ComponentDefinition_ptr getComponent () const;
    virtual void setComponent (::componentDefinition::ComponentDefinition_ptr _component);

    virtual const ::ecorecpp::mapping::EList< ::componentDefinition::ServiceRepoImport_ptr >& getImports () const;
    virtual ::ecorecpp::mapping::EList< ::componentDefinition::ServiceRepoImport_ptr >& getImports ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::COMPONENTDEFMODEL;

    /*PROTECTED REGION ID(ComponentDefModel) START*/
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

    /*PROTECTED REGION ID(ComponentDefModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentDefModel_ptr _this()
    {   return ComponentDefModel_ptr(this);}

    // Attributes

    // References

    ::componentDefinition::ComponentDefinition_ptr m_component;

    std::shared_ptr<::ecorecpp::mapping::EList< ::componentDefinition::ServiceRepoImport_ptr >> m_imports;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_COMPONENTDEFMODEL_HPP

