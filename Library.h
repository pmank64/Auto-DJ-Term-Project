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
    //The Song Library
    SongLibraryArray* Songs;

    //The Playlist Library
    PlaylistLib* Playlists;
public:
    Library();
    ~Library();

    //Returns a string with the info of all the songs in the library
    std::string listSongs();

    //Returns a string with all the info of a specific artist
    std::string listSongsOfArtist(std::string artistName);

    //Add a song to the song library
    void addSong(std::string title, std::string artist, int duration);

    //delete all the songs in a file, returns a string listing all the songs that weren't deleted
    std::string removeFile(std::string fileName);

    //create and add songs from the file, return a string listing all the songs that already existed
    std::string importFile(std::string fileName);

    //remove a song from the library, return
    std::string removeSong(std::string artist, std::string title);

    //Returns a string with all the info of a requested song
    std::string getSongInfo(std::string artist, std::string title);

    //create a playlist, fill it with random songs until the duration is as close to the requested duration as possible
    //Return a string that says the playlist was created and its duration
    std::string newRandomPlaylist(std::string playlistName, int duration);

    //Returns the duration of a playlist
    int getPlaylistDuration(std::string playlistName);

    //Create a new empty playlist with the given name
    std::string addPlaylist(std::string newPlaylistName);

    //Returns a string of a list of all the playlists and their durations
    std::string listPlaylists();

    //Adds a song to the desired playlist
    //Returns a string describing if the song was successfully added or not
    std::string addSongToPlaylist(std::string playlistName, std::string artistName, std::string songTitle);

    //Returns a string listing all the songs contained in a playlist and their durations
    std::string listSongsOfPlaylist(std::string playlistName);

    //Remove a song from the desired playlist
    //Returns a song describing if the song was successfully removed or not
    std::string removeSongFromPlaylist(std::string playlistName, std::string artistName, std::string songTitle);

    //Remove the last song from the desired playlist, increment its playcount
    //Return a string detailing the song that was played
    std::string playNext(std::string playlistName);

    //Save the Song library to file before quitting
    void save();
};

#endif //AUTODJ_LIBRARY_H
