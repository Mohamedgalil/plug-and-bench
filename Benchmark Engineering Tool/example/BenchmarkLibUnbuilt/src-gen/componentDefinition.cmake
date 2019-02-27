
#
# componentDefinition.cmake
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

set(componentDefinition_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/Activity.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ActivityImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ActivityExtension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ActivityExtensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputHandler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputHandlerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ServiceRepoImport.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ServiceRepoImportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/OutputPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/OutputPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AnswerPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AnswerPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPortImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPortExtension.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPortExtensionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestHandler.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestHandlerImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNode.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNodeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNodeObserver.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNodeObserverImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPortLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPortLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPortLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPortLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentLink.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentLinkImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/NamedComponentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/NamedComponentElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/DerivedComponentElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/DerivedComponentElementImpl.cpp
)

set(componentDefinition_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/Activity.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ActivityExtension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputHandler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ServiceRepoImport.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/OutputPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AnswerPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPort.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPortExtension.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestHandler.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNode.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNodeObserver.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPortLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPortLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentLink.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/NamedComponentElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/DerivedComponentElement.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionFactory.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinitionPackage.hpp DESTINATION include/emf4cpp/componentDefinition)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefModel.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentDefinition.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/Activity.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ActivityExtension.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputHandler.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ServiceRepoImport.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/OutputPort.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPort.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPort.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AnswerPort.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPort.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentPortExtension.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestHandler.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentElement.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNode.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/ComponentSubNodeObserver.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/InputPortLink.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/RequestPortLink.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/AbstractComponentLink.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/NamedComponentElement.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/DerivedComponentElement.hpp DESTINATION include/emf4cpp/componentDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/componentDefinition/dllComponentDefinition.hpp DESTINATION include/emf4cpp/componentDefinition)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-componentDefinition SHARED ${componentDefinition_HEADERS} ${componentDefinition_SOURCES})
set_target_properties(emf4cpp-componentDefinition PROPERTIES COMPILE_FLAGS "-DMAKE_COMPONENTDEFINITION_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-componentDefinition emf4cpp-ecore)

install(TARGETS emf4cpp-componentDefinition DESTINATION lib)

