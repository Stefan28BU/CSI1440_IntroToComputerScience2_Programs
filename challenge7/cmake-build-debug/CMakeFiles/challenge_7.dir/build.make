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
CMAKE_SOURCE_DIR = "/Users/Stefan_Xu/Desktop/Stefan/challenge 7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/challenge_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/challenge_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/challenge_7.dir/flags.make

CMakeFiles/challenge_7.dir/main.cpp.o: CMakeFiles/challenge_7.dir/flags.make
CMakeFiles/challenge_7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/challenge_7.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/challenge_7.dir/main.cpp.o -c "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/main.cpp"

CMakeFiles/challenge_7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/challenge_7.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/main.cpp" > CMakeFiles/challenge_7.dir/main.cpp.i

CMakeFiles/challenge_7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/challenge_7.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/main.cpp" -o CMakeFiles/challenge_7.dir/main.cpp.s

CMakeFiles/challenge_7.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/challenge_7.dir/main.cpp.o.requires

CMakeFiles/challenge_7.dir/main.cpp.o.provides: CMakeFiles/challenge_7.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/challenge_7.dir/build.make CMakeFiles/challenge_7.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/challenge_7.dir/main.cpp.o.provides

CMakeFiles/challenge_7.dir/main.cpp.o.provides.build: CMakeFiles/challenge_7.dir/main.cpp.o


# Object files for target challenge_7
challenge_7_OBJECTS = \
"CMakeFiles/challenge_7.dir/main.cpp.o"

# External object files for target challenge_7
challenge_7_EXTERNAL_OBJECTS =

challenge_7: CMakeFiles/challenge_7.dir/main.cpp.o
challenge_7: CMakeFiles/challenge_7.dir/build.make
challenge_7: CMakeFiles/challenge_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable challenge_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/challenge_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/challenge_7.dir/build: challenge_7

.PHONY : CMakeFiles/challenge_7.dir/build

CMakeFiles/challenge_7.dir/requires: CMakeFiles/challenge_7.dir/main.cpp.o.requires

.PHONY : CMakeFiles/challenge_7.dir/requires

CMakeFiles/challenge_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/challenge_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/challenge_7.dir/clean

CMakeFiles/challenge_7.dir/depend:
	cd "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Stefan_Xu/Desktop/Stefan/challenge 7" "/Users/Stefan_Xu/Desktop/Stefan/challenge 7" "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug" "/Users/Stefan_Xu/Desktop/Stefan/challenge 7/cmake-build-debug/CMakeFiles/challenge_7.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/challenge_7.dir/depend
