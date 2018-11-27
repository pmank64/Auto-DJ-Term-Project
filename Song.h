//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTO_DJ_TERM_PROJECT_SONG_H
#define AUTO_DJ_TERM_PROJECT_SONG_H

#include <string>

class Song {
private:
    std::string Artist;
    std::string title;
    std::string duration;
    int playCount;
public:
    Song(std::string artistIn, std::string titleIn, std::string durationIn, int playCountIn);
    std::string getArtist();
    std::string getTitle();
    std::string getDuration();
    int getPlayCount();
};

#endif //AUTO_DJ_TERM_PROJECT_SONG_H
