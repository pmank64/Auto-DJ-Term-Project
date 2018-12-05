//
// Created by John Hunter on 12/3/2018.
//

#include "SongLibrary.h"
#include "SongNode.h"

SongLibrary::SongLibrary(){
    front = nullptr;
}

SongLibrary::~SongLibrary() {
    //TODO
}

void SongLibrary::addSong(std::string artist, std::string title, int duration) {
//    SongNode* newSongNode = new SongNode(newSong);
//
//    if(front == nullptr)
//        front = newSong;
//    else{
//        SongNode* currNode = front;
//        while(currnode->getItem()->getArtist() > newSongNode->getItem()->getArtist())
//        {
//            currNode = currNode->getNext();
//        }
//
//    }

    //TODO this should add songs in alphabetical order!!!!!!!!!!!!!
    if(front == nullptr){
        SongNode* newSongNode = new SongNode(artist, title, duration);
        front = newSongNode;
    }
    else{
        SongNode* currNode = front;
        while(currNode->getNext() != nullptr)
            currNode = currNode->getNext();
        SongNode* newSongNode = new SongNode(artist, title, duration);
        currNode->setNext(newSongNode);
    }

}

Song* SongLibrary::getSongPtr(std::string artist, std::string title){

}
std::string SongLibrary::getSongInfo(std::string){

}

std::string SongLibrary::listSongs(){
    std::string myStr = "";
    if(front == nullptr)
        return "No songs in Library";
    else{
        int count = 1;
        SongNode* currNode = front;
        while(currNode->getNext() != nullptr){
            myStr = myStr + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ") \n";
            count++;
            currNode = currNode->getNext();
        }
        myStr =  myStr + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ")";
        return myStr;
    }
}

std::string SongLibrary::listSongsOfArtist(std::string artistName) {
    std::string myStr = "";
    if(front == nullptr)
        return "No songs of this artist";
    else{
        int count = 1;
        SongNode* currNode = front;
        while(currNode->getNext() != nullptr){
            if(currNode->getItem()->getArtist() == artistName){
                myStr = myStr + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ") \n";
                count++;
            }
            currNode = currNode->getNext();
        }
        if(currNode->getItem()->getArtist() == artistName){
            myStr = myStr + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ") ";
            count++;
        }
        if(count == 1)
            return "No songs of this artist!";
        return myStr;
    }
}