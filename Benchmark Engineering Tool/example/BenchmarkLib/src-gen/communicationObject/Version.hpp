// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/Version.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONOBJECT_VERSION_HPP
#define COMMUNICATIONOBJECT_VERSION_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <communicationObject/dllCommunicationObject.hpp>
#include <communicationObject_forward.hpp>

#include <ecore_forward.hpp>

#include "CommunicationObjectPackage.hpp"

/*PROTECTED REGION ID(Version_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL Version : public virtual ::ecore::EObject
{
public:
    Version();

    virtual ~Version();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EInt getMajor () const;
    virtual void setMajor (::ecore::EInt _major);

    virtual ::ecore::EInt getMinor () const;
    virtual void setMinor (::ecore::EInt _minor);

    virtual ::ecore::EInt getPatch () const;
    virtual void setPatch (::ecore::EInt _patch);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationObjectPackage::VERSION;

    /*PROTECTED REGION ID(Version) START*/
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

    /*PROTECTED REGION ID(VersionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Version_ptr _this()
    {   return Version_ptr(this);}

    // Attributes

    ::ecore::EInt m_major;

    ::ecore::EInt m_minor;

    ::ecore::EInt m_patch;

    // References

};

}
 // communicationObject

#endif // COMMUNICATIONOBJECT_VERSION_HPP

