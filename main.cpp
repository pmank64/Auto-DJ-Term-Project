#include <iostream>

int main() {

    //TODO Set up objects and stuff

    std::cout << "Welcome to Auto-DJ, type help for a list of commands." << std::endl;
    std::string command;
    std::getline(std::cin,command);
    bool inputRecognized = false;

    
    while(command!="quit"){
        inputRecognized = false;

        if(command == "asd asd"){
            inputRecognized = true;
            std::cout << "ASDASDASD" << std::endl;
        }
        if(command == "qwe"){
            std::cout << "YEEHAW" << std::endl;
        }



        if(!inputRecognized){
            std::cout << "Command not recognized, type help for a list of commands." << std::endl;
        }

        std::getline(std::cin,command);
    }

    std::cout << "Quitting Auto-DJ" << std::endl;
    return 0;
}