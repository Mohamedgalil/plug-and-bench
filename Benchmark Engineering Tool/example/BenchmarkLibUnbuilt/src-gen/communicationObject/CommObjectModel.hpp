// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationObject/CommObjectModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMMUNICATIONOBJECT_COMMOBJECTMODEL_HPP
#define COMMUNICATIONOBJECT_COMMOBJECTMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <communicationObject/dllCommunicationObject.hpp>
#include <communicationObject_forward.hpp>

#include "CommunicationObjectPackage.hpp"

/*PROTECTED REGION ID(CommObjectModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace communicationObject
{

class EXPORT_COMMUNICATIONOBJECT_DLL CommObjectModel : public virtual ::ecore::EObject
{
public:
    CommObjectModel();

    virtual ~CommObjectModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::communicationObject::CommObjectsRepository_ptr getRepository () const;
    virtual void setRepository (::communicationObject::CommObjectsRepository_ptr _repository);

    virtual const ::ecorecpp::mapping::EList< ::communicationObject::CommRepositoryImport_ptr >& getImports () const;
    virtual ::ecorecpp::mapping::EList< ::communicationObject::CommRepositoryImport_ptr >& getImports ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = CommunicationObjectPackage::COMMOBJECTMODEL;

    /*PROTECTED REGION ID(CommObjectModel) START*/
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

    /*PROTECTED REGION ID(CommObjectModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    CommObjectModel_ptr _this()
    {   return CommObjectModel_ptr(this);}

    // Attributes

    // References

    ::communicationObject::CommObjectsRepository_ptr m_repository;

    std::shared_ptr<::ecorecpp::mapping::EList< ::communicationObject::CommRepositoryImport_ptr >> m_imports;

};

}
 // communicationObject

#endif // COMMUNICATIONOBJECT_COMMOBJECTMODEL_HPP

