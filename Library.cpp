//
// Created by John Hunter on 12/3/2018.
//

#include "Library.h"
#include "SongLibrary.h"
#include "Song.h"

Library::Library() {
    Songs = new SongLibrary();
    //PlaylistLibrary Playlists = PlaylistLibrary();
}

Library::~Library() {
    //TODO
}

std::string Library::listSongs(){
    return Songs->listSongs();
}

std::string Library::listSongsOfArtist(std::string artistName) {
    return Songs->listSongsOfArtist(artistName);
}

void Library::addSong(std::string title, std::string artist, int duration) {
    Songs->addSong(title, artist, duration);
}

void Library::removeSong(std::string title, std::string artist) {

}

void Library::newPlaylist(std::string newPlaylistName) {

}

