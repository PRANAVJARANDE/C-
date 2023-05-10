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

int heightt(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h=1+max(heightt(root->left),heightt(root->right));
    return h;
}




bool balanced(node *root)
{
    if(root==NULL)
    {
        return 1;
    }
    if(balanced(root->left)==0)
    {
        return 0;
    }
    if(balanced(root->right)==0)
    {
        return 0;
    }

    if(abs(heightt(root->left)-heightt(root->right))<=1)
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



    if(balanced(root)==1)
    {
        cout<<"BALANCED "<<endl;
    }
    else
    {
        cout<<"NOT BALANCED"<<endl;
    }

return 0;
}
