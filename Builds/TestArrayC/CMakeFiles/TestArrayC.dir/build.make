# CMAKE generated file: DO NOT EDIT!
# Generated by "MSYS Makefiles" Generator, CMake Version 3.18

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /D/cmake32/bin/cmake.exe

# The command to remove a file.
RM = /D/cmake32/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /D/git/Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /D/git/Algorithms/Builds

# Include any dependencies generated for this target.
include TestArrayC/CMakeFiles/TestArrayC.dir/depend.make

# Include the progress variables for this target.
include TestArrayC/CMakeFiles/TestArrayC.dir/progress.make

# Include the compile flags for this target's objects.
include TestArrayC/CMakeFiles/TestArrayC.dir/flags.make

TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.obj: TestArrayC/CMakeFiles/TestArrayC.dir/flags.make
TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.obj: TestArrayC/CMakeFiles/TestArrayC.dir/includes_CXX.rsp
TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.obj: ../TestArrayC/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/D/git/Algorithms/Builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.obj"
	cd /D/git/Algorithms/Builds/TestArrayC && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TestArrayC.dir/main.cpp.obj -c /D/git/Algorithms/TestArrayC/main.cpp

TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestArrayC.dir/main.cpp.i"
	cd /D/git/Algorithms/Builds/TestArrayC && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /D/git/Algorithms/TestArrayC/main.cpp > CMakeFiles/TestArrayC.dir/main.cpp.i

TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestArrayC.dir/main.cpp.s"
	cd /D/git/Algorithms/Builds/TestArrayC && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /D/git/Algorithms/TestArrayC/main.cpp -o CMakeFiles/TestArrayC.dir/main.cpp.s

# Object files for target TestArrayC
TestArrayC_OBJECTS = \
"CMakeFiles/TestArrayC.dir/main.cpp.obj"

# External object files for target TestArrayC
TestArrayC_EXTERNAL_OBJECTS =

TestArrayC/TestArrayC.exe: TestArrayC/CMakeFiles/TestArrayC.dir/main.cpp.obj
TestArrayC/TestArrayC.exe: TestArrayC/CMakeFiles/TestArrayC.dir/build.make
TestArrayC/TestArrayC.exe: LibraryC/libLibraryC.a
TestArrayC/TestArrayC.exe: TestArrayC/CMakeFiles/TestArrayC.dir/linklibs.rsp
TestArrayC/TestArrayC.exe: TestArrayC/CMakeFiles/TestArrayC.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/D/git/Algorithms/Builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestArrayC.exe"
	cd /D/git/Algorithms/Builds/TestArrayC && /D/cmake32/bin/cmake.exe -E rm -f CMakeFiles/TestArrayC.dir/objects.a
	cd /D/git/Algorithms/Builds/TestArrayC && /C/TDM-GCC-64/bin/ar.exe cr CMakeFiles/TestArrayC.dir/objects.a @CMakeFiles/TestArrayC.dir/objects1.rsp
	cd /D/git/Algorithms/Builds/TestArrayC && /C/TDM-GCC-64/bin/g++.exe -Wl,--whole-archive CMakeFiles/TestArrayC.dir/objects.a -Wl,--no-whole-archive -o TestArrayC.exe -Wl,--out-implib,libTestArrayC.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/TestArrayC.dir/linklibs.rsp

# Rule to build all files generated by this target.
TestArrayC/CMakeFiles/TestArrayC.dir/build: TestArrayC/TestArrayC.exe

.PHONY : TestArrayC/CMakeFiles/TestArrayC.dir/build

TestArrayC/CMakeFiles/TestArrayC.dir/clean:
	cd /D/git/Algorithms/Builds/TestArrayC && $(CMAKE_COMMAND) -P CMakeFiles/TestArrayC.dir/cmake_clean.cmake
.PHONY : TestArrayC/CMakeFiles/TestArrayC.dir/clean

TestArrayC/CMakeFiles/TestArrayC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/git/Algorithms /D/git/Algorithms/TestArrayC /D/git/Algorithms/Builds /D/git/Algorithms/Builds/TestArrayC /D/git/Algorithms/Builds/TestArrayC/CMakeFiles/TestArrayC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TestArrayC/CMakeFiles/TestArrayC.dir/depend

