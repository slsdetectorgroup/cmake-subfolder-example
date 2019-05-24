
#Always start by specifying the required version of CMake
#it should be backwar compatible but things change slightly
cmake_minimum_required(VERSION 3.9)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(slsDetectorPackage)

#Add and exacutable called example
add_executable(example main.cpp)
target_compile_features(example PRIVATE cxx_std_17)
set_target_properties(example PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


#Link towards slsDetectorShared to get multiDetector etc
target_link_libraries(example slsDetectorShared)