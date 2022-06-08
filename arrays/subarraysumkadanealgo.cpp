#include<iostream>
using namespace std;

int max_subarray_sum(int arr[],int n)
{
    int cs = 0;
    int ls= 0;

    for(int i=0;i<n;i++)
    {
        cs += arr[i];
        if(cs<0){
            cs=0;
        }
        ls = max(ls,cs);
    }
    return ls;
}

int main()
{
    int arr[]={1,2,-3,4,5,6,7,-8};
    int n = sizeof(arr)/sizeof(int);
    cout<<max_subarray_sum(arr,n)<<endl;
    //max_subarray_sum(arr,n);

    return 0;

}