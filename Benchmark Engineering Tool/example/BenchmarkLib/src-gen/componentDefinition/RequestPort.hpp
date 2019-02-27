// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestPort.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_REQUESTPORT_HPP
#define COMPONENTDEFINITION_REQUESTPORT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <serviceDefinition_forward.hpp>
#include <componentDefinition/ComponentPort.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(RequestPort_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL RequestPort : public virtual ::componentDefinition::ComponentPort
{
public:
    RequestPort();

    virtual ~RequestPort();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::serviceDefinition::TwoWayCommunicationService_ptr getService () const;
    virtual void setService (::serviceDefinition::TwoWayCommunicationService_ptr _service);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::REQUESTPORT;

    /*PROTECTED REGION ID(RequestPort) START*/
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

    /*PROTECTED REGION ID(RequestPortImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RequestPort_ptr _this()
    {   return RequestPort_ptr(this);}

    // Attributes

    // References

    ::serviceDefinition::TwoWayCommunicationService_ptr m_service;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_REQUESTPORT_HPP

