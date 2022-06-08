#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    int num;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int key = 6;
    

    int index = linearsearch(arr,n,key);
    if (index!=1)
    {
        cout<< "the key at "<<index<<endl;
    
    }
    else{
        cout<<"doesnt exist"<<endl;
    }

    

}