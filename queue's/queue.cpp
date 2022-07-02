#include<bits/stdc++.h>
#include<iostream>
//#include"queue.h"
using namespace std;

int main()
{
    queue<int> x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    x.push(6);
    x.pop();
    x.push(1);

    while(!x.empty())
    {
        cout<<x.front()<<endl;
        x.pop();
    }
    
}