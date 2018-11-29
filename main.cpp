#include <iostream>

int main() {

    //TODO Set up objects and stuff

    std::cout << "Welcome to Auto-DJ, type help for a list of commands." << std::endl;

    //userInput = the entire line the user enters, command = the first word of userInput
    std::string userInput;
    std::getline(std::cin,userInput);
    std::string command = userInput.substr(0, userInput.find(" "));

    bool inputRecognized;
    while(command !="quit"){
        inputRecognized = false;

        if(command == "library"){
            inputRecognized = true;
            std::cout << "access your library" << userInput << std::endl;
        }

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

        if(!inputRecognized){
            std::cout << "Command not recognized, type help for a list of commands." << std::endl;
        }

        std::getline(std::cin,userInput);
        command = userInput.substr(0, userInput.find(" "));
    }

    std::cout << "Quitting Auto-DJ" << std::endl;
    return 0;
}