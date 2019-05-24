cmake_minimum_required(VERSION 3.9)
add_subdirectory(slsDetectorPackage)

#Add and executable called example
add_executable(example main.cpp)
target_compile_features(example PRIVATE cxx_std_11)

#Choose the output directory
set_target_properties(example PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

#Link towards slsDetectorShared to get multiDetector etc.
target_link_libraries(example slsDetectorShared)