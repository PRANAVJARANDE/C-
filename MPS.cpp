#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int x)
    {
        data=x;
        right=NULL;
        left=NULL;
    }

};

int mps(node *root,int *d)
{
    if(root==NULL)
    {
        return 0;
    }
    *d=max(*d,root->data+max(mps(root->left,d),mps(root->right,d)));
    return *d;

}



int main()
{
    node *root=new node(1);
    root->left=new node(-12);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(-6);
    root->right->left->left=new node(-7);

    int x=INT_MIN;
    cout<<mps(root,&x);

    return 0;
}

