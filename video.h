// video list
// Silva, Cristian
// upbeatfish
#ifndef VIDEO_H
#define VIDEO_H

#include <string>
using namespace std;

class Video
{
public:
    Video(string title, string link, string comment, double length, int rating);
    ~Video();
    void print();
    string description;
    string title();
    int count;
    bool longer(string, Video*);
    bool titles(Video* other);
    bool better_rating(Video* other);
private:
    
    string m_title;
    string m_link;
    string m_comment;
    int m_rating;
    double m_length;
    
    
    
};

#endif