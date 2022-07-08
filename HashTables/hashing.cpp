#include<bits/stdc++.h>
#include"hashtable.h"
using namespace std;

int main()
{
    hashtable<int> h;
    h.insert("mango",100);
    h.insert("orange",120);
    h.insert("banana",140);
    h.insert("litchi",200);
    
    h.print();

    string fruit;
    cin>>fruit;
    int *price =h.search(fruit);

    if(*price!=NULL)
    {
        cout<<"price of fruit is"<<*price<<endl;
    }
    else
    {
        cout<<"fruit is not found";
    }

    return 0;
}