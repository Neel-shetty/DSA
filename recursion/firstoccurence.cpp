#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int subind = firstocc(arr+1,n-1,key);
    if(subind!=-1)
    {
        return subind+1;
    }
    return -1;
}

int main()
{
    int arr[]={1,3,5,7,6,2,11,21};
    int n=sizeof(arr)/sizeof(int);
    int key=21;
    cout<<firstocc(arr,n,key);

    return 0;
}

