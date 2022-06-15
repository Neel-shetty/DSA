//lucky numbers
// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/1/?page=1&category[]=Recursion&sortBy=submissions
class Solution{
public:
    bool isLucky(int n,int i=2) {
        // code here
        /*for (int i=2;i<=n;i++)
        {
        if(n%i==0){
            return false;
        }
        
        int np=n-n/i;
    
        }*/
        
        if(n < i) return 1;
       else if(n%i == 0) return 0;
       return isLucky(n-(n/i), i+1);
        
    }
};