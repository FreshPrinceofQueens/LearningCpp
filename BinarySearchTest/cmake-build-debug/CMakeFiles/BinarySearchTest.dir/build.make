# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BinarySearchTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinarySearchTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinarySearchTest.dir/flags.make

CMakeFiles/BinarySearchTest.dir/main.cpp.o: CMakeFiles/BinarySearchTest.dir/flags.make
CMakeFiles/BinarySearchTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BinarySearchTest.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BinarySearchTest.dir/main.cpp.o -c "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/main.cpp"

CMakeFiles/BinarySearchTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinarySearchTest.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/main.cpp" > CMakeFiles/BinarySearchTest.dir/main.cpp.i

CMakeFiles/BinarySearchTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinarySearchTest.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/main.cpp" -o CMakeFiles/BinarySearchTest.dir/main.cpp.s

# Object files for target BinarySearchTest
BinarySearchTest_OBJECTS = \
"CMakeFiles/BinarySearchTest.dir/main.cpp.o"

# External object files for target BinarySearchTest
BinarySearchTest_EXTERNAL_OBJECTS =

BinarySearchTest: CMakeFiles/BinarySearchTest.dir/main.cpp.o
BinarySearchTest: CMakeFiles/BinarySearchTest.dir/build.make
BinarySearchTest: CMakeFiles/BinarySearchTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BinarySearchTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BinarySearchTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinarySearchTest.dir/build: BinarySearchTest

.PHONY : CMakeFiles/BinarySearchTest.dir/build

CMakeFiles/BinarySearchTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BinarySearchTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BinarySearchTest.dir/clean

CMakeFiles/BinarySearchTest.dir/depend:
	cd "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest" "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest" "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug" "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug" "/Users/tayooduyemi/Desktop/Persy Stuff/Personal-Projects/Educate/LearningCpp/BinarySearchTest/cmake-build-debug/CMakeFiles/BinarySearchTest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BinarySearchTest.dir/depend
