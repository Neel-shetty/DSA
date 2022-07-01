#include<iostream>
#include"list.h"
using namespace std;

bool search(node*head,int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(head->getdata()==key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

bool recse(node*head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->getdata()==key)
    {
        return true;
    }
    else{
        return recse(head->next,key);
    }
}

int main()
{
    list l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.insert(10,0);
    l.insert(2,2);
    node* head = l.begin();

    int key; 
    cin>>key;

    if(recse(head,key))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl; 
    }

    while(head!=NULL)
    {
        cout<<head->getdata()<<"->";
        head = head->next;
    }
 
}