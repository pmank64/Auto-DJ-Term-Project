//
// Created by John Hunter on 12/3/2018.
//

#include "Library.h"
#include "SongLibrary.h"
#include "Song.h"

Library::Library() {
    Songs = new SongLibraryArray();
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

bool Library::isSongInLib(std::string title, std::string artist) {
    return Songs->isSongInLib(title, artist);
}

void Library::removeSong(std::string title, std::string artist) {

}

void Library::newPlaylist(std::string newPlaylistName) {

}

