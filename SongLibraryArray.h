//
// Created by John Hunter on 12/11/2018.
//

#ifndef AUTODJ_SONGLIBRARYARRAY_H
#define AUTODJ_SONGLIBRARYARRAY_H

#include "SongLibADT.h"
#include "Song.h"

class SongLibraryArray: public SongLibADT {
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
    std::string removeSong(std::string artist, std::string title);
    bool isSongInLib(std::string artist, std::string title);
    std::string getSongInfo(std::string artist, std::string title);
    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
    int getCurrSongCount();
    Song* getRandomSong();
    int getTotalDuration();
    Song* longestSongUnder(int duration);
    void save();
};


#endif //AUTODJ_SONGLIBRARYARRAY_H
