//
// Created by John Hunter on 12/11/2018.
//

#include "PlaylistLib.h"

PlaylistLib::PlaylistLib(){
    this->array = new Playlist*[10];
    this->currPlaylistCount = 0;
    this->currCapacity = 10;
}

void PlaylistLib::doubleCapacity() {
    currCapacity = currCapacity*2;
    Playlist** newArr = new Playlist*[currCapacity];
    for(int i=0; i<currPlaylistCount; i++)
        newArr[i] = array[i];
    delete[] array;
    array = newArr;
}

void PlaylistLib::addPlaylist(std::string playlistName){
    Playlist* newPlaylist = new Playlist(playlistName);
    if(currPlaylistCount>=currCapacity)
        doubleCapacity();
    array[currPlaylistCount] = newPlaylist;
    currPlaylistCount++;
}

std::string PlaylistLib::listPlaylists() {
    if(currPlaylistCount == 0)
        return "No Playlists in Library";
    else{
        std::string toString = "";
        for(int i=0;i<currPlaylistCount;i++){
            toString = toString + std::to_string(i+1) + ". " + array[i]->getName() + "\n";
        }
        return toString;
    }
}

void PlaylistLib::removePlaylist(std::string playlistToRemove) {

}

void PlaylistLib::addSongToPlaylist(std::string playlistName, Song* songToAdd) {
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName)
            array[i]->addSongToPlaylist(songToAdd);
    }
}

std::string PlaylistLib::listSongsOfPlaylist(std::string playlistName){
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName){
            return array[i]->listSongs();
        }
    }
    return "Playlist does not exsist";
}