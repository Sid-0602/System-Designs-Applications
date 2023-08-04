#include <bits/stdc++.h>
using namespace std;

class VideoConsumingServices{


};

class Frame{
    public: 
    vector<int> bytes; //bytes array stored inside frames.
    int timestamp;  //timestamp of the video. 
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
            if(frames[i].timestamp <= timestamp && (frames[i].timestamp+10) >= timestamp){
                
            }
        }
    }
    
};


class User{
    string id;
    string name;
    string email;
};