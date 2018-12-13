//
// Created by John Hunter on 12/3/2018.
//

#include "Library.h"
#include "SongLibrary.h"
#include "Song.h"
#include "Playlist.h"
#include "PlaylistLib.h"


Library::Library() {
    Songs = new SongLibraryArray();
    Playlists = new PlaylistLib();
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

std::string addFile(std::string fileName){

}

std::string removeFile(std::string fileName){

}

void Library::removeSong(std::string title, std::string artist) {

}

void Library::newPlaylist(std::string newPlaylistName) {

}

void Library::addPlaylist(std::string newPlaylistName) {
    Playlists->addPlaylist(newPlaylistName);
}

void Library::addSongToPlaylist(std::string playlistName, std::string artistName, std::string songTitle) {
    //get a pointer to the correct song object in songlib to pass to the playlist
    Playlists->addSongToPlaylist(playlistName, Songs->getSongPtr(artistName, songTitle));
}

std::string Library::listPlaylists() {
    return Playlists->listPlaylists();
}

std::string Library::listSongsOfPlaylist(std::string playlistName){
    return Playlists->listSongsOfPlaylist(playlistName);
}