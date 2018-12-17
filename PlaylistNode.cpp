//
// Created by Peter Mankiewich on 12/2/18.
//


#include "PlaylistNode.h"

PlaylistNode::PlaylistNode(Song* item){
    this->item = item;
    next = nullptr;
}

PlaylistNode::PlaylistNode(const PlaylistNode& nodeToCopy){
    item = nodeToCopy.item;
    next = nullptr;
}


Song* PlaylistNode::getItem(){
    return item;
}
PlaylistNode* PlaylistNode::getNext(){
    return next;
}

void PlaylistNode::setItem(Song* song){
    item = song;
}

void PlaylistNode::setNext(PlaylistNode* newNext){
    next = newNext;
}