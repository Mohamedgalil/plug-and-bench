// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommElementReference.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONOBJECT_COMMELEMENTREFERENCE_HPP
#define COMMUNICATIONOBJECT_COMMELEMENTREFERENCE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationObject/dllCommunicationObject.hpp>
#include <communicationObject_forward.hpp>

#include <basicAttributes_forward.hpp>
#include <basicAttributes/AbstractAttributeType.hpp>

#include "CommunicationObjectPackage.hpp"

/*PROTECTED REGION ID(CommElementReference_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL CommElementReference : public virtual ::basicAttributes::AbstractAttributeType
{
public:
    CommElementReference();

    virtual ~CommElementReference();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationObject::AbstractCommElement_ptr getTypeName () const;
    virtual void setTypeName (::communicationObject::AbstractCommElement_ptr _typeName);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationObjectPackage::COMMELEMENTREFERENCE;

    /*PROTECTED REGION ID(CommElementReference) START*/
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

    /*PROTECTED REGION ID(CommElementReferenceImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CommElementReference_ptr _this()
    {   return CommElementReference_ptr(this);}

    // Attributes

    // References

    ::communicationObject::AbstractCommElement_ptr m_typeName;

};

}
 // communicationObject

#endif // COMMUNICATIONOBJECT_COMMELEMENTREFERENCE_HPP

