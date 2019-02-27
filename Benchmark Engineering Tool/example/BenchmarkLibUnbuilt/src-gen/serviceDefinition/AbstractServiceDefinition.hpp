// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/AbstractServiceDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef SERVICEDEFINITION_ABSTRACTSERVICEDEFINITION_HPP
#define SERVICEDEFINITION_ABSTRACTSERVICEDEFINITION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <serviceDefinition/dllServiceDefinition.hpp>
#include <serviceDefinition_forward.hpp>

#include <ecore_forward.hpp>

#include "ServiceDefinitionPackage.hpp"

/*PROTECTED REGION ID(AbstractServiceDefinition_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace serviceDefinition
{

class EXPORT_SERVICEDEFINITION_DLL AbstractServiceDefinition : public virtual ::ecore::EObject
{
public:
    AbstractServiceDefinition();

    virtual ~AbstractServiceDefinition();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    // References
    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::ServiceProperty_ptr >& getProperties () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::ServiceProperty_ptr >& getProperties ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ServiceDefinitionPackage::ABSTRACTSERVICEDEFINITION;

    /*PROTECTED REGION ID(AbstractServiceDefinition) START*/
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

    /*PROTECTED REGION ID(AbstractServiceDefinitionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    AbstractServiceDefinition_ptr _this()
    {   return AbstractServiceDefinition_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::ServiceProperty_ptr >> m_properties;

};

}
 // serviceDefinition

#endif // SERVICEDEFINITION_ABSTRACTSERVICEDEFINITION_HPP

