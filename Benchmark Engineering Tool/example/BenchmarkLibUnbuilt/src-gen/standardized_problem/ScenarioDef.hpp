// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/ScenarioDef.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_SCENARIODEF_HPP
#define STANDARDIZED_PROBLEM_SCENARIODEF_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <ecore_forward.hpp>
#include <serviceDefinition_forward.hpp>
#include <standardized_problem/DescriptorObject.hpp>
#include <standardized_problem/IScoreElement.hpp>
#include <standardized_problem/IScore.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(ScenarioDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL ScenarioDef : public virtual ::standardized_problem::DescriptorObject, public virtual ::standardized_problem::IScoreElement, public virtual ::standardized_problem::IScore
{
public:
    ScenarioDef();

    virtual ~ScenarioDef();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EBigDecimal getWeight () const;
    virtual void setWeight (::ecore::EBigDecimal _weight);

    // References
    virtual const ::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >& getCommServDef () const;
    virtual ::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >& getCommServDef ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::Tuple_ptr >& getTuple () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::Tuple_ptr >& getTuple ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& getPerformanceMeasures () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >& getPerformanceMeasures ();

    virtual const ::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraint_ptr >& getBenchmarkconstraint () const;
    virtual ::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraint_ptr >& getBenchmarkconstraint ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::SCENARIODEF;

    /*PROTECTED REGION ID(ScenarioDef) START*/
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

    /*PROTECTED REGION ID(ScenarioDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ScenarioDef_ptr _this()
    {   return ScenarioDef_ptr(this);}

    // Attributes

    ::ecore::EBigDecimal m_weight;

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::serviceDefinition::CommunicationServiceDefinition_ptr >> m_commServDef;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::Tuple_ptr >> m_tuple;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::WeightedPerfMeasure_ptr >> m_performanceMeasures;

    std::shared_ptr<::ecorecpp::mapping::EList< ::standardized_problem::BenchmarkConstraint_ptr >> m_benchmarkconstraint;

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_SCENARIODEF_HPP

