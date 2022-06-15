#include<bits/stdc++.h>
using namespace std;

int pow(int base,int power )
{
    if(power==0)
    {
        return 1;
    }
    int prevpow = pow(base,power-1);
    return base*prevpow;

}

int main()
{
    int base,power;
    cout<<"enter the base";
    cin>>base;
    cout<<"enter the power";
    cin>>power;
    cout<<pow(base,power);
}
