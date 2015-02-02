##############################################################################
# Cmake
##############################################################################

cmake_minimum_required(VERSION 2.8.3)
project(yaml_cpp_0_3)

##############################################################################
# Catkin
##############################################################################

find_package(catkin REQUIRED COMPONENTS  )
include_directories(include ${catkin_INCLUDE_DIRS})

##############################################################################
# Download
##############################################################################

#set(PROJECT_SOURCE_DIR @PROJECT_SOURCE_DIR@)
#if( NOT EXISTS ${PROJECT_SOURCE_DIR}/yaml-cpp-0.3.0.tar.gz )
#message(STATUS "Downloading yaml sources")
#file(DOWNLOAD "http://yaml-cpp.googlecode.com/files/yaml-cpp-0.3.0.tar.gz"
#      ${PROJECT_SOURCE_DIR}/yaml-cpp-0.3.0.tar.gz      
#      SHOW_PROGRESS
#    )
#endif()
#
#if( NOT EXISTS ${PROJECT_SOURCE_DIR}/yaml-cpp )
#    EXECUTE_PROCESS(COMMAND tar xzf ${PROJECT_SOURCE_DIR}/yaml-cpp-0.3.0.tar.gz
#      WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
#    )
#endif()

##############################################################################
# Catkin
##############################################################################

catkin_package(
    INCLUDE_DIRS yaml-cpp/include
    LIBRARIES yaml-cpp-0.3
)

##############################################################################
# Sources
##############################################################################
          
add_subdirectory(yaml-cpp)             
