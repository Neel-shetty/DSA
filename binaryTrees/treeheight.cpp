#include<bits/stdc++.h>
using namespace std;

//input - 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//output - 1 2 4 5 7 3 6
//outpul inorder - 4 2 7 5 1 3 6
//output postorder - 4 7 5 2 6 3 1

class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

void printinorder(node*root)
{
    if(root==NULL)
    {
        return;  
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
    
}

node* buildtree()
{
    int d;
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    node* n = new node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}

void printpreorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

void printpostorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" ";

}

void levelorder(node*root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node*temp=q.front();
        if(temp==NULL)
        {
            cout<<endl;
            q.pop();

            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

node* levelbuild()
{
    int d;
    cin>>d;
    
    node*root=new node(d);

    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node*current=q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1)
        {
            current->left=new node(c1);
            q.push(current->left);
        }

        if(c2!=-1)
        {
            current->right=new node(c2);
            q.push(current->right);
        }


    }
    return root;
}

int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1,h2);
}

int main()
{
   /* node*root=buildtree();
    printpreorder(root);
    cout<<endl;
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;*/

    node*root=levelbuild();
    levelorder(root);
    cout<<height(root);
    
}