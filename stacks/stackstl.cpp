#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> boobs;
    boobs.push("tiddies");
    boobs.push("tits");
    boobs.push("boobies");
    boobs.push("mommy milkers");

    while(!boobs.empty())
    {
        cout<<boobs.top()<<endl;
        boobs.pop();
    }

    return 0;
}