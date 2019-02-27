
#
# coordinationPattern.cmake
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

set(coordinationPattern_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/StatePattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/StatePatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/ParameterPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/ParameterPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/DynamicWiringPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/DynamicWiringPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/MonitoringPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/MonitoringPatternImpl.cpp
)

set(coordinationPattern_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/StatePattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/ParameterPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/DynamicWiringPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/MonitoringPattern.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternFactory.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPatternPackage.hpp DESTINATION include/emf4cpp/coordinationPattern)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/CoordinationPattern.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/StatePattern.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/ParameterPattern.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/DynamicWiringPattern.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/MonitoringPattern.hpp DESTINATION include/emf4cpp/coordinationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/coordinationPattern/dllCoordinationPattern.hpp DESTINATION include/emf4cpp/coordinationPattern)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-coordinationPattern SHARED ${coordinationPattern_HEADERS} ${coordinationPattern_SOURCES})
set_target_properties(emf4cpp-coordinationPattern PROPERTIES COMPILE_FLAGS "-DMAKE_COORDINATIONPATTERN_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-coordinationPattern emf4cpp-ecore)

install(TARGETS emf4cpp-coordinationPattern DESTINATION lib)

