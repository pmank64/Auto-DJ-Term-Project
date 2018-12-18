//
// Created by Peter Mankiewich on 12/17/18.
//

#include "TestLib.h"
#include <iostream>
#include "Library.h"
#include "SongLibraryArray.h"
#include "PlaylistLib.h"


//adds 50 songs to the library

void addSongsToLibrary(Library *lib) {
    for (int i = 0; i < 50; i++) {
        lib->addSong("artist" + std::to_string(i), "title" + std::to_string(i), i, i);
    }
}

void checkIfPresent(Library *lib) {

    for (int i = 0; i < 50; i++) {
        if (lib->getSongInfo("title" + std::to_string(i), "artist" + std::to_string(i)) ==
            "This song is not in the library") {
            std::cout << "FAIL: " << "title" << std::to_string(i) << "artist" << std::to_string(i) << std::endl;
        } else {
            std::cout << "Pass" << std::endl;
        }
    }
}

//creates 50 playlists and adds 10 songs to each
void createPlaylists(Library *lib) {
    for (int i = 0; i < 50; i++) {
        lib->addPlaylist("playlist" + std::to_string(i));
    }
    for (int j = 0; j < 50; j++) {
        for (int n = 0; n < 10; n++) {
            lib->addSongToPlaylist("playlist" + std::to_string(j), "artist" + std::to_string(n),
                                   "title" + std::to_string(n));
        }
    }
}

void checkPlaylists(Library *lib) {
    std::cout << "------The Playlists------" << std::endl;
    std::cout << lib->listPlaylists() << std::endl;

    std::cout << "------Playlist Contents------" << std::endl;
    std::string result = lib->listSongsOfPlaylist("playlist" + std::to_string(1));
    for (int i = 1; i < 50; i++) {
//        if (result == lib->listSongsOfPlaylist("playlist"+std::to_string(i))){
//            std::cout << "pass" << std::endl;
//        }
//        else{
//            std::cout << "FAIL: "<< "playlist"+std::to_string(i)<< std::endl;
//        }
        std::cout << lib->listSongsOfPlaylist("playlist" + std::to_string(i)) << std::endl;
    }
}

