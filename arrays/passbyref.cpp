#include<iostream>
using namespace std;

void printarray(int arr[])
{
    cout<<"in function "<<sizeof(arr)<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<"in main "<<sizeof(arr)<<endl;
    printarray(arr);
    return 0;

}