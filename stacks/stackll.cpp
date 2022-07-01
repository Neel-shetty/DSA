#include<bits/stdc++.h>
#include"stackll.h"
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

    while (s.top()!=NULL)
    {
        /* code */
        cout<<s.top();
        s.pop();
    }
    
}