#include<iostream>
using namespace std;

int largestsubarray(int arr[],int n)
{
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<=n;i++)
    {
        prefix[i]= prefix[i-1] + arr[i];
    }

    int largestsum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            
            
            int sum=i>0? prefix[j]-prefix[i-1] : prefix[j];
            
        

            largestsum=max(largestsum,sum);

        }
        //cout<<endl;
        
    }
    return largestsum;
}





int main()
{
    int arr[]={1,2,-3,4,5,6,7,-8};
    int n = sizeof(arr)/sizeof(int);

    //printsubarray(arr,n);
    
    cout<<largestsubarray(arr,n);


    return 0;
}