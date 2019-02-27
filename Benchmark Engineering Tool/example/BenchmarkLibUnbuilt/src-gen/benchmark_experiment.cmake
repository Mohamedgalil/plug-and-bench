
#
# benchmark_experiment.cmake
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

set(benchmark_experiment_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Scenario.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/ScenarioImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/BenchmarkExperiment.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/BenchmarkExperimentImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/PerfValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/PerfValueImpl.cpp
)

set(benchmark_experiment_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Scenario.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/BenchmarkExperiment.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/PerfValue.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentFactory.hpp DESTINATION include/emf4cpp/benchmark_experiment)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Benchmark_experimentPackage.hpp DESTINATION include/emf4cpp/benchmark_experiment)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/Scenario.hpp DESTINATION include/emf4cpp/benchmark_experiment)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/BenchmarkExperiment.hpp DESTINATION include/emf4cpp/benchmark_experiment)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/PerfValue.hpp DESTINATION include/emf4cpp/benchmark_experiment)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/benchmark_experiment/dllBenchmark_experiment.hpp DESTINATION include/emf4cpp/benchmark_experiment)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-benchmark_experiment SHARED ${benchmark_experiment_HEADERS} ${benchmark_experiment_SOURCES})
set_target_properties(emf4cpp-benchmark_experiment PROPERTIES COMPILE_FLAGS "-DMAKE_BENCHMARK_EXPERIMENT_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-benchmark_experiment emf4cpp-ecore)

install(TARGETS emf4cpp-benchmark_experiment DESTINATION lib)

