# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Armand\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.3870.21\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Armand\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.3870.21\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Armand\Documents\Development\School\CompSciSpring2018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW01-Clock.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW01-Clock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW01-Clock.dir/flags.make

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj: CMakeFiles/HW01-Clock.dir/flags.make
CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj: ../src/HW02-Clock/HW01-Clock.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW01-Clock.dir\src\HW02-Clock\HW01-Clock.cpp.obj -c C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\HW02-Clock\HW01-Clock.cpp

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\HW02-Clock\HW01-Clock.cpp > CMakeFiles\HW01-Clock.dir\src\HW02-Clock\HW01-Clock.cpp.i

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\HW02-Clock\HW01-Clock.cpp -o CMakeFiles\HW01-Clock.dir\src\HW02-Clock\HW01-Clock.cpp.s

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.requires:

.PHONY : CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.requires

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.provides: CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.requires
	$(MAKE) -f CMakeFiles\HW01-Clock.dir\build.make CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.provides.build
.PHONY : CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.provides

CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.provides.build: CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj


# Object files for target HW01-Clock
HW01__Clock_OBJECTS = \
"CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj"

# External object files for target HW01-Clock
HW01__Clock_EXTERNAL_OBJECTS =

HW01-Clock.exe: CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj
HW01-Clock.exe: CMakeFiles/HW01-Clock.dir/build.make
HW01-Clock.exe: CMakeFiles/HW01-Clock.dir/linklibs.rsp
HW01-Clock.exe: CMakeFiles/HW01-Clock.dir/objects1.rsp
HW01-Clock.exe: CMakeFiles/HW01-Clock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW01-Clock.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW01-Clock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW01-Clock.dir/build: HW01-Clock.exe

.PHONY : CMakeFiles/HW01-Clock.dir/build

CMakeFiles/HW01-Clock.dir/requires: CMakeFiles/HW01-Clock.dir/src/HW02-Clock/HW01-Clock.cpp.obj.requires

.PHONY : CMakeFiles/HW01-Clock.dir/requires

CMakeFiles/HW01-Clock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW01-Clock.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW01-Clock.dir/clean

CMakeFiles/HW01-Clock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Armand\Documents\Development\School\CompSciSpring2018 C:\Users\Armand\Documents\Development\School\CompSciSpring2018 C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles\HW01-Clock.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW01-Clock.dir/depend

