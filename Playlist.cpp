//
// Created by Peter Mankiewich on 12/2/18.
//
#include "Playlist.h"

Playlist::Playlist(){
    front = nullptr;
    duration = 0;
}

Playlist::~Playlist(){
    bool checker = true;
    PlaylistNode* progress = this->front;
    while (checker){
        if (progress == nullptr){
            checker = false;
        }
        else{
            delete progress;
            progress = progress->getNext();
        }
        front = nullptr;
    }
}

Playlist& Playlist::operator=(const Playlist& playlistToCopy){
    //TODO
}

/*
 * throws std::out_of_range exception if song not found
 */
Song* Playlist::removeSong(Song* toRemove) {

    if (front == nullptr){
        throw std::out_of_range("Song Not Found");
    }
    else{
        bool tracker = true;
        PlaylistNode* progress = this->front;
        while (tracker){
            if (progress->getItem() == toRemove){
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
    if (front == nullptr){
        front = nodeToAdd;
    }
    PlaylistNode* currNode = front;
    bool tracker = true;
    while (tracker){
        if (currNode == nullptr){
            currNode->setNext(nodeToAdd);
            tracker = false;
        }
        currNode = currNode->getNext();
    }
    //TODO does this work?
}

float Playlist::getDuration(){
    return duration;
}

bool Playlist::isEmpty(){
    return front == nullptr;
}

