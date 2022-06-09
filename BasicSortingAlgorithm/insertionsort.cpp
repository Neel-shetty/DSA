#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int current = a[i];
        int prev = i-1;

        while(prev>=0 and a[prev]>current)
        {
            a[prev+1]=a[prev];
            prev=prev-1;
        }

        a[prev+1]=current;

    }
}

int main()
{
    int arr[]={1,4,5,3,2,8,0};
    int n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);

    for(auto x : arr)
    {
        cout<<x<<",";
    }

    return 0;
}