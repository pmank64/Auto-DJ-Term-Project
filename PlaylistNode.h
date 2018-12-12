//
// Created by Peter Mankiewich on 11/27/18.
//

#ifndef AUTODJ_PLAYLISTNODE_H
#define AUTODJ_PLAYLISTNODE_H

#include <string>
#include <stdexcept>
#include "Song.h"


class PlaylistNode {
private:
    Song* item;
    PlaylistNode* next;
public:
    PlaylistNode(Song* item);
    PlaylistNode(const PlaylistNode& nodeToCopy);
    Song* getItem();
    PlaylistNode* getNext();
    void setItem(Song* song);
    void setNext(PlaylistNode* newNext);
};


#endif //AUTODJ_PLAYLISTNODE_H
