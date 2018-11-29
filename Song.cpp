//
// Created by Anthony on 11/27/2018.
//
#include "Song.h"


Song::Song(std::string artistIn, std::string titleIn, int durationIn){
    std::string artist = artistIn;
    std::string title = titleIn;
    int duration = durationIn;
    int playCount = 0;
}

std::string Song::getArtist(){
    return artist;
}

std::string Song::getTitle(){
    return title;
}
int Song::getDuration(){
    return duration;
}

int Song::getPlayCount(){
    return playCount;
}

void Song::addPlayCount(){
    playCount++;
}



















