
#
# parameterDefinition.cmake
# This file was created by EMF4CPP 2.0.0 and is copyrighted by the
# respective user and/or provider of the processed ECORE model.
#
# EMF4CPP is free software. You can obtain it from
# https://github.com/catedrasaes-umu/emf4cpp
#
#


set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

set(parameterDefinition_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetRepository.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetRepositoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/AbstractParameter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/AbstractParameterImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/TriggerDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/TriggerDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefRepoImport.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefRepoImportImpl.cpp
)

set(parameterDefinition_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetRepository.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/AbstractParameter.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/TriggerDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefRepoImport.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionFactory.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinitionPackage.hpp DESTINATION include/emf4cpp/parameterDefinition)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefModel.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetRepository.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterSetDefinition.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/AbstractParameter.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParameterDefinition.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/TriggerDefinition.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/ParamDefRepoImport.hpp DESTINATION include/emf4cpp/parameterDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/parameterDefinition/dllParameterDefinition.hpp DESTINATION include/emf4cpp/parameterDefinition)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-parameterDefinition SHARED ${parameterDefinition_HEADERS} ${parameterDefinition_SOURCES})
set_target_properties(emf4cpp-parameterDefinition PROPERTIES COMPILE_FLAGS "-DMAKE_PARAMETERDEFINITION_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-parameterDefinition emf4cpp-ecore)

install(TARGETS emf4cpp-parameterDefinition DESTINATION lib)

