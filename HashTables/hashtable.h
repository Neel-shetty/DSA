#include<bits/stdc++.h>
using namespace std;


template<typename T> 
class node
{
public:
    string key;
    T value;
    node*next;

    node(string key,T value)
    {
        this->key=key;
        this->value=value;
        next=NULL;
    }

    ~node()
    {
        if(next!=NULL)
        {
            delete next;
        }
    }
};

template<typename T> 
class hashtable
{
    node<T>**table;
    int cs;
    int ts;

    int hashfn(string key)
    {
        int idx=0;
        int power=1;
        for(auto ch :key)
        {
            idx=(idx+ch*power)%ts;
            power=(power*29)%ts;
        }
        return idx;
    }

    void rehash()
    {
        node<T> **oldtable=table;
        int oldts = ts;

        //increase table size
        cs=0;
        ts=2*ts+1;
        table = new node<T>*[ts];

        for(int i=0;i<ts;i++)
        {
            table[i]=NULL;
        }

        //cpy elements
        for(int i=0;i<oldts;i++)
        {
            node<T>*temp = oldtable[i];
            while(temp!=NULL)
            {
                string key=temp->key;
                T value = temp->value;
                insert(key,value);
                temp=temp->next;
            }

            if(oldtable[i]!=NULL)
            {
                delete oldtable[i]; 
            }
        }
        delete [] oldtable;
    }

public:
    hashtable(int default_size=7)
    {
        cs=0;
        ts=default_size;

        table = new node<T>*[ts];

        for(int i=0;i<ts;i++)
        {
            table[i]=NULL;
        }
    }

    void insert(string key,T val)
    {
        int idx=hashfn(key);

        node<T>*n=new node<T>(key,val);

        n->next=table[idx];
        table[idx]=n;
        cs++;
        float loadfactor=cs/float(ts);
        if(loadfactor>0.7)
        {
            rehash();
        }


    }

    T*search(string key)
    {
        int idx=hashfn(key);

        node<T>*temp=table[idx];

        while(temp!=NULL)
        {
            if(temp->key==key)
            {
                return &temp->value;
            }
        }
        return NULL;
    }

    void print()
    {
        for(int i=0;i<ts;i++)
        {
            cout<<"bucket "<<i<<"->";
            
            node<T>*temp = table[i];
            while(temp!=NULL)
            {
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }



};

