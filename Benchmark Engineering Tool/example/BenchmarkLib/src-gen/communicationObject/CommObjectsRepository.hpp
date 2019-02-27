// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectsRepository.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONOBJECT_COMMOBJECTSREPOSITORY_HPP
#define COMMUNICATIONOBJECT_COMMOBJECTSREPOSITORY_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <communicationObject/dllCommunicationObject.hpp>
#include <communicationObject_forward.hpp>

#include <ecore_forward.hpp>

#include "CommunicationObjectPackage.hpp"

/*PROTECTED REGION ID(CommObjectsRepository_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL CommObjectsRepository : public virtual ::ecore::EObject
{
public:
    CommObjectsRepository();

    virtual ~CommObjectsRepository();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getName () const;
    virtual void setName (::ecore::EString const& _name);

    virtual ::ecore::EString const& getDependency () const;
    virtual void setDependency (::ecore::EString const& _dependency);

    // References
    virtual const ::ecorecpp::mapping::EList< ::communicationObject::AbstractCommElement_ptr >& getElements () const;
    virtual ::ecorecpp::mapping::EList< ::communicationObject::AbstractCommElement_ptr >& getElements ();

    virtual ::communicationObject::Version_ptr getVersion () const;
    virtual void setVersion (::communicationObject::Version_ptr _version);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationObjectPackage::COMMOBJECTSREPOSITORY;

    /*PROTECTED REGION ID(CommObjectsRepository) START*/
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

    /*PROTECTED REGION ID(CommObjectsRepositoryImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CommObjectsRepository_ptr _this()
    {   return CommObjectsRepository_ptr(this);}

    // Attributes

    ::ecore::EString m_name;

    ::ecore::EString m_dependency;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::communicationObject::AbstractCommElement_ptr >> m_elements;

    ::communicationObject::Version_ptr m_version;

};

}
 // communicationObject

#endif // COMMUNICATIONOBJECT_COMMOBJECTSREPOSITORY_HPP

