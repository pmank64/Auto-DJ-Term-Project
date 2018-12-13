//
// Created by Peter Mankiewich on 12/2/18.
//


#ifndef AUTODJ_PLAYLIST_H
#define AUTODJ_PLAYLIST_H

#include <string>
#include <stdexcept>
#include "PlaylistNode.h"
class Playlist{
private:
    PlaylistNode* front;
    float duration;
    std::string playlistName;
public:
    Playlist(std::string playlistNameIn);
    ~Playlist();
    Playlist& operator=(const Playlist& stackToCopy);
    Song* removeSong(Song* toRemove);
    void addSongToPlaylist(Song* songToAdd);
    bool isEmpty();
    float getDuration();
    std::string getName();
    std::string listSongs();
};

#endif //AUTODJ_PLAYLIST_H

