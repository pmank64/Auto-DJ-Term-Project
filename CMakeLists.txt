cmake_minimum_required(VERSION 3.12)
project(autoDJ)

set(CMAKE_CXX_STANDARD 14)

add_executable(autoDJ main.cpp
        Song.cpp
        Library.cpp
        SongNode.cpp
        SongLibrary.cpp
        SongLibraryArray.cpp
        PlaylistLib.cpp
        Playlist.cpp
        PlaylistNode.cpp
        )