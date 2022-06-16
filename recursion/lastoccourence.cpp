#include<bits/stdc++.h>
using namespace std;

int lastocc(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int subind=lastocc(arr+1,n-1,key);
    if(subind==-1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subind+1;
    }
}

int main()
{
    int arr[]={1,3,5,7,6,2,11,3,21};
    int n=sizeof(arr)/sizeof(int);
    int key=3;
    cout<<lastocc(arr,n,key);

    return 0;
}