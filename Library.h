//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTODJ_LIBRARY_H
#define AUTODJ_LIBRARY_H

#include <string>
#include "SongLibrary.h"

class Library{
private:
    //TODO make these classes!!!
    SongLibrary* Songs;
    //PlaylistLibrary Playlists;
public:
    Library();
    ~Library();

    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
    void addSong(std::string title, std::string artist, int duration);
    void removeSong(std::string title, std::string artist);
    void newPlaylist(std::string newPlaylistName);
};

#endif //AUTODJ_LIBRARY_H
