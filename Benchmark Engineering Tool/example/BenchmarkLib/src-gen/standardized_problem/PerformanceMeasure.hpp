// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/PerformanceMeasure.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef STANDARDIZED_PROBLEM_PERFORMANCEMEASURE_HPP
#define STANDARDIZED_PROBLEM_PERFORMANCEMEASURE_HPP

#include <ecorecpp/mapping_forward.hpp>

#include <standardized_problem/dllStandardized_problem.hpp>
#include <standardized_problem_forward.hpp>

#include <ecore_forward.hpp>
#include <standardized_problem/DescriptorObject.hpp>

#include "Standardized_problemPackage.hpp"

/*PROTECTED REGION ID(PerformanceMeasure_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace standardized_problem
{

class EXPORT_STANDARDIZED_PROBLEM_DLL PerformanceMeasure : public virtual ::standardized_problem::DescriptorObject
{
public:
    PerformanceMeasure();

    virtual ~PerformanceMeasure();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::ecore::EString const& getMetric () const;
    virtual void setMetric (::ecore::EString const& _metric);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = Standardized_problemPackage::PERFORMANCEMEASURE;

    /*PROTECTED REGION ID(PerformanceMeasure) START*/
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

    /*PROTECTED REGION ID(PerformanceMeasureImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    PerformanceMeasure_ptr _this()
    {   return PerformanceMeasure_ptr(this);}

    // Attributes

    ::ecore::EString m_metric;

    // References

};

}
 // standardized_problem

#endif // STANDARDIZED_PROBLEM_PERFORMANCEMEASURE_HPP

