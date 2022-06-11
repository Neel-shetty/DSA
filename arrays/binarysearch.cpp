//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    //int mid=n/2;

    while(s<=e)
    {
        int mid = (s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[]={1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    //linearsearch(int arr[], int n, int key)
    int key;
    cin>>key;

    int index = binarysearch(arr,n,key);
    if(index!=1){
        cout<<key<<" is present at index "<<index<<endl;
    
    }
    else{
        cout<<key <<" is NOT Found!" <<endl;
    }
   
}