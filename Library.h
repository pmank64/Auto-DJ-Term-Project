//
// Created by John Hunter on 11/27/2018.
//

#ifndef AUTODJ_LIBRARY_H
#define AUTODJ_LIBRARY_H

class Library{
private:
//Container for all songs
//Container for all playlists
public:
    void addSong(Song newSong);
    void removeSong(Song songToRemove);
    void newPlaylist(std::string newPlaylistName);

};

#endif //AUTODJ_LIBRARY_H
