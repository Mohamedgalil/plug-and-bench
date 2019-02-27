
#
# communicationObject.cmake
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

set(communicationObject_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectModel.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectModelImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectsRepository.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectsRepositoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/AbstractCommElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/AbstractCommElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommRepositoryImport.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommRepositoryImportImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Version.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/VersionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Enumeration.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/EnumerationImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObject.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementReference.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementReferenceImpl.cpp
)

set(communicationObject_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/communicationObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectModel.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectsRepository.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/AbstractCommElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommRepositoryImport.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Version.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Enumeration.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObject.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementReference.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectFactory.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObjectPackage.hpp DESTINATION include/emf4cpp/communicationObject)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectModel.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommObjectsRepository.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/AbstractCommElement.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommRepositoryImport.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Version.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/Enumeration.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommunicationObject.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementValue.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/CommElementReference.hpp DESTINATION include/emf4cpp/communicationObject)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationObject/dllCommunicationObject.hpp DESTINATION include/emf4cpp/communicationObject)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-communicationObject SHARED ${communicationObject_HEADERS} ${communicationObject_SOURCES})
set_target_properties(emf4cpp-communicationObject PROPERTIES COMPILE_FLAGS "-DMAKE_COMMUNICATIONOBJECT_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-communicationObject emf4cpp-ecore)

install(TARGETS emf4cpp-communicationObject DESTINATION lib)

