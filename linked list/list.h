#include<iostream>

class list;

class node
{
    int data;
    

    public:
        node* next;
        node(int d):data(d),next(NULL){}

        int getdata()
        {
            return data;
        }


        friend class list;

};


class list
{
    node * head;
    node * tail;
public:
    list():head(NULL),tail(NULL){}
    node * begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if(head==NULL)
        {
            node * n = new node(data);
            head = tail = n;
            return;
        }
        else
        {
            node *n = new node(data);
            n->next=head;
            head=n;
        }
    }

    void push_back(int data)
    {
        if(head==NULL)
        {
            node * n = new node(data);
            head = tail = n;
        }
        else{
            node * n = new node(data);
            tail->next=n;
            tail=n;
        }
    }

    void insert(int data,int pos)
    {
        if(pos==0)
        {
            push_front(data);
            return;
        }
        node* temp = head;
        for(int jump=1;jump<=pos-1;jump++)
        {
            temp = temp->next;
        }

        node *n = new node(data);
        n->next=temp->next;
        temp->next = n;
    }

    

};