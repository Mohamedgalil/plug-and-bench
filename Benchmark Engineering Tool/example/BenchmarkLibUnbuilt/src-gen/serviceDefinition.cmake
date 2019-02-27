
#
# serviceDefinition.cmake
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

set(serviceDefinition_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefRepository.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefRepositoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/AbstractServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/AbstractServiceDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommRepoImport.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommRepoImportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceRepoVersion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceRepoVersionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceProperty.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServicePropertyImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommunicationServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommunicationServiceDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CoordinationServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CoordinationServiceDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ForkingServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ForkingServiceDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/RequestAnswerServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/RequestAnswerServiceDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OneWayCommunicationService.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OneWayCommunicationServiceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/TwoWayCommunicationService.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/TwoWayCommunicationServiceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OptionalCoordinationService.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OptionalCoordinationServiceImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/JoiningServiceDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/JoiningServiceDefinitionImpl.cpp
)

set(serviceDefinition_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefRepository.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/AbstractServiceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommRepoImport.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceRepoVersion.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceProperty.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommunicationServiceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CoordinationServiceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ForkingServiceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/RequestAnswerServiceDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OneWayCommunicationService.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/TwoWayCommunicationService.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OptionalCoordinationService.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/JoiningServiceDefinition.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionFactory.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefinitionPackage.hpp DESTINATION include/emf4cpp/serviceDefinition)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefModel.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceDefRepository.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/AbstractServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommRepoImport.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceRepoVersion.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ServiceProperty.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CommunicationServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/CoordinationServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/ForkingServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/RequestAnswerServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OneWayCommunicationService.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/TwoWayCommunicationService.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/OptionalCoordinationService.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/JoiningServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/serviceDefinition/dllServiceDefinition.hpp DESTINATION include/emf4cpp/serviceDefinition)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-serviceDefinition SHARED ${serviceDefinition_HEADERS} ${serviceDefinition_SOURCES})
set_target_properties(emf4cpp-serviceDefinition PROPERTIES COMPILE_FLAGS "-DMAKE_SERVICEDEFINITION_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-serviceDefinition emf4cpp-ecore)

install(TARGETS emf4cpp-serviceDefinition DESTINATION lib)

