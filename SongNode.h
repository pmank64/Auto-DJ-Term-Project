//
// Created by Peter Mankiewich on 11/27/18.
//

#ifndef AUTODJ_SONGNODE_H
#define AUTODJ_SONGNODE_H

#include "Song.h"

class SongNode {
private:
    Song* item;
    SongNode* next;
public:
    SongNode(std::string artist, std::string title, int duration);
    Song* getItem();
    SongNode* getNext();
    void setNext(SongNode* newNext);
    void setItem(Song* newItem);

};

#endif //AUTODJ_SONGNODE_H
