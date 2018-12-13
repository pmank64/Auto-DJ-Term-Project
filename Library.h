//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTODJ_LIBRARY_H
#define AUTODJ_LIBRARY_H

#include <string>
#include "SongLibraryArray.h"
#include "PlaylistLib.h"

class Library{
private:
    //TODO make these classes!!!
    SongLibraryArray* Songs;
    PlaylistLib* Playlists;
public:
    Library();
    ~Library();

    std::string listSongs();
    std::string listSongsOfArtist(std::string artistName);
    void addSong(std::string title, std::string artist, int duration);
    std::string addFile(std::string fileName);
    std::string removeFile(std::string fileName);
    //std::string getInfoOf(std::string title, std::string artist);
    bool isSongInLib(std::string title, std::string artist);
    void importFile(std::string fileName);
    void removeSong(std::string title, std::string artist);
    void newPlaylist(std::string newPlaylistName);

    void addPlaylist(std::string newPlaylistName);
    std::string listPlaylists();
    void addSongToPlaylist(std::string playlistName, std::string artistName, std::string songTitle);
    std::string listSongsOfPlaylist(std::string playlistName);
};

#endif //AUTODJ_LIBRARY_H
