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
include src/json/CMakeFiles/json.dir/depend.make

# Include the progress variables for this target.
include src/json/CMakeFiles/json.dir/progress.make

# Include the compile flags for this target's objects.
include src/json/CMakeFiles/json.dir/flags.make

src/json/CMakeFiles/json.dir/json.c.o: src/json/CMakeFiles/json.dir/flags.make
src/json/CMakeFiles/json.dir/json.c.o: ../src/json/json.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/json/CMakeFiles/json.dir/json.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/json.dir/json.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/json/json.c

src/json/CMakeFiles/json.dir/json.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json.dir/json.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/json/json.c > CMakeFiles/json.dir/json.c.i

src/json/CMakeFiles/json.dir/json.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json.dir/json.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/json/json.c -o CMakeFiles/json.dir/json.c.s

src/json/CMakeFiles/json.dir/json.c.o.requires:

.PHONY : src/json/CMakeFiles/json.dir/json.c.o.requires

src/json/CMakeFiles/json.dir/json.c.o.provides: src/json/CMakeFiles/json.dir/json.c.o.requires
	$(MAKE) -f src/json/CMakeFiles/json.dir/build.make src/json/CMakeFiles/json.dir/json.c.o.provides.build
.PHONY : src/json/CMakeFiles/json.dir/json.c.o.provides

src/json/CMakeFiles/json.dir/json.c.o.provides.build: src/json/CMakeFiles/json.dir/json.c.o


# Object files for target json
json_OBJECTS = \
"CMakeFiles/json.dir/json.c.o"

# External object files for target json
json_EXTERNAL_OBJECTS =

src/json/libjson.a: src/json/CMakeFiles/json.dir/json.c.o
src/json/libjson.a: src/json/CMakeFiles/json.dir/build.make
src/json/libjson.a: src/json/CMakeFiles/json.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libjson.a"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && $(CMAKE_COMMAND) -P CMakeFiles/json.dir/cmake_clean_target.cmake
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/json/CMakeFiles/json.dir/build: src/json/libjson.a

.PHONY : src/json/CMakeFiles/json.dir/build

src/json/CMakeFiles/json.dir/requires: src/json/CMakeFiles/json.dir/json.c.o.requires

.PHONY : src/json/CMakeFiles/json.dir/requires

src/json/CMakeFiles/json.dir/clean:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json && $(CMAKE_COMMAND) -P CMakeFiles/json.dir/cmake_clean.cmake
.PHONY : src/json/CMakeFiles/json.dir/clean

src/json/CMakeFiles/json.dir/depend:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steward/Data/Github/rs97_src/cdogs /home/steward/Data/Github/rs97_src/cdogs/src/json /home/steward/Data/Github/rs97_src/cdogs/gcw0build /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/json/CMakeFiles/json.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/json/CMakeFiles/json.dir/depend

