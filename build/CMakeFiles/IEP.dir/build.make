# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/vivia/IEP/IEP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/vivia/IEP/IEP/build

# Include any dependencies generated for this target.
include CMakeFiles/IEP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IEP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IEP.dir/flags.make

CMakeFiles/IEP.dir/Main.cpp.o: CMakeFiles/IEP.dir/flags.make
CMakeFiles/IEP.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vivia/IEP/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IEP.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IEP.dir/Main.cpp.o -c /mnt/c/Users/vivia/IEP/IEP/Main.cpp

CMakeFiles/IEP.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IEP.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vivia/IEP/IEP/Main.cpp > CMakeFiles/IEP.dir/Main.cpp.i

CMakeFiles/IEP.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IEP.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vivia/IEP/IEP/Main.cpp -o CMakeFiles/IEP.dir/Main.cpp.s

# Object files for target IEP
IEP_OBJECTS = \
"CMakeFiles/IEP.dir/Main.cpp.o"

# External object files for target IEP
IEP_EXTERNAL_OBJECTS =

IEP: CMakeFiles/IEP.dir/Main.cpp.o
IEP: CMakeFiles/IEP.dir/build.make
IEP: src/Doctor/libDoctor.a
IEP: src/Hospital/libHospital.a
IEP: CMakeFiles/IEP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/vivia/IEP/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IEP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IEP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IEP.dir/build: IEP

.PHONY : CMakeFiles/IEP.dir/build

CMakeFiles/IEP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IEP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IEP.dir/clean

CMakeFiles/IEP.dir/depend:
	cd /mnt/c/Users/vivia/IEP/IEP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/vivia/IEP/IEP /mnt/c/Users/vivia/IEP/IEP /mnt/c/Users/vivia/IEP/IEP/build /mnt/c/Users/vivia/IEP/IEP/build /mnt/c/Users/vivia/IEP/IEP/build/CMakeFiles/IEP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IEP.dir/depend

