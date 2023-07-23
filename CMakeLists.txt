cmake_minimum_required(VERSION 3.0.0)
project(cpp-study VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

file(GLOB SRC_DIR_LIST "src/*.cpp" "src/*.c")
message(STATUS "SRC_DIR_LIST = ${SRC_DIR_LIST}")

add_executable(cpp-study ${SRC_DIR_LIST})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
