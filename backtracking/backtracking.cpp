#include<bits/stdc++.h>
using namespace std;

void fillarray(int *arr, int i,int n,int val)
{
    //base case
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    //rec case
    arr[i]=val;
    fillarray(arr,i+1,n,val+1);
    //backtracking step
    
    arr[i]=-1*arr[i]; 

}

int main()
{
    int arr[100];
    int n;
    cin>>n;

    fillarray(arr,0,n,1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}