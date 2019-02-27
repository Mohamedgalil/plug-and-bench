// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternPackageImpl.cpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include <communicationPattern/CommunicationPatternPackage.hpp>
#include <communicationPattern/CommunicationPatternFactory.hpp>
#include <ecore.hpp>
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EEnum.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <ecore/EDataType.hpp>
#include <ecore/EGenericType.hpp>
#include <ecore/ETypeParameter.hpp>
#include <communicationObject/CommunicationObjectPackage.hpp>
#include <communicationObject/CommunicationObject.hpp>

using namespace ::communicationPattern;

CommunicationPatternPackage::CommunicationPatternPackage()
{

    // Feature definitions of CommunicationPattern

    // Feature definitions of PushPattern
    m_PushPattern__dataType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of QueryPattern
    m_QueryPattern__requestType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_QueryPattern__answerType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of EventPattern
    m_EventPattern__eventType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EventPattern__activationType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);
    m_EventPattern__eventStateType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of SendPattern
    m_SendPattern__dataType = ::ecore::Ptr < ::ecore::EReference
            > (new ::ecore::EReference);

    // Feature definitions of ForkingPattern

    // Feature definitions of JoiningPattern

    // Feature definitions of RequestAnswerPattern

    // Feature definitions of OneWayCommunicationPattern

    // Feature definitions of TwoWayCommunicationPattern

}

void CommunicationPatternPackage::_initPackage()
{
    // Factory
    ::ecore::EFactory_ptr _fa = CommunicationPatternFactory::_instance();
    setEFactoryInstance(_fa);
    _fa->setEPackage(_this());

    // Create classes and their features

    // CommunicationPattern
    m_CommunicationPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_CommunicationPatternEClass->setClassifierID(COMMUNICATIONPATTERN);
    m_CommunicationPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_CommunicationPatternEClass);

    // PushPattern
    m_PushPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_PushPatternEClass->setClassifierID(PUSHPATTERN);
    m_PushPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_PushPatternEClass);
    // m_PushPattern__dataType has already been allocated above
    m_PushPattern__dataType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::PUSHPATTERN__DATATYPE);
    m_PushPatternEClass->getEStructuralFeatures().push_back(
            m_PushPattern__dataType);

    // QueryPattern
    m_QueryPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_QueryPatternEClass->setClassifierID(QUERYPATTERN);
    m_QueryPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_QueryPatternEClass);
    // m_QueryPattern__requestType has already been allocated above
    m_QueryPattern__requestType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__REQUESTTYPE);
    m_QueryPatternEClass->getEStructuralFeatures().push_back(
            m_QueryPattern__requestType);
    // m_QueryPattern__answerType has already been allocated above
    m_QueryPattern__answerType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::QUERYPATTERN__ANSWERTYPE);
    m_QueryPatternEClass->getEStructuralFeatures().push_back(
            m_QueryPattern__answerType);

    // EventPattern
    m_EventPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_EventPatternEClass->setClassifierID(EVENTPATTERN);
    m_EventPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_EventPatternEClass);
    // m_EventPattern__eventType has already been allocated above
    m_EventPattern__eventType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTTYPE);
    m_EventPatternEClass->getEStructuralFeatures().push_back(
            m_EventPattern__eventType);
    // m_EventPattern__activationType has already been allocated above
    m_EventPattern__activationType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__ACTIVATIONTYPE);
    m_EventPatternEClass->getEStructuralFeatures().push_back(
            m_EventPattern__activationType);
    // m_EventPattern__eventStateType has already been allocated above
    m_EventPattern__eventStateType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::EVENTPATTERN__EVENTSTATETYPE);
    m_EventPatternEClass->getEStructuralFeatures().push_back(
            m_EventPattern__eventStateType);

    // SendPattern
    m_SendPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_SendPatternEClass->setClassifierID(SENDPATTERN);
    m_SendPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_SendPatternEClass);
    // m_SendPattern__dataType has already been allocated above
    m_SendPattern__dataType->setFeatureID(
            ::communicationPattern::CommunicationPatternPackage::SENDPATTERN__DATATYPE);
    m_SendPatternEClass->getEStructuralFeatures().push_back(
            m_SendPattern__dataType);

    // ForkingPattern
    m_ForkingPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_ForkingPatternEClass->setClassifierID(FORKINGPATTERN);
    m_ForkingPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_ForkingPatternEClass);

    // JoiningPattern
    m_JoiningPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_JoiningPatternEClass->setClassifierID(JOININGPATTERN);
    m_JoiningPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_JoiningPatternEClass);

    // RequestAnswerPattern
    m_RequestAnswerPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_RequestAnswerPatternEClass->setClassifierID(REQUESTANSWERPATTERN);
    m_RequestAnswerPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_RequestAnswerPatternEClass);

    // OneWayCommunicationPattern
    m_OneWayCommunicationPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_OneWayCommunicationPatternEClass->setClassifierID(
            ONEWAYCOMMUNICATIONPATTERN);
    m_OneWayCommunicationPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_OneWayCommunicationPatternEClass);

    // TwoWayCommunicationPattern
    m_TwoWayCommunicationPatternEClass = ::ecore::Ptr < ::ecore::EClass
            > (new ::ecore::EClass);
    m_TwoWayCommunicationPatternEClass->setClassifierID(
            TWOWAYCOMMUNICATIONPATTERN);
    m_TwoWayCommunicationPatternEClass->setEPackage(_this());
    getEClassifiers().push_back(m_TwoWayCommunicationPatternEClass);

    // Create enums

    // Create data types

    // Initialize package
    setName("communicationPattern");
    setNsPrefix("CommunicationPattern");
    setNsURI("http://www.ecore.org/service/CommunicationPattern");

    // TODO: bounds for type parameters

    // Add supertypes to classes
    m_PushPatternEClass->getESuperTypes().push_back(m_ForkingPatternEClass);
    m_QueryPatternEClass->getESuperTypes().push_back(
            m_RequestAnswerPatternEClass);
    m_EventPatternEClass->getESuperTypes().push_back(m_ForkingPatternEClass);
    m_SendPatternEClass->getESuperTypes().push_back(m_JoiningPatternEClass);
    m_ForkingPatternEClass->getESuperTypes().push_back(
            m_OneWayCommunicationPatternEClass);
    m_JoiningPatternEClass->getESuperTypes().push_back(
            m_OneWayCommunicationPatternEClass);
    m_RequestAnswerPatternEClass->getESuperTypes().push_back(
            m_TwoWayCommunicationPatternEClass);
    m_OneWayCommunicationPatternEClass->getESuperTypes().push_back(
            m_CommunicationPatternEClass);
    m_TwoWayCommunicationPatternEClass->getESuperTypes().push_back(
            m_CommunicationPatternEClass);

    // TODO: Initialize classes and features; add operations and parameters
    // TODO: GenericTypes
    // CommunicationPattern
    m_CommunicationPatternEClass->setName("CommunicationPattern");
    m_CommunicationPatternEClass->setAbstract(true);
    m_CommunicationPatternEClass->setInterface(false);
    // PushPattern
    m_PushPatternEClass->setName("PushPattern");
    m_PushPatternEClass->setAbstract(false);
    m_PushPatternEClass->setInterface(false);
    m_PushPattern__dataType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_PushPattern__dataType->setName("dataType");
    m_PushPattern__dataType->setDefaultValueLiteral("");
    m_PushPattern__dataType->setLowerBound(1);
    m_PushPattern__dataType->setUpperBound(1);
    m_PushPattern__dataType->setTransient(false);
    m_PushPattern__dataType->setVolatile(false);
    m_PushPattern__dataType->setChangeable(true);
    m_PushPattern__dataType->setContainment(false);
    m_PushPattern__dataType->setResolveProxies(true);
    m_PushPattern__dataType->setUnique(true);
    m_PushPattern__dataType->setDerived(false);
    m_PushPattern__dataType->setOrdered(true);
    // QueryPattern
    m_QueryPatternEClass->setName("QueryPattern");
    m_QueryPatternEClass->setAbstract(false);
    m_QueryPatternEClass->setInterface(false);
    m_QueryPattern__requestType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_QueryPattern__requestType->setName("requestType");
    m_QueryPattern__requestType->setDefaultValueLiteral("");
    m_QueryPattern__requestType->setLowerBound(1);
    m_QueryPattern__requestType->setUpperBound(1);
    m_QueryPattern__requestType->setTransient(false);
    m_QueryPattern__requestType->setVolatile(false);
    m_QueryPattern__requestType->setChangeable(true);
    m_QueryPattern__requestType->setContainment(false);
    m_QueryPattern__requestType->setResolveProxies(true);
    m_QueryPattern__requestType->setUnique(true);
    m_QueryPattern__requestType->setDerived(false);
    m_QueryPattern__requestType->setOrdered(true);
    m_QueryPattern__answerType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_QueryPattern__answerType->setName("answerType");
    m_QueryPattern__answerType->setDefaultValueLiteral("");
    m_QueryPattern__answerType->setLowerBound(1);
    m_QueryPattern__answerType->setUpperBound(1);
    m_QueryPattern__answerType->setTransient(false);
    m_QueryPattern__answerType->setVolatile(false);
    m_QueryPattern__answerType->setChangeable(true);
    m_QueryPattern__answerType->setContainment(false);
    m_QueryPattern__answerType->setResolveProxies(true);
    m_QueryPattern__answerType->setUnique(true);
    m_QueryPattern__answerType->setDerived(false);
    m_QueryPattern__answerType->setOrdered(true);
    // EventPattern
    m_EventPatternEClass->setName("EventPattern");
    m_EventPatternEClass->setAbstract(false);
    m_EventPatternEClass->setInterface(false);
    m_EventPattern__eventType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_EventPattern__eventType->setName("eventType");
    m_EventPattern__eventType->setDefaultValueLiteral("");
    m_EventPattern__eventType->setLowerBound(1);
    m_EventPattern__eventType->setUpperBound(1);
    m_EventPattern__eventType->setTransient(false);
    m_EventPattern__eventType->setVolatile(false);
    m_EventPattern__eventType->setChangeable(true);
    m_EventPattern__eventType->setContainment(false);
    m_EventPattern__eventType->setResolveProxies(true);
    m_EventPattern__eventType->setUnique(true);
    m_EventPattern__eventType->setDerived(false);
    m_EventPattern__eventType->setOrdered(true);
    m_EventPattern__activationType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_EventPattern__activationType->setName("activationType");
    m_EventPattern__activationType->setDefaultValueLiteral("");
    m_EventPattern__activationType->setLowerBound(1);
    m_EventPattern__activationType->setUpperBound(1);
    m_EventPattern__activationType->setTransient(false);
    m_EventPattern__activationType->setVolatile(false);
    m_EventPattern__activationType->setChangeable(true);
    m_EventPattern__activationType->setContainment(false);
    m_EventPattern__activationType->setResolveProxies(true);
    m_EventPattern__activationType->setUnique(true);
    m_EventPattern__activationType->setDerived(false);
    m_EventPattern__activationType->setOrdered(true);
    m_EventPattern__eventStateType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_EventPattern__eventStateType->setName("eventStateType");
    m_EventPattern__eventStateType->setDefaultValueLiteral("");
    m_EventPattern__eventStateType->setLowerBound(1);
    m_EventPattern__eventStateType->setUpperBound(1);
    m_EventPattern__eventStateType->setTransient(false);
    m_EventPattern__eventStateType->setVolatile(false);
    m_EventPattern__eventStateType->setChangeable(true);
    m_EventPattern__eventStateType->setContainment(false);
    m_EventPattern__eventStateType->setResolveProxies(true);
    m_EventPattern__eventStateType->setUnique(true);
    m_EventPattern__eventStateType->setDerived(false);
    m_EventPattern__eventStateType->setOrdered(true);
    // SendPattern
    m_SendPatternEClass->setName("SendPattern");
    m_SendPatternEClass->setAbstract(false);
    m_SendPatternEClass->setInterface(false);
    m_SendPattern__dataType->setEType(
            dynamic_cast< ::communicationObject::CommunicationObjectPackage* >(::communicationObject::CommunicationObjectPackage::_instance().get())->getCommunicationObject());
    m_SendPattern__dataType->setName("dataType");
    m_SendPattern__dataType->setDefaultValueLiteral("");
    m_SendPattern__dataType->setLowerBound(1);
    m_SendPattern__dataType->setUpperBound(1);
    m_SendPattern__dataType->setTransient(false);
    m_SendPattern__dataType->setVolatile(false);
    m_SendPattern__dataType->setChangeable(true);
    m_SendPattern__dataType->setContainment(false);
    m_SendPattern__dataType->setResolveProxies(true);
    m_SendPattern__dataType->setUnique(true);
    m_SendPattern__dataType->setDerived(false);
    m_SendPattern__dataType->setOrdered(true);
    // ForkingPattern
    m_ForkingPatternEClass->setName("ForkingPattern");
    m_ForkingPatternEClass->setAbstract(true);
    m_ForkingPatternEClass->setInterface(false);
    // JoiningPattern
    m_JoiningPatternEClass->setName("JoiningPattern");
    m_JoiningPatternEClass->setAbstract(true);
    m_JoiningPatternEClass->setInterface(false);
    // RequestAnswerPattern
    m_RequestAnswerPatternEClass->setName("RequestAnswerPattern");
    m_RequestAnswerPatternEClass->setAbstract(true);
    m_RequestAnswerPatternEClass->setInterface(false);
    // OneWayCommunicationPattern
    m_OneWayCommunicationPatternEClass->setName("OneWayCommunicationPattern");
    m_OneWayCommunicationPatternEClass->setAbstract(true);
    m_OneWayCommunicationPatternEClass->setInterface(false);
    // TwoWayCommunicationPattern
    m_TwoWayCommunicationPatternEClass->setName("TwoWayCommunicationPattern");
    m_TwoWayCommunicationPatternEClass->setAbstract(true);
    m_TwoWayCommunicationPatternEClass->setInterface(false);

    // TODO: Initialize data types

    _initialize();
}

::ecore::EClass_ptr CommunicationPatternPackage::getCommunicationPattern()
{
    return m_CommunicationPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getPushPattern()
{
    return m_PushPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getQueryPattern()
{
    return m_QueryPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getEventPattern()
{
    return m_EventPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getSendPattern()
{
    return m_SendPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getForkingPattern()
{
    return m_ForkingPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getJoiningPattern()
{
    return m_JoiningPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getRequestAnswerPattern()
{
    return m_RequestAnswerPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getOneWayCommunicationPattern()
{
    return m_OneWayCommunicationPatternEClass;
}
::ecore::EClass_ptr CommunicationPatternPackage::getTwoWayCommunicationPattern()
{
    return m_TwoWayCommunicationPatternEClass;
}

::ecore::EReference_ptr CommunicationPatternPackage::getPushPattern__dataType()
{
    return m_PushPattern__dataType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getQueryPattern__requestType()
{
    return m_QueryPattern__requestType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getQueryPattern__answerType()
{
    return m_QueryPattern__answerType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getEventPattern__eventType()
{
    return m_EventPattern__eventType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getEventPattern__activationType()
{
    return m_EventPattern__activationType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getEventPattern__eventStateType()
{
    return m_EventPattern__eventStateType;
}
::ecore::EReference_ptr CommunicationPatternPackage::getSendPattern__dataType()
{
    return m_SendPattern__dataType;
}

