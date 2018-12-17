//
// Created by Peter Mankiewich on 12/2/18.
//
#ifndef AUTODJ_PLAYLIST_H
#define AUTODJ_PLAYLIST_H

#include <string>
#include <stdexcept>
#include "PlaylistNode.h"
#include "PlaylistADT.h"

class Playlist: public PlaylistADT{
private:
    PlaylistNode* front;
    int duration;
    std::string playlistName;
public:
    Playlist(std::string playlistNameIn);
    ~Playlist();
    Playlist& operator=(const Playlist& stackToCopy);
    Song* removeSong(Song* toRemove);
    void addSongToPlaylist(Song* songToAdd);
    bool isEmpty();
    int getDuration();
    std::string getName();
    std::string listSongs();
    bool isSongInPlaylist(std::string artistName, std::string songTitle);
    std::string playNext();
};

#endif //AUTODJ_PLAYLIST_H

