//
// Created by Anthony on 12/2/2018.
//

#ifndef AUTODJ_PLAYLISTLIBADT_H
#define AUTODJ_PLAYLISTLIBADT_H

#endif //AUTODJ_PLAYLISTLIBADT_H
class playlistLibADT{
private:

public:
    virtual playlistLibADT()=0;


    virtual ~playlistLibADT()=0;

    virtual void addSong(Song songToAdd)=0;

    virtual removeSong(Song songToRemove)=0;

    virtual std::string songsLeft()=0;

    virtual std::string playnext()=0;
    virtual playlistLibADT randomPlaylist()=0;



};
