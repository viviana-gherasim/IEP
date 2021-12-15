add_library(Doctor
    src/Doctor.hpp
    src/Doctor.cpp
    src/Pacient.hpp
    src/Pacient.cpp
    src/Surgeon.hpp
    src/Surgeon.cpp
    src/Cardiologist.hpp
    src/Cardiologist.cpp
    src/Pediatrician.hpp
    src/Pediatrician.cpp
)

target_include_directories(Doctor PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")