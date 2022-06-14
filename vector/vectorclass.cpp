//#include<bits/stdc++.h>
#include<iostream>
#include"vector.h"
using namespace std;

/*class vector
{
    private:
    int *arr;
    int cs;
    int ms;

    public:
        vector(int maxsize=1)
        {
            cs=0;
            ms=maxsize;
            arr=new int[ms];
        }

        void push_back(const int d)
        {
            if(cs==ms)
            {
                int *oldarr = arr;
                ms=2*ms;
                arr=new int[ms];

                for (int i=0;i<cs;i++)
                {
                    arr[i]=oldarr[i];
                }

                delete [] oldarr;
            }
            arr[cs]= d;
            cs++;
        }

        void pop_back()
        {
            if(cs>=0){
                cs--;
            }
        }

        int front()const
        {
            return arr[0];
        }
        
        int back()const
        {
            return arr[cs-1];
        }

        int at(int i) const
        {
            return arr[i];
        }

        int size() const
        {
            return cs;
        }

        int capacity()const
        {
            return ms;
        }

        int operator[](const int i)const
        {
            return arr[i];
        }



};
*/
int main()
{
    vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.at(2)<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
}