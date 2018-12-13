//
// Created by John Hunter on 12/11/2018.
//

#include "SongLibraryArray.h"

SongLibraryArray::SongLibraryArray() {
    this->array = new Song*[10];
    this->currSongCount = 0;
    this->currCapacity = 10;
}

void SongLibraryArray::doubleCapacity() {
    currCapacity = currCapacity*2;
    Song** newArr = new Song*[currCapacity];
    for(int i=0; i<currSongCount; i++)
        newArr[i] = array[i];
    delete[] array;
    array = newArr;
}

void SongLibraryArray::addSong(std::string artist, std::string title, int duration) {
    Song* newSong = new Song(artist, title, duration);
    int songIndex=0;
    bool songadded = false;

    for(int i=0;i<currSongCount;i++){ //determine which index the song should be placed in
        if(artist<array[i]->getArtist()){
            if(title<array[i]->getTitle()){
                songIndex = i;
                songadded = true;
                break;
            }
        }
    }
    if(!songadded)
        songIndex = currSongCount;

    if(currSongCount>=currCapacity)
        doubleCapacity();

    currSongCount++;

    for(int j=currSongCount-1; j>=songIndex; j--){ //shift everything down
        array[j+1] = array[j];
    }
    array[songIndex] = newSong;



}

bool SongLibraryArray::isSongInLib(std::string artist, std::string title) {

}

std::string SongLibraryArray::listSongs(){
    if(currSongCount == 0)
        return "No Songs in Library";
    else{
        std::string toString = "";
        for(int i=0;i<currSongCount;i++){
            toString = toString + std::to_string(i+1) + ". " + array[i]->getTitle() + " by " + array[i]->getArtist() + " (" + std::to_string(array[i]->getDuration()) + ") \n";
        }

        return toString;
    }

}

std::string SongLibraryArray::listSongsOfArtist(std::string artistName) {
    std::string toString = "";
    int count = 1;
    for(int i=0; i<currSongCount; i++){
        if(array[i]->getArtist() == artistName) {
            toString = toString + std::to_string(count) + ". " + array[i]->getTitle() + " by " + array[i]->getArtist() + " (" + std::to_string(array[i]->getDuration()) + ") \n";
            count++;
        }
    }
    if(toString == "")
        return "No songs of that artist";
    else
        return toString;
}

Song* SongLibraryArray::getSongPtr(std::string artistName, std::string songTitle) {
    //TODO check if song is in the library before running this
    for(int i=0; i<currSongCount; i++){
        if(array[i]->getArtist()==artistName && array[i]->getTitle()==songTitle){
            return array[i];
        }
    }
}