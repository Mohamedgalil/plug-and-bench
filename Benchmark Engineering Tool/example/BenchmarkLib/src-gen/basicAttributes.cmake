
#
# basicAttributes.cmake
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

set(basicAttributes_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeDefinition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeDefinitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeRefinement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeRefinementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractAttributeType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractAttributeTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/PrimitiveType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/PrimitiveTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/SingleValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/SingleValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/FloatingPointValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/FloatingPointValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/IntValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/IntValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/StringValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/StringValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BoolValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BoolValueImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/InlineEnumerationType.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/InlineEnumerationTypeImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationValue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationValueImpl.cpp
)

set(basicAttributes_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeDefinition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeRefinement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractAttributeType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/PrimitiveType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/SingleValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/FloatingPointValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/IntValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/StringValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BoolValue.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/InlineEnumerationType.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationValue.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesFactory.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BasicAttributesPackage.hpp DESTINATION include/emf4cpp/basicAttributes)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeDefinition.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AttributeRefinement.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractAttributeType.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/AbstractValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/PrimitiveType.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/SingleValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/ArrayType.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/FloatingPointValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/IntValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/StringValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/BoolValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/InlineEnumerationType.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationElement.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/EnumerationValue.hpp DESTINATION include/emf4cpp/basicAttributes)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/basicAttributes/dllBasicAttributes.hpp DESTINATION include/emf4cpp/basicAttributes)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-basicAttributes SHARED ${basicAttributes_HEADERS} ${basicAttributes_SOURCES})
set_target_properties(emf4cpp-basicAttributes PROPERTIES COMPILE_FLAGS "-DMAKE_BASICATTRIBUTES_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-basicAttributes emf4cpp-ecore)

install(TARGETS emf4cpp-basicAttributes DESTINATION lib)

