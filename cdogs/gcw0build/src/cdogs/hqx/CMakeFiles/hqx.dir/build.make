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
include src/cdogs/hqx/CMakeFiles/hqx.dir/depend.make

# Include the progress variables for this target.
include src/cdogs/hqx/CMakeFiles/hqx.dir/progress.make

# Include the compile flags for this target's objects.
include src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o: src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make
src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o: ../src/cdogs/hqx/common.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hqx.dir/common.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/common.c

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hqx.dir/common.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/common.c > CMakeFiles/hqx.dir/common.c.i

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hqx.dir/common.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/common.c -o CMakeFiles/hqx.dir/common.c.s

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.requires:

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.requires

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.provides: src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.requires
	$(MAKE) -f src/cdogs/hqx/CMakeFiles/hqx.dir/build.make src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.provides.build
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.provides

src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.provides.build: src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o


src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o: src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make
src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o: ../src/cdogs/hqx/hq2x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hqx.dir/hq2x.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq2x.c

src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hqx.dir/hq2x.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq2x.c > CMakeFiles/hqx.dir/hq2x.c.i

src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hqx.dir/hq2x.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq2x.c -o CMakeFiles/hqx.dir/hq2x.c.s

src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.requires:

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.requires

src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.provides: src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.requires
	$(MAKE) -f src/cdogs/hqx/CMakeFiles/hqx.dir/build.make src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.provides.build
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.provides

src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.provides.build: src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o


src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o: src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make
src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o: ../src/cdogs/hqx/hq3x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hqx.dir/hq3x.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq3x.c

src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hqx.dir/hq3x.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq3x.c > CMakeFiles/hqx.dir/hq3x.c.i

src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hqx.dir/hq3x.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq3x.c -o CMakeFiles/hqx.dir/hq3x.c.s

src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.requires:

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.requires

src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.provides: src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.requires
	$(MAKE) -f src/cdogs/hqx/CMakeFiles/hqx.dir/build.make src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.provides.build
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.provides

src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.provides.build: src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o


src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o: src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make
src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o: ../src/cdogs/hqx/hq4x.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hqx.dir/hq4x.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq4x.c

src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hqx.dir/hq4x.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq4x.c > CMakeFiles/hqx.dir/hq4x.c.i

src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hqx.dir/hq4x.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/hq4x.c -o CMakeFiles/hqx.dir/hq4x.c.s

src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.requires:

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.requires

src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.provides: src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.requires
	$(MAKE) -f src/cdogs/hqx/CMakeFiles/hqx.dir/build.make src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.provides.build
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.provides

src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.provides.build: src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o


src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o: src/cdogs/hqx/CMakeFiles/hqx.dir/flags.make
src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o: ../src/cdogs/hqx/init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hqx.dir/init.c.o   -c /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/init.c

src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hqx.dir/init.c.i"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/init.c > CMakeFiles/hqx.dir/init.c.i

src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hqx.dir/init.c.s"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && /opt/rs97/bin/mipsel-rs97-linux-uclibc-gcc --sysroot=/opt/rs97/mipsel-rs97-linux-uclibc/sysroot $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx/init.c -o CMakeFiles/hqx.dir/init.c.s

src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.requires:

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.requires

src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.provides: src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.requires
	$(MAKE) -f src/cdogs/hqx/CMakeFiles/hqx.dir/build.make src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.provides.build
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.provides

src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.provides.build: src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o


# Object files for target hqx
hqx_OBJECTS = \
"CMakeFiles/hqx.dir/common.c.o" \
"CMakeFiles/hqx.dir/hq2x.c.o" \
"CMakeFiles/hqx.dir/hq3x.c.o" \
"CMakeFiles/hqx.dir/hq4x.c.o" \
"CMakeFiles/hqx.dir/init.c.o"

# External object files for target hqx
hqx_EXTERNAL_OBJECTS =

src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/build.make
src/cdogs/hqx/libhqx.a: src/cdogs/hqx/CMakeFiles/hqx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steward/Data/Github/rs97_src/cdogs/gcw0build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library libhqx.a"
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && $(CMAKE_COMMAND) -P CMakeFiles/hqx.dir/cmake_clean_target.cmake
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hqx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/cdogs/hqx/CMakeFiles/hqx.dir/build: src/cdogs/hqx/libhqx.a

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/build

src/cdogs/hqx/CMakeFiles/hqx.dir/requires: src/cdogs/hqx/CMakeFiles/hqx.dir/common.c.o.requires
src/cdogs/hqx/CMakeFiles/hqx.dir/requires: src/cdogs/hqx/CMakeFiles/hqx.dir/hq2x.c.o.requires
src/cdogs/hqx/CMakeFiles/hqx.dir/requires: src/cdogs/hqx/CMakeFiles/hqx.dir/hq3x.c.o.requires
src/cdogs/hqx/CMakeFiles/hqx.dir/requires: src/cdogs/hqx/CMakeFiles/hqx.dir/hq4x.c.o.requires
src/cdogs/hqx/CMakeFiles/hqx.dir/requires: src/cdogs/hqx/CMakeFiles/hqx.dir/init.c.o.requires

.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/requires

src/cdogs/hqx/CMakeFiles/hqx.dir/clean:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx && $(CMAKE_COMMAND) -P CMakeFiles/hqx.dir/cmake_clean.cmake
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/clean

src/cdogs/hqx/CMakeFiles/hqx.dir/depend:
	cd /home/steward/Data/Github/rs97_src/cdogs/gcw0build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steward/Data/Github/rs97_src/cdogs /home/steward/Data/Github/rs97_src/cdogs/src/cdogs/hqx /home/steward/Data/Github/rs97_src/cdogs/gcw0build /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx /home/steward/Data/Github/rs97_src/cdogs/gcw0build/src/cdogs/hqx/CMakeFiles/hqx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cdogs/hqx/CMakeFiles/hqx.dir/depend

