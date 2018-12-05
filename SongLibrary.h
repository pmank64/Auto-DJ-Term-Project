//
// Created by John Hunter on 12/2/2018.
//

#ifndef AUTODJ_SONGLIBRARY_H
#define AUTODJ_SONGLIBRARY_H

#include "SongLibADT.h"
#include "Song.h"
#include "SongNode.h"

class SongLibrary {
private:
    SongNode* front;
public:
    SongLibrary();
    ~SongLibrary();
    void addSong(std::string artist, std::string title, int duration);
    Song* getSongPtr(std::string artist, std::string title);
    std::string getSongInfo(std::string);
    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
};

#endif //AUTODJ_SONGLIBRARY_H
