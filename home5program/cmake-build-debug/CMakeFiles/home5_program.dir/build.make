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
CMAKE_SOURCE_DIR = "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/home5_program.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/home5_program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/home5_program.dir/flags.make

CMakeFiles/home5_program.dir/main.cpp.o: CMakeFiles/home5_program.dir/flags.make
CMakeFiles/home5_program.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/home5_program.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/home5_program.dir/main.cpp.o -c "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/main.cpp"

CMakeFiles/home5_program.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/home5_program.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/main.cpp" > CMakeFiles/home5_program.dir/main.cpp.i

CMakeFiles/home5_program.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/home5_program.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/main.cpp" -o CMakeFiles/home5_program.dir/main.cpp.s

CMakeFiles/home5_program.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/home5_program.dir/main.cpp.o.requires

CMakeFiles/home5_program.dir/main.cpp.o.provides: CMakeFiles/home5_program.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/home5_program.dir/build.make CMakeFiles/home5_program.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/home5_program.dir/main.cpp.o.provides

CMakeFiles/home5_program.dir/main.cpp.o.provides.build: CMakeFiles/home5_program.dir/main.cpp.o


# Object files for target home5_program
home5_program_OBJECTS = \
"CMakeFiles/home5_program.dir/main.cpp.o"

# External object files for target home5_program
home5_program_EXTERNAL_OBJECTS =

home5_program: CMakeFiles/home5_program.dir/main.cpp.o
home5_program: CMakeFiles/home5_program.dir/build.make
home5_program: CMakeFiles/home5_program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable home5_program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/home5_program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/home5_program.dir/build: home5_program

.PHONY : CMakeFiles/home5_program.dir/build

CMakeFiles/home5_program.dir/requires: CMakeFiles/home5_program.dir/main.cpp.o.requires

.PHONY : CMakeFiles/home5_program.dir/requires

CMakeFiles/home5_program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/home5_program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/home5_program.dir/clean

CMakeFiles/home5_program.dir/depend:
	cd "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/CS assignment/home5 program/cmake-build-debug/CMakeFiles/home5_program.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/home5_program.dir/depend
