// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/OutputPort.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_OUTPUTPORT_HPP
#define COMPONENTDEFINITION_OUTPUTPORT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <serviceDefinition_forward.hpp>
#include <componentDefinition/ComponentPort.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(OutputPort_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL OutputPort : public virtual ::componentDefinition::ComponentPort
{
public:
    OutputPort();

    virtual ~OutputPort();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::serviceDefinition::OneWayCommunicationService_ptr getService () const;
    virtual void setService (::serviceDefinition::OneWayCommunicationService_ptr _service);

    virtual ::componentDefinition::Activity_ptr getActivity () const;
    virtual void setActivity (::componentDefinition::Activity_ptr _activity);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::OUTPUTPORT;

    /*PROTECTED REGION ID(OutputPort) START*/
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

    /*PROTECTED REGION ID(OutputPortImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    OutputPort_ptr _this()
    {   return OutputPort_ptr(this);}

    // Attributes

    // References

    ::serviceDefinition::OneWayCommunicationService_ptr m_service;

    ::componentDefinition::Activity_ptr m_activity;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_OUTPUTPORT_HPP

