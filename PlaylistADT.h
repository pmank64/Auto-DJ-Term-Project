//
// Created by John Hunter on 12/17/2018.
//

#ifndef AUTODJ_PLAYLISTADT_H
#define AUTODJ_PLAYLISTADT_H

#include <string>
#include <stdexcept>
#include "Playlist.h"


class PlaylistADT{
private:

public:
    virtual ~PlaylistADT() {};

    //remove a song from the playlist, returns the song that is being deleted
    virtual Song* removeSong(Song* toRemove)=0;

    //takes a pointer to a song object and adds it to the end of the playlist
    virtual void addSongToPlaylist(Song* songToAdd)=0;

    //true if there are no songs in the playlist, false if there are songs
    virtual bool isEmpty()=0;

    //returns a string of the total duration of the playlist
    virtual int getDuration()=0;

    //returns the name of playlist
    virtual std::string getName()=0;

    //returns a list of all the songs in the playlist
    virtual std::string listSongs()=0;

    //returns true if the song is in the playlist, false if not
    virtual bool isSongInPlaylist(std::string artistName, std::string songTitle)=0;

    //returns the info of the song to be played
    virtual std::string playNext()=0;
};

#endif //AUTODJ_PLAYLISTADT_H

