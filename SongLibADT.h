//
// Created by John Hunter on 11/30/2018.
//

#ifndef AUTODJ_SONGLIBADT_H
#define AUTODJ_SONGLIBADT_H

#include "Song.h"

class SongLibADT {
private:
public:
    virtual ~SongLibADT(){};

    //Add a new song to the library
    virtual void addSong(std::string artist, std::string title, int duration) =0;

    //Returns true if song is in library, false if not
    virtual bool isSongInLib(std::string artist, std::string title) =0;

    //Returns a Song* of the desired song
    virtual Song* getSongPtr(std::string artist, std::string title) =0;

    //Returns a string containing all the info of a song
    virtual std::string getSongInfo(std::string artist, std::string title) =0;
};

#endif //AUTODJ_SONGLIBADT_H
