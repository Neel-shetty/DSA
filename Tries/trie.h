#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class trie;

class node
{
    char data;
    unordered_map<char,node*> m;
    bool isterminal;
public:

    node(char d)
    {
        data=d;
        isterminal=false;
    }
    friend class trie;
};

class trie
{
    node*root;

public:
    trie()
    {
        root=new node('\0');
    }

    void insert(string word)
    {
        node*temp=root;

        for(char ch:word)
        {
            if(temp->m.count(ch)==0)
            {
                node*n=new node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch];
        }
        temp->isterminal=true;
    }

    bool search(string word)
    {
        node*temp=root;
        for(char ch:word)
        {
            if(temp->m.count(ch)==0)
            {
                return false;
            }
            temp=temp->m[ch];
        }
        return temp->isterminal;
    }
};