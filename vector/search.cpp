#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8};
    int key=5;

    vector<int>::iterator it = find(arr.begin(),arr.end(),key);
    
    if(it!=arr.end())
    {
        cout<<"present at index "<<it-arr.begin();
    }
    else
    {
        cout<<"element not found";
    }
    return 0;
}