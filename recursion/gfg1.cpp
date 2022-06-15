//finding position
// https://practice.geeksforgeeks.org/problems/finding-position2223/1/?page=3&category[]=Recursion&sortBy=submissions
class Solution {
  public:
    long long int nthPosition(long long int n){
        // code here
        if(n==1)
        {
            return 1;
        }
        
        return nthPosition(n/2)*2;
    }
};