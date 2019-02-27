// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/QueryPattern.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONPATTERN_QUERYPATTERN_HPP
#define COMMUNICATIONPATTERN_QUERYPATTERN_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>
#include <communicationPattern_forward.hpp>

#include <communicationObject_forward.hpp>
#include <communicationPattern/RequestAnswerPattern.hpp>

#include "CommunicationPatternPackage.hpp"

/*PROTECTED REGION ID(QueryPattern_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationPattern
{

class EXPORT_COMMUNICATIONPATTERN_DLL QueryPattern : public virtual ::communicationPattern::RequestAnswerPattern
{
public:
    QueryPattern();

    virtual ~QueryPattern();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationObject::CommunicationObject_ptr getRequestType () const;
    virtual void setRequestType (::communicationObject::CommunicationObject_ptr _requestType);

    virtual ::communicationObject::CommunicationObject_ptr getAnswerType () const;
    virtual void setAnswerType (::communicationObject::CommunicationObject_ptr _answerType);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationPatternPackage::QUERYPATTERN;

    /*PROTECTED REGION ID(QueryPattern) START*/
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

    /*PROTECTED REGION ID(QueryPatternImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    QueryPattern_ptr _this()
    {   return QueryPattern_ptr(this);}

    // Attributes

    // References

    ::communicationObject::CommunicationObject_ptr m_requestType;

    ::communicationObject::CommunicationObject_ptr m_answerType;

};

}
 // communicationPattern

#endif // COMMUNICATIONPATTERN_QUERYPATTERN_HPP

