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
include src/Lock/CMakeFiles/Lock.dir/depend.make

# Include the progress variables for this target.
include src/Lock/CMakeFiles/Lock.dir/progress.make

# Include the compile flags for this target's objects.
include src/Lock/CMakeFiles/Lock.dir/flags.make

src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.o: src/Lock/CMakeFiles/Lock.dir/flags.make
src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.o: ../src/Lock/src/Lock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vivia/IEP/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.o"
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lock.dir/src/Lock.cpp.o -c /mnt/c/Users/vivia/IEP/IEP/src/Lock/src/Lock.cpp

src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lock.dir/src/Lock.cpp.i"
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vivia/IEP/IEP/src/Lock/src/Lock.cpp > CMakeFiles/Lock.dir/src/Lock.cpp.i

src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lock.dir/src/Lock.cpp.s"
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vivia/IEP/IEP/src/Lock/src/Lock.cpp -o CMakeFiles/Lock.dir/src/Lock.cpp.s

# Object files for target Lock
Lock_OBJECTS = \
"CMakeFiles/Lock.dir/src/Lock.cpp.o"

# External object files for target Lock
Lock_EXTERNAL_OBJECTS =

src/Lock/libLock.a: src/Lock/CMakeFiles/Lock.dir/src/Lock.cpp.o
src/Lock/libLock.a: src/Lock/CMakeFiles/Lock.dir/build.make
src/Lock/libLock.a: src/Lock/CMakeFiles/Lock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/vivia/IEP/IEP/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLock.a"
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && $(CMAKE_COMMAND) -P CMakeFiles/Lock.dir/cmake_clean_target.cmake
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Lock/CMakeFiles/Lock.dir/build: src/Lock/libLock.a

.PHONY : src/Lock/CMakeFiles/Lock.dir/build

src/Lock/CMakeFiles/Lock.dir/clean:
	cd /mnt/c/Users/vivia/IEP/IEP/build/src/Lock && $(CMAKE_COMMAND) -P CMakeFiles/Lock.dir/cmake_clean.cmake
.PHONY : src/Lock/CMakeFiles/Lock.dir/clean

src/Lock/CMakeFiles/Lock.dir/depend:
	cd /mnt/c/Users/vivia/IEP/IEP/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/vivia/IEP/IEP /mnt/c/Users/vivia/IEP/IEP/src/Lock /mnt/c/Users/vivia/IEP/IEP/build /mnt/c/Users/vivia/IEP/IEP/build/src/Lock /mnt/c/Users/vivia/IEP/IEP/build/src/Lock/CMakeFiles/Lock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Lock/CMakeFiles/Lock.dir/depend
