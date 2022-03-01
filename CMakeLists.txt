cmake_minimum_required(VERSION 2.8.12)
project(RCMake)

include(GenerateExportHeader)
include_directories("${CMAKE_CURRENT_BINARY_DIR}") # foocpp_export.h

add_library(tmb_objective_functioncpp SHARED src/tmb_objective_function.cpp)
generate_export_header(foocpp)

install(TARGETS tmb_objective_functioncpp DESTINATION lib)
