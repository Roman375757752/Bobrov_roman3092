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
include PersonalExercise/CMakeFiles/PersonalExercise.dir/depend.make

# Include the progress variables for this target.
include PersonalExercise/CMakeFiles/PersonalExercise.dir/progress.make

# Include the compile flags for this target's objects.
include PersonalExercise/CMakeFiles/PersonalExercise.dir/flags.make

PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.obj: PersonalExercise/CMakeFiles/PersonalExercise.dir/flags.make
PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.obj: PersonalExercise/CMakeFiles/PersonalExercise.dir/includes_CXX.rsp
PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.obj: ../PersonalExercise/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/D/git/Algorithms/Builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.obj"
	cd /D/git/Algorithms/Builds/PersonalExercise && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PersonalExercise.dir/main.cpp.obj -c /D/git/Algorithms/PersonalExercise/main.cpp

PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PersonalExercise.dir/main.cpp.i"
	cd /D/git/Algorithms/Builds/PersonalExercise && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /D/git/Algorithms/PersonalExercise/main.cpp > CMakeFiles/PersonalExercise.dir/main.cpp.i

PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PersonalExercise.dir/main.cpp.s"
	cd /D/git/Algorithms/Builds/PersonalExercise && /C/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /D/git/Algorithms/PersonalExercise/main.cpp -o CMakeFiles/PersonalExercise.dir/main.cpp.s

# Object files for target PersonalExercise
PersonalExercise_OBJECTS = \
"CMakeFiles/PersonalExercise.dir/main.cpp.obj"

# External object files for target PersonalExercise
PersonalExercise_EXTERNAL_OBJECTS =

PersonalExercise/PersonalExercise.exe: PersonalExercise/CMakeFiles/PersonalExercise.dir/main.cpp.obj
PersonalExercise/PersonalExercise.exe: PersonalExercise/CMakeFiles/PersonalExercise.dir/build.make
PersonalExercise/PersonalExercise.exe: PersonalExercise/CMakeFiles/PersonalExercise.dir/linklibs.rsp
PersonalExercise/PersonalExercise.exe: PersonalExercise/CMakeFiles/PersonalExercise.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/D/git/Algorithms/Builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PersonalExercise.exe"
	cd /D/git/Algorithms/Builds/PersonalExercise && /D/cmake32/bin/cmake.exe -E rm -f CMakeFiles/PersonalExercise.dir/objects.a
	cd /D/git/Algorithms/Builds/PersonalExercise && /C/TDM-GCC-64/bin/ar.exe cr CMakeFiles/PersonalExercise.dir/objects.a @CMakeFiles/PersonalExercise.dir/objects1.rsp
	cd /D/git/Algorithms/Builds/PersonalExercise && /C/TDM-GCC-64/bin/g++.exe -Wl,--whole-archive CMakeFiles/PersonalExercise.dir/objects.a -Wl,--no-whole-archive -o PersonalExercise.exe -Wl,--out-implib,libPersonalExercise.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/PersonalExercise.dir/linklibs.rsp

# Rule to build all files generated by this target.
PersonalExercise/CMakeFiles/PersonalExercise.dir/build: PersonalExercise/PersonalExercise.exe

.PHONY : PersonalExercise/CMakeFiles/PersonalExercise.dir/build

PersonalExercise/CMakeFiles/PersonalExercise.dir/clean:
	cd /D/git/Algorithms/Builds/PersonalExercise && $(CMAKE_COMMAND) -P CMakeFiles/PersonalExercise.dir/cmake_clean.cmake
.PHONY : PersonalExercise/CMakeFiles/PersonalExercise.dir/clean

PersonalExercise/CMakeFiles/PersonalExercise.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /D/git/Algorithms /D/git/Algorithms/PersonalExercise /D/git/Algorithms/Builds /D/git/Algorithms/Builds/PersonalExercise /D/git/Algorithms/Builds/PersonalExercise/CMakeFiles/PersonalExercise.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : PersonalExercise/CMakeFiles/PersonalExercise.dir/depend

