project(myDetectorIntegration)
cmake_minimum_required(VERSION 3.12)
add_subdirectory(slsDetectorPackage)

#Add and executable called example
add_executable(example main.cpp)
target_compile_features(example PRIVATE cxx_std_11)

#Choose the output directory
set_target_properties(example PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

#Link towards slsDetectorShared
target_link_libraries(example slsDetectorShared)