cmake_minimum_required(VERSION 3.12)
project(myintegration)

find_package(slsDetectorPackage 7.0 REQUIRED)
add_executable(example main.cpp)
target_link_libraries(example slsDetectorShared)
