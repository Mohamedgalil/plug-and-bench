// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/RequestHandler.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTDEFINITION_REQUESTHANDLER_HPP
#define COMPONENTDEFINITION_REQUESTHANDLER_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <componentDefinition/dllComponentDefinition.hpp>
#include <componentDefinition_forward.hpp>

#include <ecore_forward.hpp>
#include <componentDefinition/ComponentSubNode.hpp>

#include "ComponentDefinitionPackage.hpp"

/*PROTECTED REGION ID(RequestHandler_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentDefinition
{

class EXPORT_COMPONENTDEFINITION_DLL RequestHandler : public virtual ::componentDefinition::ComponentSubNode
{
public:
    RequestHandler();

    virtual ~RequestHandler();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBoolean isActiveQueue () const;
    virtual void setActiveQueue (::ecore::EBoolean _activeQueue);

    // References
    virtual ::componentDefinition::AnswerPort_ptr getAnswerPort () const;
    virtual void setAnswerPort (::componentDefinition::AnswerPort_ptr _answerPort);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentDefinitionPackage::REQUESTHANDLER;

    /*PROTECTED REGION ID(RequestHandler) START*/
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

    /*PROTECTED REGION ID(RequestHandlerImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    RequestHandler_ptr _this()
    {   return RequestHandler_ptr(this);}

    // Attributes

    ::ecore::EBoolean m_activeQueue;

    // References

    ::componentDefinition::AnswerPort_ptr m_answerPort;

};

}
 // componentDefinition

#endif // COMPONENTDEFINITION_REQUESTHANDLER_HPP

