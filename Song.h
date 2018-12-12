//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTO_DJ_TERM_PROJECT_SONG_H
#define AUTO_DJ_TERM_PROJECT_SONG_H

#include <string>

class Song {
private:
    std::string artist;
    std::string title;
    int duration;
    int playCount;
public:
    Song(std::string artistIn, std::string titleIn, int durationIn);
    Song();
    std::string getArtist();
    std::string getTitle();
    int getDuration();
    int getPlayCount();
    void addPlayCount();
};

#endif //AUTO_DJ_TERM_PROJECT_SONG_H
