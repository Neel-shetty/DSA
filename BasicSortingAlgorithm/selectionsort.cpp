#include<iostream>
using namespace std;

void selectionsort(int a[],int n)
{
    for(int pos=0;pos<=n-2;pos++)
    {
        int current = a[pos];
        int minpos = pos;
        
        for(int j=pos;j<n;j++)
        {
            if(a[j]<a[minpos])
            {
                minpos=j;
            }
        }

        swap(a[minpos],a[pos]); 
    }
}

int main()
{
    int arr[]={1,4,5,3,2,8,0};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);

    for(auto x : arr)
    {
        cout<<x<<",";
    }

    return 0;
}