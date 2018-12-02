#include <iostream>

int main() {

    //TODO Set up objects and stuff

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
            std::cout << "o----------------------------List of Commands-----------------------------o" << std::endl;
            std::cout << "|                     library: display all songs                          |" << std::endl;
            std::cout << "|             artist <artist>: display all songs of an artist             |" << std::endl;
            std::cout << "|        song <artist, title>: display info of a song                     |" << std::endl;
            std::cout << "|           import <filename>: add all songs from a file to library       |" << std::endl;
            std::cout << "|      discontinue <filename>: remove all songs on a file from library    |" << std::endl;
            std::cout << "|                   playlists: display the names of all playlists         |" << std::endl;
            std::cout << "|             playlist <name>: display songs left in playlist and duration|" << std::endl;
            std::cout << "|                  new <name>: make a new empty playlist                  |" << std::endl;
            std::cout << "|   add <name, artist, title>: add song to playlist                       |" << std::endl;
            std::cout << "|remove <name, artist, title>: remove song from playlist                  |" << std::endl;
            std::cout << "|             playnext <name>: play the next song of a playlist           |" << std::endl;
            std::cout << "|  newrandom <name, duration>: make a playlist of random songs            |" << std::endl;
            std::cout << "o-------------------------------------------------------------------------o" << std::endl;
        }

        if(command == "library") {
            inputRecognized = true;
            std::cout << "TODO: access your library" << std::endl;
        }

        if(command == "artist"){
            inputRecognized = true;
            std::string artistName = userInput.substr(7, std::string::npos);
            std::cout << "listing all songs by " << artistName << "." << std::endl;
            //TODO
            //Iterate through all songs
            //if a song artist matches artistName, print it
        }

        if(command == "song"){
            inputRecognized = true;
            //get artistName
            std::cout << "Enter Artist Name: " << std::endl;
            std::string artistName;
            std::getline(std::cin,artistName);
            //get songTitle
            std::cout << "Enter Song Title: " << std::endl;
            std::string songTitle;
            std::getline(std::cin,songTitle);

            std::cout << "printing info for " << songTitle << " by " << artistName << "." << std::endl;
        }

        if(command == "import"){
            inputRecognized = true;
            std::string fileName = userInput.substr(7, std::string::npos);
            //try to instantiate file
            //if it doesn't exist, catch and print error message
            //if it does, add all new songs
            //list all songs that already existed
        }

        if(command == "discontinue"){
            inputRecognized = true;
            std::string fileName = userInput.substr(12, std::string::npos);
            //try to instantiate file
            //if it doesn't exist, catch and print error message
            //if it does, delete all songs listed
            //list all songs that the file contained, but the library did not
        }

        if(command == "playlists"){
            inputRecognized = true;
            std::cout << "listing all playlists ..." << std::endl;
        }

        if(command == "playlist"){
            inputRecognized = true;
            std::string playlistName = userInput.substr(9, std::string::npos);
            //print out all the songs left in the playlist and the total duration
        }

        if(command == "new"){
            inputRecognized = true;
            std::string newPlaylistName = userInput.substr(4, std::string::npos);
            //make a new empty playlist with the given name
        }

        if(command == "add"){
            inputRecognized = true;
            //take in playlist name, artist, and song title
        }

        if(command == "remove"){
            inputRecognized = true;
            //take in playlist name, artist, and song title
        }

        if(command == "playnext"){
            inputRecognized = true;
            std::string playlistName = userInput.substr(9, std::string::npos);
        }

        if(command == "newrandom"){
            inputRecognized = true;
            //take in the name for the new playlist and the desired duration
        }

        if(!inputRecognized){
            std::cout << "Command not recognized, type help for a list of commands." << std::endl;
        }

        std::cout << "Enter Command: " << std::endl;

        std::getline(std::cin,userInput);
        command = userInput.substr(0, userInput.find(" "));
    }

    std::cout << "Quitting Auto-DJ" << std::endl;
    return 0;
}