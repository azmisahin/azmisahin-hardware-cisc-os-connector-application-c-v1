cmake_minimum_required(VERSION 3.0.0)
project(connector VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(connector src/connector.cpp)
add_executable(connector_test tests/connector_test.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
