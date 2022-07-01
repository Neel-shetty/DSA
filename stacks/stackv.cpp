#include<bits/stdc++.h>
#include"stackv.h"
using namespace std;

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while (!s.empty())
    {
        /* code */
        cout<<s.top();
        s.pop();
    }
    
}