// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentMode/ComponentModeRepository.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ComponentModeRepository.hpp"
#include <componentMode/ComponentModeCollection.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "componentMode/ComponentModePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

/*PROTECTED REGION ID(ComponentModeRepository.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::componentMode;

// Default constructor
ComponentModeRepository::ComponentModeRepository()
{

    m_collections.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::componentMode::ComponentModeCollection_ptr, -1, true,
                    false >(this,
                    ::componentMode::ComponentModePackage::_instance()->getComponentModeRepository__collections()));

    /*PROTECTED REGION ID(ComponentModeRepositoryImpl__ComponentModeRepositoryImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ComponentModeRepository::~ComponentModeRepository()
{
}

// Attributes

::ecore::EString const& ComponentModeRepository::getName() const
{
    return m_name;
}

void ComponentModeRepository::setName(::ecore::EString const& _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::ecore::EString _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                _this(),
                ::componentMode::ComponentModePackage::_instance()->getComponentModeRepository__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

const ::ecorecpp::mapping::EList< ::componentMode::ComponentModeCollection_ptr >& ComponentModeRepository::getCollections() const
{
    return *m_collections;
}

::ecorecpp::mapping::EList< ::componentMode::ComponentModeCollection_ptr >& ComponentModeRepository::getCollections()
{
    return *m_collections;
}

