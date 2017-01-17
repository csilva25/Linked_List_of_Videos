// video list
// Silva, Cristian
// upbeatfish
#include <iostream>
#include "vlist.h"
#include<string>
#include "video.h"

Vlist::Vlist()
{
    m_head = NULL;
}

Vlist::~Vlist()
{
    
    Node* ptr=m_head;
    while(ptr!=NULL)
    {
        Node *tmp= ptr;
        ptr=ptr->m_next;
        delete tmp->m_value;
        delete tmp;
    }
}

void Vlist::insert(Video *video)
{
    
    if(m_head==NULL)
    {
        m_head=new Node(video, NULL);
    }
    else
    {
        Node* ptr=m_head;
        while(video->title()  >  ptr->m_next->m_value->title())
        {
            ptr=ptr->m_next;
        }
        ptr->m_next=new Node(video, ptr->m_next);
    }
    
    
}

bool Vlist::remove(string title)
{
    
    if(!m_head)
        return false;
    if(m_head -> m_value == title)
    m_head=m_head->m_next;
    return true;
    
    Node *ptr = m_head;
    while(ptr -> m_next!= NULL && ptr -> m_next -> m_value == title)
    {
        ptr =ptr->m_next;
    }
    if (ptr->m_next==NULL)
        return false;

}

void Vlist::print()
{
    Node* ptr = m_head;
    while (ptr != NULL)
    {
        cout << ptr->m_value << endl;
        ptr = ptr->m_next;
    }
    
  
}