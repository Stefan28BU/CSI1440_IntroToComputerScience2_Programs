# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/project_14401.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project_14401.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project_14401.dir/flags.make

CMakeFiles/project_14401.dir/main.cpp.o: CMakeFiles/project_14401.dir/flags.make
CMakeFiles/project_14401.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project_14401.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project_14401.dir/main.cpp.o -c "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/main.cpp"

CMakeFiles/project_14401.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project_14401.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/main.cpp" > CMakeFiles/project_14401.dir/main.cpp.i

CMakeFiles/project_14401.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project_14401.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/main.cpp" -o CMakeFiles/project_14401.dir/main.cpp.s

CMakeFiles/project_14401.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/project_14401.dir/main.cpp.o.requires

CMakeFiles/project_14401.dir/main.cpp.o.provides: CMakeFiles/project_14401.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/project_14401.dir/build.make CMakeFiles/project_14401.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/project_14401.dir/main.cpp.o.provides

CMakeFiles/project_14401.dir/main.cpp.o.provides.build: CMakeFiles/project_14401.dir/main.cpp.o


# Object files for target project_14401
project_14401_OBJECTS = \
"CMakeFiles/project_14401.dir/main.cpp.o"

# External object files for target project_14401
project_14401_EXTERNAL_OBJECTS =

project_14401: CMakeFiles/project_14401.dir/main.cpp.o
project_14401: CMakeFiles/project_14401.dir/build.make
project_14401: CMakeFiles/project_14401.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable project_14401"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project_14401.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project_14401.dir/build: project_14401

.PHONY : CMakeFiles/project_14401.dir/build

CMakeFiles/project_14401.dir/requires: CMakeFiles/project_14401.dir/main.cpp.o.requires

.PHONY : CMakeFiles/project_14401.dir/requires

CMakeFiles/project_14401.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project_14401.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project_14401.dir/clean

CMakeFiles/project_14401.dir/depend:
	cd "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/project 14401/cmake-build-debug/CMakeFiles/project_14401.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/project_14401.dir/depend

