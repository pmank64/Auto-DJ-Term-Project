//
// Created by John Hunter on 12/11/2018.
//

#ifndef AUTODJ_PLAYLISTLIB_H
#define AUTODJ_PLAYLISTLIB_H

#include "Playlist.h"
#include "playlistLibADT.h"

class PlaylistLib: public playlistLibADT{
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
    std::string removePlaylist(std::string playlistToRemove);
    std::string addSongToPlaylist(std::string playlistName, Song* songToAdd);
    std::string listSongsOfPlaylist(std::string playlistName);
    bool isPlaylistHere(std::string playlistName);
    std::string isSongInPlaylist(std::string playlistName, std::string artistName, std::string songTitle);
    void removeSongFromPlaylist(std::string playlistName, Song* toRemove);
    void removeSong(std::string artistName, std::string songTitle, Song* toRemove);
    int getDuration(std::string playlistName);
    std::string playNext(std::string playlistName);
    Playlist* getPlaylistPtr(std::string playlistName);
};

#endif //AUTODJ_PLAYLISTLIB_H
