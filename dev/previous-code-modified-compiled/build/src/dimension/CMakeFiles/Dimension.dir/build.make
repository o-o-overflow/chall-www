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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/adamd/src/old-web-chall/previous-code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/adamd/src/old-web-chall/previous-code/build

# Include any dependencies generated for this target.
include src/dimension/CMakeFiles/Dimension.dir/depend.make

# Include the progress variables for this target.
include src/dimension/CMakeFiles/Dimension.dir/progress.make

# Include the compile flags for this target's objects.
include src/dimension/CMakeFiles/Dimension.dir/flags.make

src/dimension/CMakeFiles/Dimension.dir/dimension.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/dimension.c.o: ../src/dimension/dimension.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/dimension/CMakeFiles/Dimension.dir/dimension.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/dimension.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/dimension.c

src/dimension/CMakeFiles/Dimension.dir/dimension.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/dimension.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/dimension.c > CMakeFiles/Dimension.dir/dimension.c.i

src/dimension/CMakeFiles/Dimension.dir/dimension.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/dimension.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/dimension.c -o CMakeFiles/Dimension.dir/dimension.c.s

src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/dimension.c.o


src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o: ../src/dimension/nd_mem.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_mem.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_mem.c

src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_mem.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_mem.c > CMakeFiles/Dimension.dir/nd_mem.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_mem.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_mem.c -o CMakeFiles/Dimension.dir/nd_mem.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o


src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o: ../src/dimension/nd_nbic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_nbic.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_nbic.c

src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_nbic.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_nbic.c > CMakeFiles/Dimension.dir/nd_nbic.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_nbic.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_nbic.c -o CMakeFiles/Dimension.dir/nd_nbic.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o


src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o: ../src/dimension/nd_devs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_devs.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_devs.c

src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_devs.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_devs.c > CMakeFiles/Dimension.dir/nd_devs.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_devs.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_devs.c -o CMakeFiles/Dimension.dir/nd_devs.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o


src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o: ../src/dimension/nd_vio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_vio.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_vio.c

src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_vio.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_vio.c > CMakeFiles/Dimension.dir/nd_vio.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_vio.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_vio.c -o CMakeFiles/Dimension.dir/nd_vio.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o


src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o: ../src/dimension/nd_rom.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_rom.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_rom.c

src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_rom.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_rom.c > CMakeFiles/Dimension.dir/nd_rom.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_rom.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_rom.c -o CMakeFiles/Dimension.dir/nd_rom.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o


src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o: ../src/dimension/i860.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dimension.dir/i860.cpp.o -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860.cpp

src/dimension/CMakeFiles/Dimension.dir/i860.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dimension.dir/i860.cpp.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860.cpp > CMakeFiles/Dimension.dir/i860.cpp.i

src/dimension/CMakeFiles/Dimension.dir/i860.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dimension.dir/i860.cpp.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860.cpp -o CMakeFiles/Dimension.dir/i860.cpp.s

src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.requires

src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.provides: src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.provides

src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o


src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o: ../src/dimension/i860dis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dimension.dir/i860dis.cpp.o -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860dis.cpp

src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dimension.dir/i860dis.cpp.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860dis.cpp > CMakeFiles/Dimension.dir/i860dis.cpp.i

src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dimension.dir/i860dis.cpp.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/i860dis.cpp -o CMakeFiles/Dimension.dir/i860dis.cpp.s

src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.requires

src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.provides: src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.provides

src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o


src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o: src/dimension/CMakeFiles/Dimension.dir/flags.make
src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o: ../src/dimension/nd_sdl.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Dimension.dir/nd_sdl.c.o   -c /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_sdl.c

src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Dimension.dir/nd_sdl.c.i"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_sdl.c > CMakeFiles/Dimension.dir/nd_sdl.c.i

src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Dimension.dir/nd_sdl.c.s"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/adamd/src/old-web-chall/previous-code/src/dimension/nd_sdl.c -o CMakeFiles/Dimension.dir/nd_sdl.c.s

src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.requires:

.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.requires

src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.provides: src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.requires
	$(MAKE) -f src/dimension/CMakeFiles/Dimension.dir/build.make src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.provides.build
.PHONY : src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.provides

src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.provides.build: src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o


# Object files for target Dimension
Dimension_OBJECTS = \
"CMakeFiles/Dimension.dir/dimension.c.o" \
"CMakeFiles/Dimension.dir/nd_mem.c.o" \
"CMakeFiles/Dimension.dir/nd_nbic.c.o" \
"CMakeFiles/Dimension.dir/nd_devs.c.o" \
"CMakeFiles/Dimension.dir/nd_vio.c.o" \
"CMakeFiles/Dimension.dir/nd_rom.c.o" \
"CMakeFiles/Dimension.dir/i860.cpp.o" \
"CMakeFiles/Dimension.dir/i860dis.cpp.o" \
"CMakeFiles/Dimension.dir/nd_sdl.c.o"

# External object files for target Dimension
Dimension_EXTERNAL_OBJECTS =

src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/dimension.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/build.make
src/dimension/libDimension.a: src/dimension/CMakeFiles/Dimension.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/adamd/src/old-web-chall/previous-code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libDimension.a"
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && $(CMAKE_COMMAND) -P CMakeFiles/Dimension.dir/cmake_clean_target.cmake
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dimension.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/dimension/CMakeFiles/Dimension.dir/build: src/dimension/libDimension.a

.PHONY : src/dimension/CMakeFiles/Dimension.dir/build

src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/dimension.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_mem.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_nbic.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_devs.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_vio.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_rom.c.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/i860.cpp.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/i860dis.cpp.o.requires
src/dimension/CMakeFiles/Dimension.dir/requires: src/dimension/CMakeFiles/Dimension.dir/nd_sdl.c.o.requires

.PHONY : src/dimension/CMakeFiles/Dimension.dir/requires

src/dimension/CMakeFiles/Dimension.dir/clean:
	cd /Users/adamd/src/old-web-chall/previous-code/build/src/dimension && $(CMAKE_COMMAND) -P CMakeFiles/Dimension.dir/cmake_clean.cmake
.PHONY : src/dimension/CMakeFiles/Dimension.dir/clean

src/dimension/CMakeFiles/Dimension.dir/depend:
	cd /Users/adamd/src/old-web-chall/previous-code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/adamd/src/old-web-chall/previous-code /Users/adamd/src/old-web-chall/previous-code/src/dimension /Users/adamd/src/old-web-chall/previous-code/build /Users/adamd/src/old-web-chall/previous-code/build/src/dimension /Users/adamd/src/old-web-chall/previous-code/build/src/dimension/CMakeFiles/Dimension.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/dimension/CMakeFiles/Dimension.dir/depend

