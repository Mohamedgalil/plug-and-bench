
#
# stateMachine.cmake
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

set(stateMachine_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachinePackage.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachineFactory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachinePackageImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachineFactoryImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateTransition.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateTransitionImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachineImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractMachineElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractMachineElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractStateElement.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractStateElementImpl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/State.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateImpl.cpp
)

set(stateMachine_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/stateMachine.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine_forward.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachinePackage.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachineFactory.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateTransition.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachine.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractMachineElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractStateElement.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/State.hpp
)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine_forward.hpp DESTINATION include/emf4cpp/)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachineFactory.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachinePackage.hpp DESTINATION include/emf4cpp/stateMachine)   
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateTransition.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/StateMachine.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractMachineElement.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/AbstractStateElement.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/State.hpp DESTINATION include/emf4cpp/stateMachine)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/stateMachine/dllStateMachine.hpp DESTINATION include/emf4cpp/stateMachine)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp /home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../include/emf4cpp)
link_directories(/home/smartsoft/emf4cpp/builds/emf4cpp-generator-2.0.0/bin/../lib)

add_library(emf4cpp-stateMachine SHARED ${stateMachine_HEADERS} ${stateMachine_SOURCES})
set_target_properties(emf4cpp-stateMachine PROPERTIES COMPILE_FLAGS "-DMAKE_STATEMACHINE_DLL" VERSION 0.0.1 SOVERSION 1)
target_link_libraries(emf4cpp-stateMachine emf4cpp-ecore)

install(TARGETS emf4cpp-stateMachine DESTINATION lib)

