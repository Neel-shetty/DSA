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

node*findmin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

node* remove(node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(key<root->key)
    {
        root->left=remove(root->left,key);
    }
    else if(key>root->key)
    {
        root->right=remove(root->right,key);
    }
    else
    {
        if(root->left==NULL and root->right==NULL)
        {
            delete root;
            root=NULL;
            return root;
        }
        else if(root->left==NULL)
        {
            node*temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            node*temp=root;
            root=root->right;
            delete root;
        }
        else
        {
            node*temp=findmin(root->right);
            root->key=temp->key;
            root->right=remove(root->right,temp->key); 
        }
    }
    return root;
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

    int key;
    cin>>key;
    root=remove(root,key);

    printinorder(root);
    cout<<endl;
    cout<<search(root,9);
    return 0;
}