# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gongzian/src/Design-Patterns-Examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gongzian/src/Design-Patterns-Examples/cmake-build

# Include any dependencies generated for this target.
include iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/compiler_depend.make

# Include the progress variables for this target.
include iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/progress.make

# Include the compile flags for this target's objects.
include iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/flags.make

iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o: iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/flags.make
iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o: ../iterator_and_Composite_Pattern/main.cpp
iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o: iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gongzian/src/Design-Patterns-Examples/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o"
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o -MF CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o.d -o CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o -c /Users/gongzian/src/Design-Patterns-Examples/iterator_and_Composite_Pattern/main.cpp

iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.i"
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gongzian/src/Design-Patterns-Examples/iterator_and_Composite_Pattern/main.cpp > CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.i

iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.s"
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gongzian/src/Design-Patterns-Examples/iterator_and_Composite_Pattern/main.cpp -o CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.s

# Object files for target Iterator_and_Composite_Pattern
Iterator_and_Composite_Pattern_OBJECTS = \
"CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o"

# External object files for target Iterator_and_Composite_Pattern
Iterator_and_Composite_Pattern_EXTERNAL_OBJECTS =

bin/Iterator_and_Composite_Pattern: iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/main.cpp.o
bin/Iterator_and_Composite_Pattern: iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/build.make
bin/Iterator_and_Composite_Pattern: iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gongzian/src/Design-Patterns-Examples/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/Iterator_and_Composite_Pattern"
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Iterator_and_Composite_Pattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/build: bin/Iterator_and_Composite_Pattern
.PHONY : iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/build

iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/clean:
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern && $(CMAKE_COMMAND) -P CMakeFiles/Iterator_and_Composite_Pattern.dir/cmake_clean.cmake
.PHONY : iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/clean

iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/depend:
	cd /Users/gongzian/src/Design-Patterns-Examples/cmake-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gongzian/src/Design-Patterns-Examples /Users/gongzian/src/Design-Patterns-Examples/iterator_and_Composite_Pattern /Users/gongzian/src/Design-Patterns-Examples/cmake-build /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern /Users/gongzian/src/Design-Patterns-Examples/cmake-build/iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : iterator_and_Composite_Pattern/CMakeFiles/Iterator_and_Composite_Pattern.dir/depend
