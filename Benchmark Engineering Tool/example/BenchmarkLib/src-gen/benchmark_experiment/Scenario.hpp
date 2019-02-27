// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * benchmark_experiment/Scenario.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef BENCHMARK_EXPERIMENT_SCENARIO_HPP
#define BENCHMARK_EXPERIMENT_SCENARIO_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <benchmark_experiment/dllBenchmark_experiment.hpp>
#include <benchmark_experiment_forward.hpp>

#include <communicationObject_forward.hpp>
#include <standardized_problem_forward.hpp>
#include <standardized_problem/IScore.hpp>

#include "Benchmark_experimentPackage.hpp"

/*PROTECTED REGION ID(Scenario_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace benchmark_experiment
{

class EXPORT_BENCHMARK_EXPERIMENT_DLL Scenario : public virtual ::standardized_problem::IScore
{
public:
    Scenario();

    virtual ~Scenario();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getTestData () const;
    virtual ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getTestData ();

    virtual const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getGroundTruthData () const;
    virtual ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getGroundTruthData ();

    virtual const ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getRecievedData () const;
    virtual ::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >& getRecievedData ();

    virtual const ::ecorecpp::mapping::EList< ::benchmark_experiment::PerfValue_ptr >& getPerfvalue () const;
    virtual ::ecorecpp::mapping::EList< ::benchmark_experiment::PerfValue_ptr >& getPerfvalue ();

    virtual ::standardized_problem::Tuple_ptr getTuple () const;
    virtual void setTuple (::standardized_problem::Tuple_ptr _tuple);

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Benchmark_experimentPackage::SCENARIO;

    /*PROTECTED REGION ID(Scenario) START*/
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

    /*PROTECTED REGION ID(ScenarioImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    Scenario_ptr _this()
    {   return Scenario_ptr(this);}

    // Attributes

    // References

    std::shared_ptr<::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >> m_testData;

    std::shared_ptr<::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >> m_groundTruthData;

    std::shared_ptr<::ecorecpp::mapping::EList< ::communicationObject::CommunicationObject_ptr >> m_recievedData;

    std::shared_ptr<::ecorecpp::mapping::EList< ::benchmark_experiment::PerfValue_ptr >> m_perfvalue;

    ::standardized_problem::Tuple_ptr m_tuple;

};

}
 // benchmark_experiment

#endif // BENCHMARK_EXPERIMENT_SCENARIO_HPP

