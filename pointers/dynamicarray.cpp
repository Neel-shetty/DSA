#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n=5;

    int *arr = new int [n];

    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;

    cout<<arr<<endl;
    cout<<arr[4];

    return 0;



}