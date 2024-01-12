cmake_minimum_required(VERSION 3.14)
project(myDetectorIntegration)

add_subdirectory(slsDetectorPackage)

#Add your executable/library here
add_executable(example main.cpp)
target_compile_features(example PRIVATE cxx_std_11)

#Link towards slsDetectorShared
target_link_libraries(example slsDetectorShared)
