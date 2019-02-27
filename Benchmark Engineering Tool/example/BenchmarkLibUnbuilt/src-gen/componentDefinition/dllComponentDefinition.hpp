// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * componentDefinition/dllComponentDefinition.hpp
 * This file was created by EMF4CPP 2.0.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _DLL_COMPONENTDEFINITION_HPP
#define _DLL_COMPONENTDEFINITION_HPP
/*
 * Defines 3 preprocessor symbols:
 * - MAKE_COMPONENTDEFINITION_DLL  set to 1 when building the dll, else unset
 * - USE_COMPONENTDEFINITION_DLL    set to 1 when using the dll, else unset
 * - EXPORT_COMPONENTDEFINITION_DLL  always set, import when using the dll,
 *          export when building dll
 *
 * Pattern taken from qglobal.h
 */

#if defined(__WIN32__) || defined(_WIN32)

#   if defined(MAKE_COMPONENTDEFINITION_DLL)
#       if defined(USE_COMPONENTDEFINITION_DLL)
#           undef USE_COMPONENTDEFINITION_DLL
#       endif

#       define EXPORT_COMPONENTDEFINITION_DLL __declspec(dllexport)
#       define EXTERN_COMPONENTDEFINITION_DLL __declspec(dllimport)

#   else
#       if !defined(USE_COMPONENTDEFINITION_DLL)
#           define USE_COMPONENTDEFINITION_DLL 1
#       endif

#       define EXPORT_COMPONENTDEFINITION_DLL __declspec(dllimport)
#       define EXTERN_COMPONENTDEFINITION_DLL __declspec(dllexport)

#   endif

#else

#   define EXPORT_COMPONENTDEFINITION_DLL
#   define EXTERN_COMPONENTDEFINITION_DLL

#endif

#endif // _COMPONENTDEFINITION_HPP

