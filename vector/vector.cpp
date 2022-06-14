#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(10,7); //= {1,2,3,4,5};\
    
    arr.pop_back();
    arr.push_back(12);
    

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    cout<<arr.size()<<endl;

    cout<<arr.capacity();
}