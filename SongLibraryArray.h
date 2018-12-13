//
// Created by John Hunter on 12/11/2018.
//

#ifndef AUTODJ_SONGLIBRARYARRAY_H
#define AUTODJ_SONGLIBRARYARRAY_H

#include "SongLibADT.h"
#include "Song.h"

class SongLibraryArray {
private:
    Song** array;
    int currSongCount;
    int currCapacity;
    void doubleCapacity();
public:
    SongLibraryArray();
    SongLibraryArray(const SongLibraryArray& songLibToCopy);
    SongLibraryArray& operator=(const SongLibraryArray& songLibToCopy);
    ~SongLibraryArray();

    Song* getSongPtr(std::string artistName, std::string songTitle);
    void addSong(std::string artist, std::string title, int duration);
    bool isSongInLib(std::string artist, std::string title);
    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
};


#endif //AUTODJ_SONGLIBRARYARRAY_H
