# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "/cygdrive/c/Users/John Hunter/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/John Hunter/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/autoDJ.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/autoDJ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/autoDJ.dir/flags.make

CMakeFiles/autoDJ.dir/main.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/autoDJ.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/main.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/main.cpp"

CMakeFiles/autoDJ.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/main.cpp" > CMakeFiles/autoDJ.dir/main.cpp.i

CMakeFiles/autoDJ.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/main.cpp" -o CMakeFiles/autoDJ.dir/main.cpp.s

CMakeFiles/autoDJ.dir/Song.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/Song.cpp.o: ../Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/autoDJ.dir/Song.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/Song.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Song.cpp"

CMakeFiles/autoDJ.dir/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/Song.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Song.cpp" > CMakeFiles/autoDJ.dir/Song.cpp.i

CMakeFiles/autoDJ.dir/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/Song.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Song.cpp" -o CMakeFiles/autoDJ.dir/Song.cpp.s

CMakeFiles/autoDJ.dir/Library.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/Library.cpp.o: ../Library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/autoDJ.dir/Library.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/Library.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Library.cpp"

CMakeFiles/autoDJ.dir/Library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/Library.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Library.cpp" > CMakeFiles/autoDJ.dir/Library.cpp.i

CMakeFiles/autoDJ.dir/Library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/Library.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Library.cpp" -o CMakeFiles/autoDJ.dir/Library.cpp.s

CMakeFiles/autoDJ.dir/SongNode.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/SongNode.cpp.o: ../SongNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/autoDJ.dir/SongNode.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/SongNode.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongNode.cpp"

CMakeFiles/autoDJ.dir/SongNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/SongNode.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongNode.cpp" > CMakeFiles/autoDJ.dir/SongNode.cpp.i

CMakeFiles/autoDJ.dir/SongNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/SongNode.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongNode.cpp" -o CMakeFiles/autoDJ.dir/SongNode.cpp.s

CMakeFiles/autoDJ.dir/SongLibrary.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/SongLibrary.cpp.o: ../SongLibrary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/autoDJ.dir/SongLibrary.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/SongLibrary.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibrary.cpp"

CMakeFiles/autoDJ.dir/SongLibrary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/SongLibrary.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibrary.cpp" > CMakeFiles/autoDJ.dir/SongLibrary.cpp.i

CMakeFiles/autoDJ.dir/SongLibrary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/SongLibrary.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibrary.cpp" -o CMakeFiles/autoDJ.dir/SongLibrary.cpp.s

CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o: ../SongLibraryArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibraryArray.cpp"

CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibraryArray.cpp" > CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.i

CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/SongLibraryArray.cpp" -o CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.s

CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o: ../PlaylistLib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistLib.cpp"

CMakeFiles/autoDJ.dir/PlaylistLib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/PlaylistLib.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistLib.cpp" > CMakeFiles/autoDJ.dir/PlaylistLib.cpp.i

CMakeFiles/autoDJ.dir/PlaylistLib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/PlaylistLib.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistLib.cpp" -o CMakeFiles/autoDJ.dir/PlaylistLib.cpp.s

CMakeFiles/autoDJ.dir/Playlist.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/Playlist.cpp.o: ../Playlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/autoDJ.dir/Playlist.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/Playlist.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Playlist.cpp"

CMakeFiles/autoDJ.dir/Playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/Playlist.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Playlist.cpp" > CMakeFiles/autoDJ.dir/Playlist.cpp.i

CMakeFiles/autoDJ.dir/Playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/Playlist.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/Playlist.cpp" -o CMakeFiles/autoDJ.dir/Playlist.cpp.s

CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o: CMakeFiles/autoDJ.dir/flags.make
CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o: ../PlaylistNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o -c "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistNode.cpp"

CMakeFiles/autoDJ.dir/PlaylistNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/autoDJ.dir/PlaylistNode.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistNode.cpp" > CMakeFiles/autoDJ.dir/PlaylistNode.cpp.i

CMakeFiles/autoDJ.dir/PlaylistNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/autoDJ.dir/PlaylistNode.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/PlaylistNode.cpp" -o CMakeFiles/autoDJ.dir/PlaylistNode.cpp.s

# Object files for target autoDJ
autoDJ_OBJECTS = \
"CMakeFiles/autoDJ.dir/main.cpp.o" \
"CMakeFiles/autoDJ.dir/Song.cpp.o" \
"CMakeFiles/autoDJ.dir/Library.cpp.o" \
"CMakeFiles/autoDJ.dir/SongNode.cpp.o" \
"CMakeFiles/autoDJ.dir/SongLibrary.cpp.o" \
"CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o" \
"CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o" \
"CMakeFiles/autoDJ.dir/Playlist.cpp.o" \
"CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o"

# External object files for target autoDJ
autoDJ_EXTERNAL_OBJECTS =

autoDJ.exe: CMakeFiles/autoDJ.dir/main.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/Song.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/Library.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/SongNode.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/SongLibrary.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/SongLibraryArray.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/PlaylistLib.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/Playlist.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/PlaylistNode.cpp.o
autoDJ.exe: CMakeFiles/autoDJ.dir/build.make
autoDJ.exe: CMakeFiles/autoDJ.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable autoDJ.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/autoDJ.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/autoDJ.dir/build: autoDJ.exe

.PHONY : CMakeFiles/autoDJ.dir/build

CMakeFiles/autoDJ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/autoDJ.dir/cmake_clean.cmake
.PHONY : CMakeFiles/autoDJ.dir/clean

CMakeFiles/autoDJ.dir/depend:
	cd "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project" "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project" "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug" "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug" "/cygdrive/c/Users/John Hunter/Desktop/Ithaca Files/Comp220 Labs/Auto-DJ-Term-Project/cmake-build-debug/CMakeFiles/autoDJ.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/autoDJ.dir/depend
