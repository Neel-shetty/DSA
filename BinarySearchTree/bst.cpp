#include<iostream>
using namespace std;

class node
{
    public:
        int key;
        node*left;
        node*right;

        node(int key)
        {
            this->key=key;
            left=right=NULL;
        }
};

node*insert(node*root,int key)
{
    if(root==NULL)
    {
        return new node(key);
    }

    if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    if(key>root->key)
    {
        root->right=insert(root->right,key);
    }
    return root;
}

void printinorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->key<<" ";
    printinorder(root->right);
}

bool search(node*root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->key==key)
    {
        return true;
    }
    if(key<root->key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}

int main()
{
    node*root=NULL;
    int arr[]={10,9,8,7,6,5,3,11,12,13,14};

    for (int x:arr)
    {
        root=insert(root,x);
    }
    printinorder(root);
    cout<<endl;
    cout<<search(root,9);
    return 0;
}