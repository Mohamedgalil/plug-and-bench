// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * serviceDefinition/dllServiceDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _DLL_SERVICEDEFINITION_HPP
#define _DLL_SERVICEDEFINITION_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_SERVICEDEFINITION_DLL  set to 1 when building the dll, else unset
 * - USE_SERVICEDEFINITION_DLL    set to 1 when using the dll, else unset
 * - EXPORT_SERVICEDEFINITION_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_SERVICEDEFINITION_DLL)
#       if defined(USE_SERVICEDEFINITION_DLL)
#           undef USE_SERVICEDEFINITION_DLL
#       endif

#       define EXPORT_SERVICEDEFINITION_DLL __declspec(dllexport)
#       define EXTERN_SERVICEDEFINITION_DLL __declspec(dllimport)

#   else
#       if !defined(USE_SERVICEDEFINITION_DLL)
#           define USE_SERVICEDEFINITION_DLL 1
#       endif

#       define EXPORT_SERVICEDEFINITION_DLL __declspec(dllimport)
#       define EXTERN_SERVICEDEFINITION_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_SERVICEDEFINITION_DLL
#   define EXTERN_SERVICEDEFINITION_DLL

#endif

#endif // _SERVICEDEFINITION_HPP

