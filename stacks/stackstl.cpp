#include<bits/stdc++.h>
using namespace std;

void insertdown(stack<string> &boobs, string data)
{
    if(boobs.empty())
    {
        boobs.push(data);
        return;
    }

    string temp = boobs.top();
    boobs.pop();

    insertdown(boobs,data);
    boobs.push(temp);
}

void reverse(stack<string> &boobs)
{
    if(boobs.empty())
    {
        return;
    }
    string t = boobs.top();
    boobs.pop();
    reverse(boobs);
    insertdown(boobs,t);
    
}

int main()
{
    stack<string> boobs;
    boobs.push("tiddies");
    boobs.push("tits");
    boobs.push("boobies");
    boobs.push("mommy milkers");


    //insertdown(boobs, "boob");
    reverse(boobs);

    while(!boobs.empty())
    {
        cout<<boobs.top()<<endl;
        boobs.pop();
    }

    return 0;
}