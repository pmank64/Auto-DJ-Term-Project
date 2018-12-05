//
// Created by John Hunter on 11/30/2018.
//

#ifndef AUTODJ_SONGLIBADT_H
#define AUTODJ_SONGLIBADT_H

#include "Song.h"

class SongLibADT {
private:
public:
    virtual ~SongLibADT();
    virtual void addSong(Song newSong) =0;
    virtual Song* getSongPtr(std::string artist, std::string title) =0;
    virtual std::string getSongInfo(std::string artist, std::string title) =0;
};

#endif //AUTODJ_SONGLIBADT_H
