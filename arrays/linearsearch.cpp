#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
            return i;
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
    //cin>>key;

    int index = linearsearch(arr,n,key);
    if(index!=1){
        cout<<key<<" is present at index "<<index;//<<endl;
    
    }
    else{
        cout<<"not exist";
    }
}