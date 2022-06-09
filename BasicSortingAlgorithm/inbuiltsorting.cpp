#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    int arr[]={3,5,6,2,5,7,8,1,0};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n,compare);
    //reverse(arr,arr+n); 

    for(int x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}