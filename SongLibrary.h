////
//// Created by John Hunter on 12/2/2018.
////
//
//#ifndef AUTODJ_SONGLIBRARY_H
//#define AUTODJ_SONGLIBRARY_H
//
//#include "SongLibADT.h"
//#include "Song.h"
//#include "SongNode.h"
//
////!!!
////This class uses Nodes to store songs
////After deciding we should use arrays to store songs, this class was abandoned
////SongLibraryArray is the correct song library class
//
//class SongLibrary: public SongLibADT{
//private:
//    SongNode* front;
//public:
//    SongLibrary();
//    ~SongLibrary();
//    void addSong(std::string artist, std::string title, int duration);
//    Song* getSongPtr(std::string artist, std::string title);
//    std::string getSongInfo(std::string);
//    bool isSongInLib(std::string artist, std::string title);
//    std::string listSongs();
//    std::string listSongsOfArtist(std::string artistName);
//};
//
//#endif //AUTODJ_SONGLIBRARY_H
