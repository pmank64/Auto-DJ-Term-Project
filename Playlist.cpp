//
// Created by Peter Mankiewich on 12/2/18.
//
#include "Playlist.h"

Playlist::Playlist(std::string playlistNameIn){
    front = nullptr;
    duration = 0;
    playlistName = playlistNameIn;
}

Playlist::~Playlist(){
    //TODO this wasn't working. Couldn't figure it out before the deadline :(
//    bool checker = true;
//    PlaylistNode* progress = this->front;
//    while (checker){
//        if (progress->getNext() == nullptr){
//            checker = false;
//        }
//        PlaylistNode* progressholder = progress;
//        delete progress;
//        progress = nullptr;
//        progress = progressholder->getNext();
//        delete progressholder;
//    }
//    front = nullptr;
}


Playlist& Playlist::operator=(const Playlist& playlistToCopy){
    //TODO
}

/*
 * throws std::out_of_range exception if song not found
 */
Song* Playlist::removeSong(Song* toRemove) {

    //this happens if there are no songs
    if (front == nullptr){
        throw std::out_of_range("Song Not Found");
    }
    //this happens when there is only one song
    else if (front->getNext()==nullptr){
        duration -= toRemove->getDuration();
        Song* returnItem = front->getItem();
        delete front;
        front = nullptr;
        return returnItem;
    }
    //this happens if the first node is the song to remove
    else if (front->getItem() == toRemove){
        duration -= toRemove->getDuration();
        Song* toReturn = front->getItem();
        PlaylistNode* frontHolder = front;
        front = front->getNext();
        delete frontHolder;
        return toReturn;
    }
    //this happens when there are multiple songs
    else{
        bool tracker = true;
        duration -= toRemove->getDuration();
        PlaylistNode* progress = this->front;
        while (tracker){
            if (progress->getNext()->getItem() == toRemove){
                tracker = false;
            }
            else{
                progress = progress->getNext();
            }
        }

        //gets the next node
        PlaylistNode* newNode = progress->getNext();

        //gets the Song at the next node
        Song* returnItem = newNode->getItem();

        //sets the next pointer to one after the node
        progress->setNext(newNode->getNext());

        //deletes this new node
        delete newNode;

        //returns the song at this node
        return returnItem;
    }


}

void Playlist::addSongToPlaylist(Song* songToAdd){
    PlaylistNode* nodeToAdd = new PlaylistNode(songToAdd);
    this->duration += songToAdd->getDuration();
    if (front == nullptr){
        front = nodeToAdd;
    }
    else{
        PlaylistNode* currNode = front;
        bool tracker = true;
        while (tracker){
            if (currNode->getNext() == nullptr){
                currNode->setNext(nodeToAdd);
                tracker = false;
            }
            currNode = currNode->getNext();
        }

    }
}

int Playlist::getDuration(){
    return duration;
}

std::string Playlist::getName() {
    return playlistName;
}

bool Playlist::isEmpty(){
    return front == nullptr;
}

std::string Playlist::listSongs() {
    if(front==nullptr)
        return "No songs in Playlist";
    else{
        PlaylistNode* currNode = front;
        std::string toString = "";
        int count = 1;
        while(currNode->getNext()!=nullptr){
            toString = toString + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ") \n";
            count++;
            currNode = currNode->getNext();
        }
        toString = toString + std::to_string(count) + ". " + currNode->getItem()->getTitle() + " by " + currNode->getItem()->getArtist() + " (" + std::to_string(currNode->getItem()->getDuration()) + ") \n";
        return toString;
    }
}

bool  Playlist::isSongInPlaylist(std::string artistName, std::string songTitle){
    if (front == nullptr){
        return false;
    }
    else{
        PlaylistNode* currNode = front;
        bool tracker = true;
        while (tracker){
            if (currNode->getItem()->getArtist()==artistName && currNode->getItem()->getTitle()==songTitle){
                return true;
            }
            if (currNode->getNext() == nullptr){
                tracker =  false;
            }
            currNode = currNode->getNext();
        }

    }
    return false;
}

std::string Playlist::playNext() {
    Song* toPlay = front->getItem();
    toPlay->play();
    std::string toReturn = "Playing " + toPlay->getTitle() + " by " + toPlay->getArtist() + " (" + std::to_string(toPlay->getDuration()) + ") Playcount: " + std::to_string(toPlay->getPlayCount());
    this->removeSong(toPlay);
    return toReturn;
}