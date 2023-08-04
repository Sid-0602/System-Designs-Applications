#include <bits/stdc++.h>
using namespace std;


//user with the attributes. 
class User{
    string id;
    string name;
    string email;

    public: 
        string getID(){
            return id;
        }
};

class watchedVideo{

    string id;
    string videoId;
    string userId;
    int seekTime;

    public: 

    int getSeekTime(){
        return seekTime;
    }
};
class FileSystem{
    public: 
    Frame getVideo(string videoId){
        return;
    }
};
class VideoService{

    private: 
        FileSystem filesystem;
    
    public:
        Frame getFrame(string videoId, int timestamp){
            Video video  = FileSystem.getVideo(videoId);
            return video.getFrame(timestamp);
        }
};


class Database{

    public: 
    
        watchedVideo getWatchedVideo(string userId, string videoId){
            return;
        }
};
class VideoConsumingServices{

    private: 

    Database database; 
    public: 

    int seekTime(string userId, string videoId){
        watchedVideo watchedVideo = database.getWatchedVideo(userId,videoId);
    }   

};

class Frame{
    public: 
    vector<int> bytes; //bytes array stored inside frames.
    int timestamp;  //timestamp of the video.
    int startTimestamp; //this is duration of frame-time.
    int endTimestamp; 
};



class Video{
    public:
    string id; //id of an video. 
    vector<Frame> frames; //frames is using vector to use it effectivity. 
    string jsonMetaData;

    //behaviors:

    //return frames to the user:

    Frame getFrame(int timestamp){
        for(int i=0;i<frames.size();i++){
            //check if the 
            if(frames[i].startTimestamp <= timestamp && frames[i].endTimestamp >= timestamp){
                return frames[i];
            }
        }
    }
    
};


