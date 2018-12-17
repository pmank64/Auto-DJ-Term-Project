//
// Created by Anthony on 12/2/2018.
//

#ifndef AUTODJ_PLAYLISTLIBADT_H
#define AUTODJ_PLAYLISTLIBADT_H

#endif //AUTODJ_PLAYLISTLIBADT_H
class playlistLibADT{
private:

public:
    virtual ~playlistLibADT(){};

    //create a new empty playlist
    virtual void addPlaylist(std::string playlistName)=0;

    //return a string listing all the playlists in the library
    virtual std::string listPlaylists()=0;

    //remove a playlist from the library, return a string describing if it was successful or not
    virtual std::string removePlaylist(std::string playlistToRemove)=0;

    //add a song to the desired playlist, return a string describing if it was successful or not
    virtual std::string addSongToPlaylist(std::string playlistName, Song* songToAdd)=0;

    //return a string containing all the songs in a playlist
    virtual std::string listSongsOfPlaylist(std::string playlistName)=0;

    //returns true if a playlist of that name exists, false if not
    virtual bool isPlaylistHere(std::string playlistName)=0;

    //returns a string describing if the song exists in the playlist or not
    virtual std::string isSongInPlaylist(std::string playlistName, std::string artistName, std::string songTitle)=0;

    //remove a song from the desired playlist
    virtual void removeSongFromPlaylist(std::string playlistName, Song* toRemove)=0;

    //remove a song from all playlists
    virtual void removeSong(std::string artistName, std::string songTitle, Song* toRemove)=0;

    //returns an int of the sum of all the song durations in a playlist
    virtual int getDuration(std::string playlistName)=0;

    //plays the next song in a playlist, returns a string describing the song, of if it failed
    virtual std::string playNext(std::string playlistName)=0;

    //returns a pointer to the desired playlist
    virtual Playlist* getPlaylistPtr(std::string playlistName)=0;



};
