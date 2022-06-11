#include<iostream>
#include<vector>
using namespace std;

void countingsort(int a[],int n)
{
    int largest = -1;

    for(int sex=0;sex<n;sex++)
    {
        largest = max(largest,a[sex]);

    }

    vector<int> freq(largest+1,0);


    for(int sex=0;sex<n;sex++)
    {
        freq[a[sex]]++;
        
    }

    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>  0)
        {
            a[j]=i;
            freq[i]--;
            j++;
        }
    }


}

int main()
{
    int arr[]={1,4,5,3,2,8,0};
    int n = sizeof(arr)/sizeof(int);
    countingsort(arr,n);

    for(auto x : arr)
    {
        cout<<x<<",";
    }

    return 0;
}