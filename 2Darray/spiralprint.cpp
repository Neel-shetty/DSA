#include<bits/stdc++.h>
using namespace std;

void output(int arr[][10],int n,int m)
{
    int startrow=0;
    int endrow=n-1;
    int startcol=0;
    int endcol=n-1;

    while(startcol<=endcol and startrow<=endrow)
    {
        for(int col=startcol;col<=endcol;col++)
        {
            cout<<arr[startrow][col]<<" ";
        }

        for(int row=startrow+1;row<=endrow;row++)
        {
            cout<<arr[row][endcol]<<" ";
        }

        for(int col=endcol-1;col>=startcol;col--)
        {
            if(startrow==endrow){
                break;
            }
            cout<<arr[endrow][col]<<" ";
        }

        for(int row=endrow-1;row>=startrow;row--)
        {
            if(startcol==endcol){
                break;
            }
            cout<<arr[row][startcol]<<" ";
        }

        startrow++;
        endrow--;
        startcol++;
        endcol--;

    }

    
}

int main()
{
     int arr[][10]= {{1,2,3,4},
                    {12,13,14,5} , 
                    {11,16,15,6}  ,
                    {10,9,8,7}};

    int n = 4, m=4;

    output(arr,n,m);
}