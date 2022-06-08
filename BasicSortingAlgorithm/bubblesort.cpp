#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
    for(int times=1;times<=n-1;times++)
    {
        for(int j=0;j<n-times;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={1,4,5,3,2,8,0};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);

    for(auto x : arr)
    {
        cout<<x<<",";
    }

    return 0;
}