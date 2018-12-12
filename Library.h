//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTODJ_LIBRARY_H
#define AUTODJ_LIBRARY_H

#include <string>
#include "SongLibraryArray.h"

class Library{
private:
    //TODO make these classes!!!
    SongLibraryArray* Songs;
    //PlaylistLibrary Playlists;
public:
    Library();
    ~Library();

    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
    void addSong(std::string title, std::string artist, int duration);
    //std::string getInfoOf(std::string title, std::string artist);
    bool isSongInLib(std::string title, std::string artist);
    void importFile(std::string fileName);
    void removeSong(std::string title, std::string artist);
    void newPlaylist(std::string newPlaylistName);
};

#endif //AUTODJ_LIBRARY_H
