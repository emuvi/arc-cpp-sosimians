cmake_minimum_required(VERSION 3.0.0)
project(sosimians VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB_RECURSE app_files "app/**" "source/**" "include/**")
add_executable(sosimians ${app_files})
target_include_directories(sosimians PRIVATE "include")

file(GLOB_RECURSE test_files "test/**" "source/**" "include/**")
add_executable(sosimians_test ${test_files})
target_include_directories(sosimians_test PRIVATE "include")
add_test(NAME sosimians_test COMMAND sosimians_test)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)