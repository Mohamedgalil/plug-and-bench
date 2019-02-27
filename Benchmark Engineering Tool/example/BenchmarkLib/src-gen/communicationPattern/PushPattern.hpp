// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/PushPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONPATTERN_PUSHPATTERN_HPP
#define COMMUNICATIONPATTERN_PUSHPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>
#include <communicationPattern_forward.hpp>

#include <communicationObject_forward.hpp>
#include <communicationPattern/ForkingPattern.hpp>

#include "CommunicationPatternPackage.hpp"

/*PROTECTED REGION ID(PushPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationPattern
{

class EXPORT_COMMUNICATIONPATTERN_DLL PushPattern : public virtual ::communicationPattern::ForkingPattern
{
public:
    PushPattern();

    virtual ~PushPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationObject::CommunicationObject_ptr getDataType () const;
    virtual void setDataType (::communicationObject::CommunicationObject_ptr _dataType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationPatternPackage::PUSHPATTERN;

    /*PROTECTED REGION ID(PushPattern) START*/
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

    /*PROTECTED REGION ID(PushPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PushPattern_ptr _this()
    {   return PushPattern_ptr(this);}

    // Attributes

    // References

    ::communicationObject::CommunicationObject_ptr m_dataType;

};

}
 // communicationPattern

#endif // COMMUNICATIONPATTERN_PUSHPATTERN_HPP

