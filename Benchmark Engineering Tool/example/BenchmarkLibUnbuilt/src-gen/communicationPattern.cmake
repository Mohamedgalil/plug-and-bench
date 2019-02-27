
#
# communicationPattern.cmake
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

set(communicationPattern_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternPackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternPackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/PushPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/PushPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/QueryPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/QueryPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/EventPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/EventPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/SendPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/SendPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/ForkingPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/ForkingPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/JoiningPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/JoiningPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/RequestAnswerPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/RequestAnswerPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/OneWayCommunicationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/OneWayCommunicationPatternImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/TwoWayCommunicationPattern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/TwoWayCommunicationPatternImpl.cpp
)

set(communicationPattern_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternPackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/PushPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/QueryPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/EventPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/SendPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/ForkingPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/JoiningPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/RequestAnswerPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/OneWayCommunicationPattern.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/TwoWayCommunicationPattern.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternFactory.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPatternPackage.hpp DESTINATION include/emf4cpp/communicationPattern)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/CommunicationPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/PushPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/QueryPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/EventPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/SendPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/ForkingPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/JoiningPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/RequestAnswerPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/OneWayCommunicationPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/TwoWayCommunicationPattern.hpp DESTINATION include/emf4cpp/communicationPattern)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/communicationPattern/dllCommunicationPattern.hpp DESTINATION include/emf4cpp/communicationPattern)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-communicationPattern SHARED ${communicationPattern_HEADERS} ${communicationPattern_SOURCES})
set_target_properties(emf4cpp-communicationPattern PROPERTIES COMPILE_FLAGS "-DMAKE_COMMUNICATIONPATTERN_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-communicationPattern emf4cpp-ecore)

install(TARGETS emf4cpp-communicationPattern DESTINATION lib)

