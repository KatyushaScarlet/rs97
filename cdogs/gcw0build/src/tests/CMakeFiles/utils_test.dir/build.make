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
CMAKE_COMMAND = /opt/rs97/bin/cmake

# The command to remove a file.
RM = /opt/rs97/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/steward/Data/Github/rs97_src/cdogs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/steward/Data/Github/rs97_src/cdogs/gcw0build

# Include any dependencies generated for this target.
include src/tests/CMakeFiles/utils_test.dir/depend.make

# Include the progress variables for this target.
include src/tests/CMakeFiles/utils_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/tests/CMakeFiles/utils_test.dir/flags.make

src/tests/CMakeFiles/utils_test.dir/utils_test.c.o: src/tests/CMakeFiles/utils_test.dir/flags.make
src/tests/CMakeFiles/utils_test.dir/utils_test.c.o: ../src/tests/utils_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/tests/CMakeFiles/utils_test.dir/utils_test.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/utils_test.dir/utils_test.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/tests/utils_test.c

src/tests/CMakeFiles/utils_test.dir/utils_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utils_test.dir/utils_test.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/tests/utils_test.c > CMakeFiles/utils_test.dir/utils_test.c.i

src/tests/CMakeFiles/utils_test.dir/utils_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utils_test.dir/utils_test.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/tests/utils_test.c -o CMakeFiles/utils_test.dir/utils_test.c.s

src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.requires:

.PHONY : src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.requires

src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.provides: src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.requires
	$(MAKE) -f src/tests/CMakeFiles/utils_test.dir/build.make src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.provides.build
.PHONY : src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.provides

src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.provides.build: src/tests/CMakeFiles/utils_test.dir/utils_test.c.o


src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o: src/tests/CMakeFiles/utils_test.dir/flags.make
src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o: ../src/cdogs/utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/utils_test.dir/__/cdogs/utils.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/utils.c

src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utils_test.dir/__/cdogs/utils.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/utils.c > CMakeFiles/utils_test.dir/__/cdogs/utils.c.i

src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utils_test.dir/__/cdogs/utils.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/utils.c -o CMakeFiles/utils_test.dir/__/cdogs/utils.c.s

src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.requires:

.PHONY : src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.requires

src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.provides: src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.requires
	$(MAKE) -f src/tests/CMakeFiles/utils_test.dir/build.make src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.provides.build
.PHONY : src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.provides

src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.provides.build: src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o


# Object files for target utils_test
utils_test_OBJECTS = \
"CMakeFiles/utils_test.dir/utils_test.c.o" \
"CMakeFiles/utils_test.dir/__/cdogs/utils.c.o"

# External object files for target utils_test
utils_test_EXTERNAL_OBJECTS =

src/tests/utils_test: src/tests/CMakeFiles/utils_test.dir/utils_test.c.o
src/tests/utils_test: src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o
src/tests/utils_test: src/tests/CMakeFiles/utils_test.dir/build.make
src/tests/utils_test: src/tests/cbehave/libcbehave.a
src/tests/utils_test: src/tests/CMakeFiles/utils_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable utils_test"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utils_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tests/CMakeFiles/utils_test.dir/build: src/tests/utils_test

.PHONY : src/tests/CMakeFiles/utils_test.dir/build

src/tests/CMakeFiles/utils_test.dir/requires: src/tests/CMakeFiles/utils_test.dir/utils_test.c.o.requires
src/tests/CMakeFiles/utils_test.dir/requires: src/tests/CMakeFiles/utils_test.dir/__/cdogs/utils.c.o.requires

.PHONY : src/tests/CMakeFiles/utils_test.dir/requires

src/tests/CMakeFiles/utils_test.dir/clean:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests && $(CMAKE_COMMAND) -P CMakeFiles/utils_test.dir/cmake_clean.cmake
.PHONY : src/tests/CMakeFiles/utils_test.dir/clean

src/tests/CMakeFiles/utils_test.dir/depend:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steward/Data/Github/rs97_src/cdogs /home/steward/Data/Github/rs97_src/cdogs/src/tests /home/steward/Data/Github/rs97_src/cdogs/gcw0build /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/tests/CMakeFiles/utils_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tests/CMakeFiles/utils_test.dir/depend

