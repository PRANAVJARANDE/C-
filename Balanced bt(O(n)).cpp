#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};

bool balancedd(node *root,int *h)
{
    if(root==NULL)
    {
        return 1;
    }


    int lh=0,rh=0;
    bool b1=balancedd(root->left,&lh);
    bool b2=balancedd(root->right,&rh);

    if(b1==0)
    {
        return 0;
    }
    if(b2==0)
    {
        return 0;
    }
    *h=1+max(lh,rh);
    if(abs(lh-rh)<=1)
    {
        return 1;
    }
    return 0;
}



int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    root->right->left=new node(6);
    root->right->right=new node(7);


    int h=0;
    if(balancedd(root,&h)==1)
    {
        cout<<"BALANCED "<<endl;
    }
    else
    {
        cout<<"NOT BALANCED"<<endl;
    }

return 0;
}
