//power of numbers
// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1/?page=1&category[]=Recursion&sortBy=submissions
#include<bits/stdc++.h>>
using namespace std;

long long power(int N,int R){
    {
       //Your code here
       int sum,m;
       
        
        if (R==1)
        {
            return N;
        }
        
        //long long prevpow = power(N,R-1);
        //return N*prevpow;
        
        sum=power(N,R/2);
        if(R%2==0){
       return sum%m*sum%m;
        }
        return N*sum%m*sum%m;

    }
