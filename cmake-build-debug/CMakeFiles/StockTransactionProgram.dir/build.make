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
include CMakeFiles/StockTransactionProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StockTransactionProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StockTransactionProgram.dir/flags.make

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj: CMakeFiles/StockTransactionProgram.dir/flags.make
CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj: ../src/Lab01-Strings/StockTransactionProgram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StockTransactionProgram.dir\src\Lab01-Strings\StockTransactionProgram.cpp.obj -c C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\Lab01-Strings\StockTransactionProgram.cpp

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\Lab01-Strings\StockTransactionProgram.cpp > CMakeFiles\StockTransactionProgram.dir\src\Lab01-Strings\StockTransactionProgram.cpp.i

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Armand\Documents\Development\School\CompSciSpring2018\src\Lab01-Strings\StockTransactionProgram.cpp -o CMakeFiles\StockTransactionProgram.dir\src\Lab01-Strings\StockTransactionProgram.cpp.s

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.requires:

.PHONY : CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.requires

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.provides: CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StockTransactionProgram.dir\build.make CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.provides.build
.PHONY : CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.provides

CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.provides.build: CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj


# Object files for target StockTransactionProgram
StockTransactionProgram_OBJECTS = \
"CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj"

# External object files for target StockTransactionProgram
StockTransactionProgram_EXTERNAL_OBJECTS =

StockTransactionProgram.exe: CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj
StockTransactionProgram.exe: CMakeFiles/StockTransactionProgram.dir/build.make
StockTransactionProgram.exe: CMakeFiles/StockTransactionProgram.dir/linklibs.rsp
StockTransactionProgram.exe: CMakeFiles/StockTransactionProgram.dir/objects1.rsp
StockTransactionProgram.exe: CMakeFiles/StockTransactionProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StockTransactionProgram.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StockTransactionProgram.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StockTransactionProgram.dir/build: StockTransactionProgram.exe

.PHONY : CMakeFiles/StockTransactionProgram.dir/build

CMakeFiles/StockTransactionProgram.dir/requires: CMakeFiles/StockTransactionProgram.dir/src/Lab01-Strings/StockTransactionProgram.cpp.obj.requires

.PHONY : CMakeFiles/StockTransactionProgram.dir/requires

CMakeFiles/StockTransactionProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StockTransactionProgram.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StockTransactionProgram.dir/clean

CMakeFiles/StockTransactionProgram.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Armand\Documents\Development\School\CompSciSpring2018 C:\Users\Armand\Documents\Development\School\CompSciSpring2018 C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug C:\Users\Armand\Documents\Development\School\CompSciSpring2018\cmake-build-debug\CMakeFiles\StockTransactionProgram.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StockTransactionProgram.dir/depend

