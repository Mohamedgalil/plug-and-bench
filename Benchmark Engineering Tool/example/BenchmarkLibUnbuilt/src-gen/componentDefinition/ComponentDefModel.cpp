// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/ComponentDefModel.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentDefModel.hpp"
#include <componentDefinition/ComponentDefinition.hpp>
#include <componentDefinition/ServiceRepoImport.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentDefinition/ComponentDefinitionPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentDefModel.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentDefinition;

// Default constructor
ComponentDefModel::ComponentDefModel() :
        m_component(0)
{

    m_imports.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentDefinition::ServiceRepoImport_ptr, -1, true,
                    false >(this,
                    ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefModel__imports()));

    /*PROTECTED REGION ID(ComponentDefModelImpl__ComponentDefModelImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentDefModel::~ComponentDefModel()
{
    if (m_component)
    {
        m_component.reset();
    }
}

// Attributes

// References

::componentDefinition::ComponentDefinition_ptr ComponentDefModel::getComponent() const
{
    return m_component;
}

void ComponentDefModel::setComponent(
        ::componentDefinition::ComponentDefinition_ptr _component)
{
    if (m_component)
        m_component->_setEContainer(ComponentDefModel_ptr(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefModel__component());
    if (_component)
        _component->_setEContainer(_this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefModel__component());

#ifdef ECORECPP_NOTIFICATION_API
    ::componentDefinition::ComponentDefinition_ptr _old_component = m_component;
#endif
    m_component = _component;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentDefinition::ComponentDefinitionPackage::_instance()->getComponentDefModel__component(),
                _old_component,
                m_component
        );
        eNotify(&notification);
    }
#endif
}

const ::ecorecpp::mapping::EList< ::componentDefinition::ServiceRepoImport_ptr >& ComponentDefModel::getImports() const
{
    return *m_imports;
}

::ecorecpp::mapping::EList< ::componentDefinition::ServiceRepoImport_ptr >& ComponentDefModel::getImports()
{
    return *m_imports;
}

