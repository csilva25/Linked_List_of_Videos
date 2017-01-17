// video list
// Silva, Cristian
// upbeatfish
#include "video.h"
#include <iostream>
#include <string>
using namespace std;

    string title;
    string link;
    string comment;
    float length = 0.0;
    int rating = 0;
    
    string sort_method;
    
    int num_videos = 0;  // the number of videos that is read in
    Video *videos[100];
    
    
    Video::Video(string title, string link, string comment, double length, int rating)
    {m_title = title; m_link = link; m_comment = comment; m_rating = rating; m_length = length;}

    
    bool Video::longer(string sort_method, Video* other)
    {
        if(sort_method == "title")
        {
            return m_title > other->m_title;
        }
        else if(sort_method == "length")
        {
            return m_length > other->m_length;
        }
        else if(sort_method == "rating")
        {
            return m_rating > other->m_rating;
        }
        
        return false;
    
    }
  
    void Video::print()
        {
        cout << Video->m_title <<", " <<Video->m_link <<", " <<Video->m_comment <<", " <<Video->m_length <<", ";
        
            for (int i = 0; i < m_rating; i++){
            cout << "*";
            }
            cout << endl;
        


    

        
        }