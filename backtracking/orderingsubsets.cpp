#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    if(a.length()==b.length())
    {
        return a < b;
    }
    return a.length()<b.length();

}

void findss(char *input,char *output,int i,int j,vector<string> &list)
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        string temp(output);
        list.push_back(temp);
        return;
    }

    output[j]=input[i];
    findss(input,output,i+1,j+1,list);

    findss(input,output,i+1,j,list);
}

int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin>>input;

    findss(input,output,0,0,list);
    sort(list.begin(), list.end(),compare);

    for(auto s:list)
    {
        cout<<s<<",";
    }

    return 0;
}