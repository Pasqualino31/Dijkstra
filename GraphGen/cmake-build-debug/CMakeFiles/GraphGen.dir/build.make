# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/pj/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/pj/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pj/CLionProjects/week3/GraphGen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pj/CLionProjects/week3/GraphGen/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GraphGen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GraphGen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GraphGen.dir/flags.make

CMakeFiles/GraphGen.dir/main.cpp.o: CMakeFiles/GraphGen.dir/flags.make
CMakeFiles/GraphGen.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pj/CLionProjects/week3/GraphGen/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GraphGen.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GraphGen.dir/main.cpp.o -c /home/pj/CLionProjects/week3/GraphGen/main.cpp

CMakeFiles/GraphGen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphGen.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pj/CLionProjects/week3/GraphGen/main.cpp > CMakeFiles/GraphGen.dir/main.cpp.i

CMakeFiles/GraphGen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphGen.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pj/CLionProjects/week3/GraphGen/main.cpp -o CMakeFiles/GraphGen.dir/main.cpp.s

CMakeFiles/GraphGen.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GraphGen.dir/main.cpp.o.requires

CMakeFiles/GraphGen.dir/main.cpp.o.provides: CMakeFiles/GraphGen.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GraphGen.dir/build.make CMakeFiles/GraphGen.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GraphGen.dir/main.cpp.o.provides

CMakeFiles/GraphGen.dir/main.cpp.o.provides.build: CMakeFiles/GraphGen.dir/main.cpp.o


# Object files for target GraphGen
GraphGen_OBJECTS = \
"CMakeFiles/GraphGen.dir/main.cpp.o"

# External object files for target GraphGen
GraphGen_EXTERNAL_OBJECTS =

GraphGen: CMakeFiles/GraphGen.dir/main.cpp.o
GraphGen: CMakeFiles/GraphGen.dir/build.make
GraphGen: CMakeFiles/GraphGen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pj/CLionProjects/week3/GraphGen/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GraphGen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GraphGen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GraphGen.dir/build: GraphGen

.PHONY : CMakeFiles/GraphGen.dir/build

CMakeFiles/GraphGen.dir/requires: CMakeFiles/GraphGen.dir/main.cpp.o.requires

.PHONY : CMakeFiles/GraphGen.dir/requires

CMakeFiles/GraphGen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GraphGen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GraphGen.dir/clean

CMakeFiles/GraphGen.dir/depend:
	cd /home/pj/CLionProjects/week3/GraphGen/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pj/CLionProjects/week3/GraphGen /home/pj/CLionProjects/week3/GraphGen /home/pj/CLionProjects/week3/GraphGen/cmake-build-debug /home/pj/CLionProjects/week3/GraphGen/cmake-build-debug /home/pj/CLionProjects/week3/GraphGen/cmake-build-debug/CMakeFiles/GraphGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GraphGen.dir/depend
