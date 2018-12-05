//
// Created by Anthony on 11/27/2018.
//
#include "Song.h"


Song::Song(std::string artistIn, std::string titleIn, int durationIn){
    artist = artistIn;
    title = titleIn;
    duration = durationIn;
    playCount = 0;
}

Song::Song(){
    std::string artist = "not a song";
    std::string title = "not a song";
    duration = 0;
    playCount = 0;
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



















