// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * standardized_problem/dllStandardized_problem.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _DLL_STANDARDIZED_PROBLEM_HPP
#define _DLL_STANDARDIZED_PROBLEM_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_STANDARDIZED_PROBLEM_DLL  set to 1 when building the dll, else unset
 * - USE_STANDARDIZED_PROBLEM_DLL    set to 1 when using the dll, else unset
 * - EXPORT_STANDARDIZED_PROBLEM_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_STANDARDIZED_PROBLEM_DLL)
#       if defined(USE_STANDARDIZED_PROBLEM_DLL)
#           undef USE_STANDARDIZED_PROBLEM_DLL
#       endif

#       define EXPORT_STANDARDIZED_PROBLEM_DLL __declspec(dllexport)
#       define EXTERN_STANDARDIZED_PROBLEM_DLL __declspec(dllimport)

#   else
#       if !defined(USE_STANDARDIZED_PROBLEM_DLL)
#           define USE_STANDARDIZED_PROBLEM_DLL 1
#       endif

#       define EXPORT_STANDARDIZED_PROBLEM_DLL __declspec(dllimport)
#       define EXTERN_STANDARDIZED_PROBLEM_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_STANDARDIZED_PROBLEM_DLL
#   define EXTERN_STANDARDIZED_PROBLEM_DLL

#endif

#endif // _STANDARDIZED_PROBLEM_HPP

