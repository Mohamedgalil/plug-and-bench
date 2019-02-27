// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * communicationPattern/CommunicationPatternPackage.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _COMMUNICATIONPATTERNPACKAGE_HPP
#define _COMMUNICATIONPATTERNPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <communicationPattern_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include <communicationPattern/dllCommunicationPattern.hpp>

namespace communicationPattern
{

class EXPORT_COMMUNICATIONPATTERN_DLL CommunicationPatternPackage : public virtual ::ecore::EPackage
{
public:

    static CommunicationPatternPackage_ptr _instance();
    static CommunicationPatternPackage_ptr _getInstanceAndRemoveOwnership();

    // IDs for classifiers

    static const int COMMUNICATIONPATTERN = 0;

    static const int EVENTPATTERN = 1;

    static const int FORKINGPATTERN = 2;

    static const int JOININGPATTERN = 3;

    static const int ONEWAYCOMMUNICATIONPATTERN = 4;

    static const int PUSHPATTERN = 5;

    static const int QUERYPATTERN = 6;

    static const int REQUESTANSWERPATTERN = 7;

    static const int SENDPATTERN = 8;

    static const int TWOWAYCOMMUNICATIONPATTERN = 9;

    static const int PUSHPATTERN__DATATYPE = 0;

    static const int QUERYPATTERN__REQUESTTYPE = 1;

    static const int QUERYPATTERN__ANSWERTYPE = 2;

    static const int EVENTPATTERN__EVENTTYPE = 3;

    static const int EVENTPATTERN__ACTIVATIONTYPE = 4;

    static const int EVENTPATTERN__EVENTSTATETYPE = 5;

    static const int SENDPATTERN__DATATYPE = 6;

    // IDs for classifiers for class CommunicationPattern 

    // IDs for classifiers for class EventPattern 

    // IDs for classifiers for class ForkingPattern 

    // IDs for classifiers for class JoiningPattern 

    // IDs for classifiers for class OneWayCommunicationPattern 

    // IDs for classifiers for class PushPattern 

    // IDs for classifiers for class QueryPattern 

    // IDs for classifiers for class RequestAnswerPattern 

    // IDs for classifiers for class SendPattern 

    // IDs for classifiers for class TwoWayCommunicationPattern 

    // EClassifiers methods

    virtual ::ecore::EClass_ptr getCommunicationPattern();

    virtual ::ecore::EClass_ptr getPushPattern();

    virtual ::ecore::EClass_ptr getQueryPattern();

    virtual ::ecore::EClass_ptr getEventPattern();

    virtual ::ecore::EClass_ptr getSendPattern();

    virtual ::ecore::EClass_ptr getForkingPattern();

    virtual ::ecore::EClass_ptr getJoiningPattern();

    virtual ::ecore::EClass_ptr getRequestAnswerPattern();

    virtual ::ecore::EClass_ptr getOneWayCommunicationPattern();

    virtual ::ecore::EClass_ptr getTwoWayCommunicationPattern();

    // EStructuralFeatures methods

    virtual ::ecore::EReference_ptr getPushPattern__dataType();

    virtual ::ecore::EReference_ptr getQueryPattern__requestType();

    virtual ::ecore::EReference_ptr getQueryPattern__answerType();

    virtual ::ecore::EReference_ptr getEventPattern__eventType();

    virtual ::ecore::EReference_ptr getEventPattern__activationType();

    virtual ::ecore::EReference_ptr getEventPattern__eventStateType();

    virtual ::ecore::EReference_ptr getSendPattern__dataType();

protected:

    static ::ecore::Ptr< CommunicationPatternPackage > s_instance;

    CommunicationPatternPackage();
    void _initPackage();

    // EClass instances 

    ::ecore::EClass_ptr m_CommunicationPatternEClass;

    ::ecore::EClass_ptr m_PushPatternEClass;

    ::ecore::EClass_ptr m_QueryPatternEClass;

    ::ecore::EClass_ptr m_EventPatternEClass;

    ::ecore::EClass_ptr m_SendPatternEClass;

    ::ecore::EClass_ptr m_ForkingPatternEClass;

    ::ecore::EClass_ptr m_JoiningPatternEClass;

    ::ecore::EClass_ptr m_RequestAnswerPatternEClass;

    ::ecore::EClass_ptr m_OneWayCommunicationPatternEClass;

    ::ecore::EClass_ptr m_TwoWayCommunicationPatternEClass;

    // EEnuminstances 

    // EDataType instances 

    // EStructuralFeatures instances

    ::ecore::EReference_ptr m_PushPattern__dataType;

    ::ecore::EReference_ptr m_QueryPattern__requestType;

    ::ecore::EReference_ptr m_QueryPattern__answerType;

    ::ecore::EReference_ptr m_EventPattern__eventType;

    ::ecore::EReference_ptr m_EventPattern__activationType;

    ::ecore::EReference_ptr m_EventPattern__eventStateType;

    ::ecore::EReference_ptr m_SendPattern__dataType;

};

}
 // communicationPattern

#endif // _COMMUNICATIONPATTERNPACKAGE_HPP

