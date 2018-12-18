//
// Created by John Hunter on 12/3/2018.
//

#include "Library.h"
#include "SongLibrary.h"
#include "Song.h"
#include "Playlist.h"
#include "PlaylistLib.h"
#include <fstream>
#include <iostream>


Library::Library() {
    Songs = new SongLibraryArray();
    Playlists = new PlaylistLib();
}

Library::~Library() {
    delete Playlists;
    delete Songs;
}

std::string Library::listSongs(){
    return Songs->listSongs();
}

std::string Library::listSongsOfArtist(std::string artistName) {
    return Songs->listSongsOfArtist(artistName);
}

void Library::addSong(std::string title, std::string artist, int duration, int playCount) {
    Songs->addSong(title, artist, duration, playCount);
}

std::string Library::importFile(std::string fileName){
    std::ifstream myFile;

    std::string outString = "";

    myFile.open(fileName, std::ios::in);
    std::string temp;

    std::string tempArr[4];
    int count = 0;
    bool checker = true;
    std::string songsToNotAdd = "Songs that already existed: \n";

    while(std::getline(myFile,temp,',')){
        tempArr[count] = temp;
        if (count==3){
            count =-1;
            //std::cout << tempArr[0] << "..." << tempArr[1] << "..." << tempArr[2] << "..." << std::endl;
            if(!Songs->isSongInLib(tempArr[0],tempArr[1])){ //the song should be added
                Songs->addSong(tempArr[0],tempArr[1],stoi(tempArr[2]), stoi(tempArr[3]));
            }
            else{ //the song shouldnt be added
                songsToNotAdd += tempArr[0] + " by " + tempArr[1] + "\n";
            }
        }
        count++;
    }
    if(songsToNotAdd == "Songs that already existed: \n")
        return "Songs added to lib";
    else
        return songsToNotAdd;
}

std::string Library::removeFile(std::string fileName){
    std::ifstream myFile;

    std::string outString = "";

    myFile.open(fileName, std::ios::in);
    std::string temp;

    std::string tempArr[3];
    int count = 0;
    bool checker = true;
    std::string songsToNotRemove = "Songs that didn't exist: \n";

    while(std::getline(myFile,temp,',')){
        tempArr[count] = temp;
        if (count==2){
            count =-1;
            //std::cout << tempArr[0] << "..." << tempArr[1] << "..." << tempArr[2] << "..." << std::endl;
            if(Songs->isSongInLib(tempArr[0],tempArr[1])){ //the song will be deleted
                Playlists->removeSong(tempArr[0],tempArr[1],Songs->getSongPtr(tempArr[0],tempArr[1]));
                Songs->removeSong(tempArr[0],tempArr[1]);

            }
            else{ //the song doesn't exist, add to string of songs
                songsToNotRemove += tempArr[0] + " by " + tempArr[1] + "\n";
            }
        }
        count++;
    }
    if(songsToNotRemove == "Songs that didn't exist: \n")
        return "Songs removed from lib";
    else
        return songsToNotRemove;


}

std::string Library::removeSong(std::string artist, std::string title) {

    Playlists->removeSong(artist, title, Songs->getSongPtr(artist,title));

    std::string message = Songs->removeSong(artist,title);
    if (message == "Song does not exist"){
        return "Song does not exist";
    }
    else{
        return "Removed " + title + " by " + artist;
    }
}

std::string Library::addPlaylist(std::string newPlaylistName) {
    if(Playlists->isPlaylistHere(newPlaylistName))
        return "Playlist already exists";
    else{
        Playlists->addPlaylist(newPlaylistName);
        return newPlaylistName + " was created!";
    }

}

std::string Library::addSongToPlaylist(std::string playlistName, std::string artistName, std::string songTitle) {
    //get a pointer to the correct song object in songlib to pass to the playlist
    std::string message = "";
    if(!Playlists->isPlaylistHere(playlistName))
        return "Playlist does not exist";
    if(!Songs->isSongInLib(artistName,songTitle))
        return "Song does not exist";
    else{
        message = Playlists->addSongToPlaylist(playlistName, Songs->getSongPtr(artistName, songTitle));
        if (message == "The song is already in the playlist"){
            return message;
        }
        else{
            return songTitle + " was added to " + playlistName;
        }
    }
}

std::string Library::listPlaylists() {
    return Playlists->listPlaylists();
}

std::string Library::listSongsOfPlaylist(std::string playlistName){
    return Playlists->listSongsOfPlaylist(playlistName);
}

std::string Library::removeSongFromPlaylist(std::string playlistName, std::string artistName, std::string songTitle) {
    bool checker = true;
    if(!Playlists->isPlaylistHere(playlistName)){//check if playlist exists
        return "Playlist does not exist";
    }
    if(!Songs->isSongInLib(artistName,songTitle)) //check if song is in library
        return "Song does not exist";
    if(Playlists->isSongInPlaylist(playlistName,artistName,songTitle) == songTitle + " does not exist in the playlist")
        return songTitle + " does not exist in the playlist";

    Song* toRemove = Songs->getSongPtr(artistName,songTitle);
    Playlists->removeSongFromPlaylist(playlistName,toRemove);
    return songTitle + " was removed from playlist " + playlistName;
}

int Library::getPlaylistDuration(std::string playlistName) {
    if(Playlists->isPlaylistHere(playlistName))
        return Playlists->getDuration(playlistName);
    else
        return -1;
}

std::string Library::getSongInfo(std::string artist, std::string title) {
    if(!Songs->isSongInLib(artist, title))
        return "This song is not in the library";
    else
        return Songs->getSongInfo(artist, title);

}

std::string Library::playNext(std::string playlistName) {
    if(!Playlists->isPlaylistHere(playlistName))
        return playlistName + " does not exist!";
    if(Playlists->getDuration(playlistName)==0)
        return playlistName + " is empty!";

    //the playlist exists, and has a song
    return Playlists->playNext(playlistName);
}

std::string Library::newRandomPlaylist(std::string playlistName, int duration) {

    //check if the input duration is too small
    Song* songTest = Songs->longestSongUnder(duration);
    if(songTest->getArtist()=="This is not a song")
        return "Desired duration is too small";

    //checks if the playlist already exists
    if(Playlists->isPlaylistHere(playlistName)){
        return "The playlist " + playlistName + " already exists";
    }
    if(Songs->getCurrSongCount()==0)
        return "No Songs in Library!";

    //adds the new empty playlist
    Playlists->addPlaylist(playlistName);

    Playlist* thisplaylist = Playlists->getPlaylistPtr(playlistName);

    Song* randomSong = Songs->getRandomSong();


    int totalSongCount = Songs->getCurrSongCount();

    if(duration > Songs->getTotalDuration()){ //the duration is real big
        while (randomSong->getDuration()+thisplaylist->getDuration()<duration){
            randomSong = Songs->getRandomSong();
            if (!thisplaylist->isSongInPlaylist(randomSong->getArtist(), randomSong->getTitle()) && randomSong->getDuration()+thisplaylist->getDuration()<=duration){
                thisplaylist->addSongToPlaylist(randomSong);
            }
            if(thisplaylist->getDuration() == Songs->getTotalDuration()){
                break;
            }
        }
    }
    else{ //the duration is less than the total songlib duration
        while (randomSong->getDuration()+thisplaylist->getDuration()<duration){
            randomSong = Songs->getRandomSong();
            if (!thisplaylist->isSongInPlaylist(randomSong->getArtist(), randomSong->getTitle()) && randomSong->getDuration()+thisplaylist->getDuration()<=duration){
                thisplaylist->addSongToPlaylist(randomSong);
            }
            if(thisplaylist->getDuration() == Songs->getTotalDuration()){
                break;
            }
        }

        //fill in the gap
        int remainingDuration = duration - thisplaylist->getDuration();
        Song* potentialSong = Songs->longestSongUnder(remainingDuration);
        if (!thisplaylist->isSongInPlaylist(potentialSong->getArtist(),potentialSong->getTitle())){
            if(potentialSong->getArtist()!="This is not a song")
                thisplaylist->addSongToPlaylist(potentialSong);
        }
    }
    return "Random playlist " + playlistName + " was created (Duration: " + std::to_string(thisplaylist->getDuration()) + ")";

}

void Library::save() {
    Songs->save();
}