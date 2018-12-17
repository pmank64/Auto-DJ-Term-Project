//
// Created by John Hunter on 12/3/2018.
//

#include "SongNode.h"

SongNode::SongNode(std::string artist, std::string title, int duration, int playCount) {
    item = new Song(artist, title, duration, playCount);
    next = nullptr;
}

//SongNode::SongNode(const SongNode& songNodeToCopy){
//    item = songNodeToCopy.item;
//    next = nullptr;
//}

Song* SongNode::getItem() {
    return item;
}

SongNode* SongNode::getNext() {
    return next;
}

void SongNode::setItem(Song* newItem) {
    item = newItem;
}

void SongNode::setNext(SongNode* newNext) {
    next = newNext;
}