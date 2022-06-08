#include<iostream>
using namespace std;

void printsubarray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            //cout<<"("<<i<<","<<j<<")";

            /*for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<endl;*/
            int big[]={0};
            int sum = i+j;
            cout<<"sum of "<<i<<" and "<<j<<" is "<<sum<<endl;

            for(int k=0;k<n;k++){
            
            //cout<<sum<<" ";

            
            /*int big[]={0};
            cin>>big[sum];
            cout<<big[sum]<<" ";*/
            for(int i=0;i<n;i++)
            {
                big[i]=sum;
                cout<<big[i];

                    for(int i=0;i<n;i++)
            {
                big[i]=sum;
                cout<<big[i];
            }
            
            }
            
            }
            

        }
        //cout<<endl;
        
    }
}





int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);

    printsubarray(arr,n);
    



    return 0;
}