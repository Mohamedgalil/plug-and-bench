
#
# standardized_problem.cmake
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

set(standardized_problem_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/StandardizedProblem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/StandardizedProblemImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/ScenarioDef.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/ScenarioDefImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/PerformanceMeasure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/PerformanceMeasureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/DescriptorObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/DescriptorObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariableDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariableDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScoreElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScoreElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScore.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScoreImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Tuple.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/TupleImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/WeightedPerfMeasure.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/WeightedPerfMeasureImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariableImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraint.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraintImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraintDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraintDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkAttributeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkAttributeDefinitionImpl.cpp
)

set(standardized_problem_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/StandardizedProblem.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/ScenarioDef.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/PerformanceMeasure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/DescriptorObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariableDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScoreElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScore.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Tuple.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/WeightedPerfMeasure.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariable.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraint.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraintDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkAttributeDefinition.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemFactory.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Standardized_problemPackage.hpp DESTINATION include/emf4cpp/standardized_problem)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/StandardizedProblem.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/ScenarioDef.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/PerformanceMeasure.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/DescriptorObject.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariableDefinition.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScoreElement.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/IScore.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/Tuple.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/WeightedPerfMeasure.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/EnvironmentVariable.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraint.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkConstraintDefinition.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/BenchmarkAttributeDefinition.hpp DESTINATION include/emf4cpp/standardized_problem)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/standardized_problem/dllStandardized_problem.hpp DESTINATION include/emf4cpp/standardized_problem)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-standardized_problem SHARED ${standardized_problem_HEADERS} ${standardized_problem_SOURCES})
set_target_properties(emf4cpp-standardized_problem PROPERTIES COMPILE_FLAGS "-DMAKE_STANDARDIZED_PROBLEM_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-standardized_problem emf4cpp-ecore)

install(TARGETS emf4cpp-standardized_problem DESTINATION lib)

