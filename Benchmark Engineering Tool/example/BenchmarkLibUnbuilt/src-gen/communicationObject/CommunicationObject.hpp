// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommunicationObject.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONOBJECT_COMMUNICATIONOBJECT_HPP
#define COMMUNICATIONOBJECT_COMMUNICATIONOBJECT_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationObject/dllCommunicationObject.hpp>
#include <communicationObject_forward.hpp>

#include <ecore_forward.hpp>
#include <basicAttributes_forward.hpp>
#include <communicationObject/AbstractCommElement.hpp>

#include "CommunicationObjectPackage.hpp"

/*PROTECTED REGION ID(CommunicationObject_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL CommunicationObject : public virtual ::communicationObject::AbstractCommElement
{
public:
    CommunicationObject();

    virtual ~CommunicationObject();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& getAttributes () const;
    virtual ::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >& getAttributes ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationObjectPackage::COMMUNICATIONOBJECT;

    /*PROTECTED REGION ID(CommunicationObject) START*/
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

    /*PROTECTED REGION ID(CommunicationObjectImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CommunicationObject_ptr _this()
    {   return CommunicationObject_ptr(this);}

    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::basicAttributes::AttributeDefinition_ptr >> m_attributes;

};

}
 // communicationObject

#endif // COMMUNICATIONOBJECT_COMMUNICATIONOBJECT_HPP

