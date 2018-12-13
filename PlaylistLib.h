//
// Created by John Hunter on 12/11/2018.
//

#ifndef AUTODJ_PLAYLISTLIB_H
#define AUTODJ_PLAYLISTLIB_H

#include "Playlist.h"

class PlaylistLib{
private:
    Playlist** array;
    int currPlaylistCount;
    int currCapacity;
    void doubleCapacity();
public:
    PlaylistLib();
    ~PlaylistLib();

    void addPlaylist(std::string playlistName);
    std::string listPlaylists();
    void removePlaylist(std::string playlistToRemove);
    void addSongToPlaylist(std::string playlistName, Song* songToAdd);
    std::string listSongsOfPlaylist(std::string playlistName);
};

#endif //AUTODJ_PLAYLISTLIB_H
