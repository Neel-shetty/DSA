#include<bits/stdc++.h>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route,1000);

    int x=0,y=0;

    for(int i=0;route[i]!='\0';i++)
    {
        switch (route[i])
        {
        case 'N'/* constant-expression */: y++;
            /* code */
            break;

        case 'S' : y--;
            break;

        case 'E' : x++;
            break;

        case 'W' : x--;
            break;
        
        //default:
            //break;
        }
    }

    cout<<"final - "<<x<<","<<y;
}