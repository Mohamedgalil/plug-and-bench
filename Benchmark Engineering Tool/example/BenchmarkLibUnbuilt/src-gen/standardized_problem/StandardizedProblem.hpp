// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/StandardizedProblem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_STANDARDIZEDPROBLEM_HPP
#define STANDARDIZED_PROBLEM_STANDARDIZEDPROBLEM_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <ecore_forward.hpp>
#include <serviceDefinition_forward.hpp>
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(StandardizedProblem_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL StandardizedProblem : public virtual ::standardized_problem::DescriptorObject, public virtual ::standardized_problem::IScoreElement, public virtual ::standardized_problem::IScore
{
public:
    StandardizedProblem();

    virtual ~StandardizedProblem();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::ScenarioDef_ptr >& getScenarioDefinition () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::ScenarioDef_ptr >& getScenarioDefinition ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::PerformanceMeasure_ptr >& getPerformanceCriteria () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::PerformanceMeasure_ptr >& getPerformanceCriteria ();

    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >& getCommServiceDef () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >& getCommServiceDef ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariableDefinition_ptr >& getEnvironmentVariableDefinition () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariableDefinition_ptr >& getEnvironmentVariableDefinition ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraintDefinition_ptr >& getBenchmarkConstraintDefinition () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraintDefinition_ptr >& getBenchmarkConstraintDefinition ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::STANDARDIZEDPROBLEM;

    /*PROTECTED REGION ID(StandardizedProblem) START*/
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

    /*PROTECTED REGION ID(StandardizedProblemImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    StandardizedProblem_ptr _this()
    {   return StandardizedProblem_ptr(this);}

    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::ScenarioDef_ptr >> m_scenarioDefinition;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::PerformanceMeasure_ptr >> m_performanceCriteria;

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >> m_commServiceDef;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::EnvironmentVariableDefinition_ptr >> m_environmentVariableDefinition;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraintDefinition_ptr >> m_benchmarkConstraintDefinition;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_STANDARDIZEDPROBLEM_HPP

