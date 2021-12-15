add_library(Hospital
    src/Hospital.hpp
    src/Hospital.cpp
)

target_include_directories(Hospital PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")