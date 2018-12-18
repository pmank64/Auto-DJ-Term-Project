#include <iostream>
#include <fstream>
#include "Library.h"
#include "tests.cpp"

int main() {

    srand(time(NULL));

    Library* library = new Library();

    //load in previous library
    library->importFile("AutoDJSaveFile.txt");

    std::cout << "Welcome to Auto-DJ, type help for a list of commands, type quit to end program." << std::endl;
    std::cout << "Enter Command: " << std::endl;
    //userInput = the entire line the user enters, command = the first word of userInput
    std::string userInput;
    std::getline(std::cin,userInput);
    std::string command = userInput.substr(0, userInput.find(" "));

    bool inputRecognized;
    while(command !="quit"){
        inputRecognized = false;

        if(command == "help"){
            inputRecognized = true;
            std::cout << "o---------------------List of Commands---------------------o" << std::endl;
            std::cout << "|  importfile: songimportfile.txt                          |" << std::endl;
            std::cout << "|     library: display all songs                           |" << std::endl;
            std::cout << "|      artist: display all songs of an artist              |" << std::endl;
            std::cout << "|        song: display info of a song                      |" << std::endl;
            std::cout << "|      import: add all songs from a file to library        |" << std::endl;
            std::cout << "| discontinue: remove all songs on a file from library     |" << std::endl;
            std::cout << "|   playlists: display the names of all playlists          |" << std::endl;
            std::cout << "|    playlist: display songs left in playlist and duration |" << std::endl;
            std::cout << "|         new: make a new empty playlist                   |" << std::endl;
            std::cout << "|         add: add song to playlist                        |" << std::endl;
            std::cout << "|      remove: remove song from playlist                   |" << std::endl;
            std::cout << "|    playnext: play the next song of a playlist            |" << std::endl;
            std::cout << "|   newrandom: make a playlist of random songs             |" << std::endl;
            std::cout << "|        test: run the auto tests                          |" << std::endl;
            std::cout << "|        quit: Terminate AutoDJ and save library to file   |" << std::endl;
            std::cout << "o----------------------------------------------------------o" << std::endl;
        }

        if(command == "library") {
            inputRecognized = true;
            std::cout << "Listing songs..." << std::endl;

            std::cout << library->listSongs() << std::endl;

        }

        if(command == "addsong") {
            inputRecognized = true;
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin,artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin,songTitle);
            //get Duration
            std::cout << "Enter Song Duration: " << std::endl;
            std::string strSongDuration;
            std::getline(std::cin, strSongDuration);
            int songDuration = std::stoi(strSongDuration);

            library->addSong(artistName, songTitle, songDuration, 0);
            std::cout << "Added " << songTitle << " by " << artistName << std::endl;
        }

        if(command == "removesong") {
            inputRecognized = true;
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin,artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin,songTitle);

            std::cout << library->removeSong(artistName, songTitle) << std::endl;
        }

        if(command == "artist"){
            inputRecognized = true;
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin, artistName);
            std::cout << "listing all songs by " << artistName << "." << std::endl;
            std::cout << library->listSongsOfArtist(artistName) << std::endl;
        }

        if(command == "song") {
            inputRecognized = true;
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin, artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin, songTitle);

            std::cout << library->getSongInfo(artistName, songTitle) << std::endl;
        }

        if(command == "import"){
            inputRecognized = true;
            //get fileName
            std::cout << "Enter Filename: " << std::endl;
            std::string fileName;
            std::getline(std::cin,fileName);

            std::ifstream myFile;

            myFile.open(fileName, std::ios::in);

            if (!myFile) {
                std::cerr << "Unable to open file: " << fileName << std::endl;
            }
            else{//the file is valid!!

                std::cout << library->importFile(fileName) << std::endl;
            }
            myFile.close();
        }

        if(command == "discontinue"){
            inputRecognized = true;
            //get fileName
            std::cout << "Enter Filename: " << std::endl;
            std::string fileName;
            std::getline(std::cin,fileName);
            std::ifstream myFile;
            myFile.open(fileName, std::ios::in);

            if (!myFile) {
                std::cerr << "Unable to open file: " << fileName << std::endl;
            }
            else{//the file is valid!!

                std::cout << library->removeFile(fileName) << std::endl;
            }
            myFile.close();
        }

        if(command == "playlists"){
            inputRecognized = true;
            std::cout << "listing all playlists ..." << std::endl;
            std::cout << library->listPlaylists() << std::endl;
        }

        if(command == "playlist"){
            inputRecognized = true;
            //get playlistName
            std::cout << "Enter Playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin,playlistName);

            std::cout << library->listSongsOfPlaylist(playlistName) << std::endl;
        }

        if(command == "new"){
            inputRecognized = true;
            //make a new empty playlist with the given name
            //get playlistName
            std::cout << "Enter new playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin, playlistName);
            std::cout << library->addPlaylist(playlistName) << std::endl;
        }

        if(command == "add"){
            inputRecognized = true;
            //take in playlist name, artist, and song title
            //get playlistName
            std::cout << "Enter playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin, playlistName);
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin, artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin, songTitle);

            std::cout << library->addSongToPlaylist(playlistName, artistName, songTitle) << std::endl;
        }


        if(command == "remove"){
            inputRecognized = true;
            //take in playlist name, artist, and song title
            std::cout << "Enter playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin, playlistName);
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin, artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin, songTitle);

            std::cout << library->removeSongFromPlaylist(playlistName,artistName,songTitle) << std::endl;
        }

        if(command == "playnext"){
            inputRecognized = true;
            std::cout << "Enter playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin, playlistName);

            std::cout << library->playNext(playlistName) << std::endl;
        }

        if(command == "newrandom"){
            inputRecognized = true;
            //take in the name for the new playlist and the desired duration
            std::cout << "Enter playlist name: " << std::endl;
            std::string playlistName;
            std::getline(std::cin, playlistName);
            std::cout << "Enter Max Duration: " << std::endl;
            std::string strSongDuration;
            std::getline(std::cin, strSongDuration);
            int totalDuration = std::stoi(strSongDuration);

            std::cout << library->newRandomPlaylist(playlistName, totalDuration) << std::endl;


        }

        if(command == "test"){
            inputRecognized = true;
            Library* testLib = new Library();
            addSongsToLibrary(testLib);
            createPlaylists(testLib);
            checkPlaylists(testLib);
            delete testLib;
        }

        if(!inputRecognized){
            std::cout << "Command not recognized, type help for a list of commands." << std::endl;
        }

        std::cout << "Enter Command: " << std::endl;

        std::getline(std::cin,userInput);
        command = userInput.substr(0, userInput.find(" "));
    }

    std::cout << "Saving library to file..." << std::endl;
    library->save();
    std::cout << "Quitting Auto-DJ" << std::endl;
    return 0;
}