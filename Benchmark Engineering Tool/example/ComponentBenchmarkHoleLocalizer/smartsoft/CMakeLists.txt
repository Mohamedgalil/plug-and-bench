########Benchmark dependencies
add_subdirectory("../../BenchmarkLib/src-gen" "${CMAKE_CURRENT_BINARY_DIR}/build") # relative path to benchmarking library

include_directories(../../BenchmarkLib/src-gen /usr/local/include/emf4cpp ${EMF4CPP_PATH}/emf4cpp.tests/resource ${EMF4CPP_PATH}/emf4cpp /usr/include/x86_64-linux-gnu/qt5)


find_package(Qt5Widgets)
find_package(Qt5Declarative)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}
    ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

set(CMAKE_CXX_FLAGS "-Wall -std=c++11 -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")
set(CMAKE_LD_FLAGS "-L.. -L/opt/emf4cpp/lib")

# test
#add_executable(test-company0 test.cpp)
##############################################

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# find the SmartSoft CMake Macros (version 2 that uses CMake v3)
FIND_FILE(SMART_MACROS SmartMacros2.cmake PATHS $ENV{SMART_ROOT_ACE}/CMakeMacros /opt/smartSoftAce/CMakeMacros/)
INCLUDE(${SMART_MACROS})

# Create and configure a CMake project for a CommunicationObject
SMART_COMPONENT_PROJECT()

# find SmartSoft package
#FIND_SMARTSOFT(3.0)
#FIXME: generalize this
FIND_PACKAGE(AceSmartSoft PATHS $ENV{SMART_ROOT_ACE}/build)

# generte doxygen documentation
SMART_COMPONENT_GENERATE_DOC()

# automatically build CommunicationObject dependencies
SMART_COMPONENT_AUTOBUILD_DEPENDENCIES()

#################################################################################
## here you can put all your project-specific compiler configurations          ##
## using regular CMake commands (like FIND_PACKAGE, INCLUDE_DIRECTORIES, etc.) ##

# you can add additional external libraries using regular CMake commands, e.g.:
#FIND_PACKAGE(<SomePackageName>)
FIND_PACKAGE(open62541 QUIET PATHS /usr/local/lib/cmake)

# these are the regular includes (add your own includes, if needed)
INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_LIST_DIR}/src
  ${CMAKE_CURRENT_LIST_DIR}/src-gen
  ${CMAKE_CURRENT_LIST_DIR}/src-gen/params
)

# collect the toolchain-generated source-files
FILE(GLOB_RECURSE SRC ${CMAKE_CURRENT_LIST_DIR}/src/*.cc)
FILE(GLOB_RECURSE SRC_GEN ${CMAKE_CURRENT_LIST_DIR}/src-gen/*.cc)
FILE(GLOB_RECURSE SRC_GEN_PARAMS ${CMAKE_CURRENT_LIST_DIR}/src-gen/params/*.cc)

# collect your own (local) source-files here (if needed)
#FILE(GLOB_RECURSE USER_SRC ${CMAKE_CURRENT_LIST_DIR}/src/<your-sources>)

# create the executable using collected source-files
ADD_EXECUTABLE(${PROJECT_NAME} ${SRC} ${SRC_GEN} ${SRC_GEN_PARAMS}) # add ${USER_SRC} (if needed)

# link your external libraries here (if there are any)
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} <your-libs>)
IF(open62541_FOUND)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} open62541)
ENDIF(open62541_FOUND)

#INSTALL(FILES ${PROJECT_SOURCE_DIR}/src-gen/${PROJECT_NAME}.ini.template DESTINATION etc)

## end user-code                                                               ##
#################################################################################

# SmartSoftKernel is one of the default dependencies for each component
TARGET_LINK_LIBRARIES(${PROJECT_NAME} AceSmartSoftKernel)

# automatically link to all dependent CommunicationObjects
SMART_COMPONENT_AUTOLINK_DEPENDENCIES()

# automatically install the component target
SMART_COMPONENT_AUTOINSTALL()

target_link_libraries(${PROJECT_NAME} emf4cpp-ecorecpp emf4cpp-ecore emf4cpp-benchmark_experiment emf4cpp-standardized_problem emf4cpp-basicAttributes emf4cpp-communicationObject emf4cpp-serviceDefinition emf4cpp-componentDefinition emf4cpp-communicationPattern emf4cpp-coordinationPattern emf4cpp-componentMode emf4cpp-stateMachine emf4cpp-parameterDefinition Qt5::Widgets)
