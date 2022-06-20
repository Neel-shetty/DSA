#include<bits/stdc++.h>
using namespace std;

void findss(char *input,char *output,int i,int j)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        if(output[0]=='\0')
        {
            cout<<"null";
        }
        cout<<output<<endl;
        return;
    }

    output[j]=input[i];
    findss(input,output,i+1,j+1);

    findss(input,output,i+1,j);
}

int main()
{
    char input[100];
    char output[100];
    cin>>input;
    findss(input,output,0,0);
    return 0;
}