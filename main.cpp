// video list
// Silva, Cristian
// upbeatfish


#include <iostream>
#include <string>
#include "video.h"
#include "vlist.h"
#include <stdio.h>


int main(){
    
    string title;
    string link;
    string comment;
    float length = 0.0;
    int rating = 0;
    int num_videos = 0;
    string sort_method;
    Vlist list;
    Video *video;

while (getline(cin, sort_method))
{
    if(sort_method=="insert")
        {
        getline(cin, title);
        getline(cin, link);
        getline(cin, comment);
        cin >> length;
        cin >> rating;
        cin.ignore();
        
        
        new Video(*video);
        num_videos++;
            
            if (!list.insert)
            {
         
                num_videos--;
            }
        }
    else if (sort_method == "print") {
        video->print();
    }
    else if (sort_method == "length") {
        cout << num_videos << endl;
    }
    
    else if (sort_method == "lookup") {
        string title;
        getline(cin, title);
        if(!list.lookup(title))
            
    else if (sort_method == "remove")
    {
        num_videos--;
        string title;
        getline(cin, title);
        if(!video->remove(title))
            num_videos++;
    }
    else {
              return 1;
    }
}
    
    return 0;
}
}