//Print 1 to n without using loops
// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1/?page=2&category[]=Recursion&sortBy=submissions
#include<bits/stdc++.h>>
using namespace std;

class Solution
{
public:
    void printTillN(int N)
    {
        // Write Your Code here
        if(N==0){
            return;
        }
        
        printTillN(N-1);
        cout<<N<<" ";
    }
};