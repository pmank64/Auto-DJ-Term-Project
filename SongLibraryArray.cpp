//
// Created by John Hunter on 12/11/2018.
//

#include <fstream>
#include "SongLibraryArray.h"

SongLibraryArray::SongLibraryArray() {
    this->array = new Song*[10];
    this->currSongCount = 0;
    this->currCapacity = 10;
}

SongLibraryArray::~SongLibraryArray() {
    for(int i=0; i<currSongCount; i++){
        delete array[i];
    }
}

void SongLibraryArray::doubleCapacity() {
    currCapacity = currCapacity*2;
    Song** newArr = new Song*[currCapacity];
    for(int i=0; i<currSongCount; i++)
        newArr[i] = array[i];
    delete[] array;
    array = newArr;
}

void SongLibraryArray::addSong(std::string artist, std::string title, int duration, int playCount) {
    Song* newSong = new Song(artist, title, duration, playCount);
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
    for(int i=0; i<currSongCount; i++)
        if(array[i]->getArtist()==artist && array[i]->getTitle()==title)
            return true;

    return false;
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

std::string SongLibraryArray::removeSong(std::string artist, std::string title) {
    if (!isSongInLib(artist,title)){
        return "Song does not exist";
    }
    int songIndex = -1;
    bool songIsHere = false;
    for(int i=0; i<currSongCount; i++){
        if(array[i]->getArtist()==artist && array[i]->getTitle()==title){
            delete array[i];
            songIndex = i;
            songIsHere = true;
            break;
        }
    }
    for(int j=songIndex; j<currSongCount; j++){
        array[j] = array[j+1];
    }
    if(songIsHere)
        currSongCount--;
    return title + " was deleted";
}

std::string SongLibraryArray::getSongInfo(std::string artist, std::string title) {
    for(int i=0;i<currSongCount;i++){
        if(array[i]->getArtist()==artist && array[i]->getTitle()==title)
            return title + " by " + artist + " (" + std::to_string(array[i]->getDuration()) + "), Playcount: " + std::to_string(array[i]->getPlayCount());
    }
}

int SongLibraryArray::getCurrSongCount() {
    return currSongCount;
}

Song* SongLibraryArray::getRandomSong(){
    srand(time(NULL));
    int ranNum = rand() % currSongCount;
    return array[ranNum];
}

int SongLibraryArray::getTotalDuration() {
    int total=0;
    for(int i=0; i<currSongCount; i++)
        total += array[i]->getDuration();
    return total;
}

Song* SongLibraryArray::longestSongUnder(int duration) {
    Song* songHolder = new Song("This is not a song", "I hope no one sees this", 1,0);
    int largestDuration = 0;
    Song* toReturn = songHolder;
    for(int i=0; i<currSongCount;i++){
        if(array[i]->getDuration() <= duration && array[i]->getDuration()>=largestDuration){
            largestDuration = array[i]->getDuration();
            toReturn = array[i];

        }

    }
    return toReturn;
}

void SongLibraryArray::save(){
    std::ofstream myFile;
    myFile.open("AutoDJSaveFile.txt");
    for(int i=0;i<currSongCount;i++){
        myFile << array[i]->getArtist() + "," + array[i]->getTitle() + "," + std::to_string(array[i]->getDuration()) + "," + std::to_string(array[i]->getPlayCount()) + ",";
    }
}