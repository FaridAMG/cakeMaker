# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /home/farida/IDEs/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/farida/IDEs/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/farida/Documents/gitKraken repositories/cakeMaker"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cakeMaker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cakeMaker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cakeMaker.dir/flags.make

CMakeFiles/cakeMaker.dir/main.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cakeMaker.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/main.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/main.cpp"

CMakeFiles/cakeMaker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/main.cpp" > CMakeFiles/cakeMaker.dir/main.cpp.i

CMakeFiles/cakeMaker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/main.cpp" -o CMakeFiles/cakeMaker.dir/main.cpp.s

CMakeFiles/cakeMaker.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/main.cpp.o.requires

CMakeFiles/cakeMaker.dir/main.cpp.o.provides: CMakeFiles/cakeMaker.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/main.cpp.o.provides

CMakeFiles/cakeMaker.dir/main.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/main.cpp.o


CMakeFiles/cakeMaker.dir/mainwindow.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cakeMaker.dir/mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/mainwindow.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/mainwindow.cpp"

CMakeFiles/cakeMaker.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/mainwindow.cpp" > CMakeFiles/cakeMaker.dir/mainwindow.cpp.i

CMakeFiles/cakeMaker.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/mainwindow.cpp" -o CMakeFiles/cakeMaker.dir/mainwindow.cpp.s

CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.requires

CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.provides: CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.provides

CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/mainwindow.cpp.o


CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o: ../cakeCode/cake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/cake.cpp"

CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/cake.cpp" > CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.i

CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/cake.cpp" -o CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.s

CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.requires

CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.provides: CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.provides

CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o


CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o: ../cakeCode/vanillaCake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/vanillaCake.cpp"

CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/vanillaCake.cpp" > CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.i

CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/vanillaCake.cpp" -o CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.s

CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.requires

CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.provides: CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.provides

CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o


CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o: ../cakeCode/chocolateCake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/chocolateCake.cpp"

CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/chocolateCake.cpp" > CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.i

CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/chocolateCake.cpp" -o CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.s

CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.requires

CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.provides: CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.provides

CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o


CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o: ../cakeCode/strawBCake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/strawBCake.cpp"

CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/strawBCake.cpp" > CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.i

CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/cakeCode/strawBCake.cpp" -o CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.s

CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.requires

CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.provides: CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.provides

CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o


CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o: CMakeFiles/cakeMaker.dir/flags.make
CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o: cakeMaker_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o -c "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/cakeMaker_autogen/mocs_compilation.cpp"

CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/cakeMaker_autogen/mocs_compilation.cpp" > CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.i

CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/cakeMaker_autogen/mocs_compilation.cpp" -o CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.s

CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/cakeMaker.dir/build.make CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o


# Object files for target cakeMaker
cakeMaker_OBJECTS = \
"CMakeFiles/cakeMaker.dir/main.cpp.o" \
"CMakeFiles/cakeMaker.dir/mainwindow.cpp.o" \
"CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o" \
"CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o" \
"CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o" \
"CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o" \
"CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o"

# External object files for target cakeMaker
cakeMaker_EXTERNAL_OBJECTS =

cakeMaker: CMakeFiles/cakeMaker.dir/main.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/mainwindow.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o
cakeMaker: CMakeFiles/cakeMaker.dir/build.make
cakeMaker: /home/farida/IDEs/Qt/5.9.1/gcc_64/lib/libQt5Widgets.so.5.9.1
cakeMaker: /home/farida/IDEs/Qt/5.9.1/gcc_64/lib/libQt5Gui.so.5.9.1
cakeMaker: /home/farida/IDEs/Qt/5.9.1/gcc_64/lib/libQt5Core.so.5.9.1
cakeMaker: CMakeFiles/cakeMaker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable cakeMaker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cakeMaker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cakeMaker.dir/build: cakeMaker

.PHONY : CMakeFiles/cakeMaker.dir/build

CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/main.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/mainwindow.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/cakeCode/cake.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/cakeCode/vanillaCake.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/cakeCode/chocolateCake.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/cakeCode/strawBCake.cpp.o.requires
CMakeFiles/cakeMaker.dir/requires: CMakeFiles/cakeMaker.dir/cakeMaker_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/cakeMaker.dir/requires

CMakeFiles/cakeMaker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cakeMaker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cakeMaker.dir/clean

CMakeFiles/cakeMaker.dir/depend:
	cd "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/farida/Documents/gitKraken repositories/cakeMaker" "/home/farida/Documents/gitKraken repositories/cakeMaker" "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug" "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug" "/home/farida/Documents/gitKraken repositories/cakeMaker/cmake-build-debug/CMakeFiles/cakeMaker.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cakeMaker.dir/depend

