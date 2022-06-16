#include<bits/stdc++.h>
using namespace std;

string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void printspell(int n)
{
    if(n==0)
    {
        return;
    }
    int ld = n%10;
    printspell(n/10);
    cout<<spell[ld]<<" ";
}

int main ()
{
    int n=1236;;
    printspell(n);

    return 0;
}