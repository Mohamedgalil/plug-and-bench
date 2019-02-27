
#
# componentMode.cmake
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

set(componentMode_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeRepository.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeRepositoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeCollection.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeCollectionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeDefinitionImpl.cpp
)

set(componentMode_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/componentMode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeRepository.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeCollection.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeDefinition.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeFactory.hpp DESTINATION include/emf4cpp/componentMode)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModePackage.hpp DESTINATION include/emf4cpp/componentMode)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeModel.hpp DESTINATION include/emf4cpp/componentMode)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeRepository.hpp DESTINATION include/emf4cpp/componentMode)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeCollection.hpp DESTINATION include/emf4cpp/componentMode)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/ComponentModeDefinition.hpp DESTINATION include/emf4cpp/componentMode)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentMode/dllComponentMode.hpp DESTINATION include/emf4cpp/componentMode)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-componentMode SHARED ${componentMode_HEADERS} ${componentMode_SOURCES})
set_target_properties(emf4cpp-componentMode PROPERTIES COMPILE_FLAGS "-DMAKE_COMPONENTMODE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-componentMode emf4cpp-ecore)

install(TARGETS emf4cpp-componentMode DESTINATION lib)

