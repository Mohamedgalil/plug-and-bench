// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/Tuple.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_TUPLE_HPP
#define STANDARDIZED_PROBLEM_TUPLE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <ecore_forward.hpp>
#include <serviceDefinition_forward.hpp>
#include <communicationObject_forward.hpp>
#include <standardized_problem/DescriptorObject.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(Tuple_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL Tuple : public virtual ::standardized_problem::DescriptorObject
{
public:
    Tuple();

    virtual ~Tuple();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBigDecimal getWeight () const;
    virtual void setWeight (::ecore::EBigDecimal _weight);

    // References
    virtual ::standardized_problem::ScenarioDef_ptr getScenarioDef () const;
    virtual void setScenarioDef (::standardized_problem::ScenarioDef_ptr _scenarioDef);
    virtual ::standardized_problem::ScenarioDef_ptr basicgetScenarioDef ();
    virtual void basicsetScenarioDef (::standardized_problem::ScenarioDef_ptr _scenarioDef);

    virtual ::serviceDefinition::CommunicationServiceDefinition_ptr getCommServiceDef () const;
    virtual void setCommServiceDef (::serviceDefinition::CommunicationServiceDefinition_ptr _commServiceDef);

    virtual ::communicationObject::CommunicationObject_ptr getCommObject () const;
    virtual void setCommObject (::communicationObject::CommunicationObject_ptr _commObject);

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& getWeightedperfmeasure () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& getWeightedperfmeasure ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariable_ptr >& getEnvironmentVariable () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariable_ptr >& getEnvironmentVariable ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::TUPLE;

    /*PROTECTED REGION ID(Tuple) START*/
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

    /*PROTECTED REGION ID(TupleImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Tuple_ptr _this()
    {   return Tuple_ptr(this);}

    // Attributes

    ::ecore::EBigDecimal m_weight;

    // References

    ::standardized_problem::ScenarioDef_ptr m_scenarioDef;

    ::serviceDefinition::CommunicationServiceDefinition_ptr m_commServiceDef;

    ::communicationObject::CommunicationObject_ptr m_commObject;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >> m_weightedperfmeasure;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariable_ptr >> m_environmentVariable;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_TUPLE_HPP

