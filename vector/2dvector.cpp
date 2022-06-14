#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<vector<int>> arr = {{1,2},{2,3},{4,5,6}};

    arr[0][0] += 10;

    for(int i=0;i<arr.size();i++)
    {
        for(int number : arr[i])
        {
            cout<<number<<endl;   
        }
    }
}