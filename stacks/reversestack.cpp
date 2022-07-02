#include<bits/stdc++.h>
using namespace std;

void reverse(stack<string> &boobs)
{
    if(boobs.empty())
    {
        return;
    }
    string t = boobs.top();
    boobs.pop();
    reverse(boobs);
    
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        /* code */
        cout<<s.top();
        s.pop();
    }

}