// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeModel.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef COMPONENTMODE_COMPONENTMODEMODEL_HPP
#define COMPONENTMODE_COMPONENTMODEMODEL_HPP

#include <ecorecpp/mapping_forward.hpp>
#include <ecore/EObject.hpp>

#include <componentMode/dllComponentMode.hpp>
#include <componentMode_forward.hpp>

#include "ComponentModePackage.hpp"

/*PROTECTED REGION ID(ComponentModeModel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace componentMode
{

class EXPORT_COMPONENTMODE_DLL ComponentModeModel : public virtual ::ecore::EObject
{
public:
    ComponentModeModel();

    virtual ~ComponentModeModel();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual ::componentMode::ComponentModeRepository_ptr getRepository () const;
    virtual void setRepository (::componentMode::ComponentModeRepository_ptr _repository);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = ComponentModePackage::COMPONENTMODEMODEL;

    /*PROTECTED REGION ID(ComponentModeModel) START*/
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

    /*PROTECTED REGION ID(ComponentModeModelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ComponentModeModel_ptr _this()
    {   return ComponentModeModel_ptr(this);}

    // Attributes

    // References

    ::componentMode::ComponentModeRepository_ptr m_repository;

};

}
 // componentMode

#endif // COMPONENTMODE_COMPONENTMODEMODEL_HPP

