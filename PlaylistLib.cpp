//
// Created by John Hunter on 12/11/2018.
//

#include "PlaylistLib.h"

PlaylistLib::PlaylistLib(){
    this->array = new Playlist*[10];
    this->currPlaylistCount = 0;
    this->currCapacity = 10;
}

PlaylistLib::~PlaylistLib() {
    for(int i=0;i<currPlaylistCount;i++)
        delete array[i];
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
            toString = toString + std::to_string(i+1) + ". " + array[i]->getName() + "(" + std::to_string(array[i]->getDuration()) + ")" + "\n";
        }
        return toString;
    }
}

std::string PlaylistLib::removePlaylist(std::string playlistToRemove) {
    if(!isPlaylistHere(playlistToRemove))
        return "Playlist does not exist";
    int playlistIndex = -1;
    bool playlistIsHere = false;
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistToRemove){
            delete array[i];
            playlistIndex = i;
            playlistIsHere = true;
            break;
        }
    }
    for(int j=playlistIndex; j<currPlaylistCount; j++){
        array[j] = array[j+1];
    }
    if(playlistIsHere)
        currPlaylistCount--;
    return playlistToRemove + " was deleted";
}

std::string PlaylistLib::addSongToPlaylist(std::string playlistName, Song* songToAdd) {
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName)
            if (!array[i]->isSongInPlaylist(songToAdd->getArtist(),songToAdd->getTitle())){
                array[i]->addSongToPlaylist(songToAdd);
            }
            else{
                return "The song is already in the playlist";
            }

    }
    return "";
}

std::string PlaylistLib::listSongsOfPlaylist(std::string playlistName){
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName){
            return "Playlist " + playlistName + " (" + std::to_string(getDuration(playlistName)) + ") \n" + array[i]->listSongs();
        }
    }
    return "Playlist does not exist";
}

bool PlaylistLib::isPlaylistHere(std::string playlistName) {
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName() == playlistName)
            return true;
    }
    return false;
}

std::string PlaylistLib::isSongInPlaylist(std::string playlistName, std::string artistName, std::string songTitle){
    bool isitthere = false;
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName() == playlistName)
            isitthere = array[i]->isSongInPlaylist(artistName,songTitle);
    }
    if (isitthere){
        return songTitle + " exists in the playlist";
    }
    else{
        return songTitle + " does not exist in the playlist";
    }
}

void PlaylistLib::removeSongFromPlaylist(std::string playlistName, Song* toRemove) {
    for(int i=0; i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName)
            array[i]->removeSong(toRemove);
    }
}

void PlaylistLib::removeSong(std::string artistName, std::string songTitle, Song* toRemove) {
    for(int i=0;i<currPlaylistCount;i++){
        if(array[i]->isSongInPlaylist(artistName,songTitle)){
            array[i]->removeSong(toRemove);
        }
    }
}

int PlaylistLib::getDuration(std::string playlistName) {
    for(int i=0;i<currPlaylistCount; i++){
        if(array[i]->getName()==playlistName)
            return array[i]->getDuration();
    }
}

std::string PlaylistLib::playNext(std::string playlistName) {
    int playlistIndex = -1;
    std::string toReturn = "";
    for(int i=0;i<currPlaylistCount;i++){
        if(array[i]->getName()==playlistName){
            playlistIndex = i;
            toReturn = array[i]->playNext();
        }
    }
    //check if that was the last song played and delete it if it is
    if(array[playlistIndex]->getDuration()==0){
        removePlaylist(playlistName);
    }
    return toReturn;
}

Playlist* PlaylistLib::getPlaylistPtr(std::string playlistName) {
    for(int i=0; i<currPlaylistCount; i++)
        if(array[i]->getName()==playlistName)
            return array[i];
}