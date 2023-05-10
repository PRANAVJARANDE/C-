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


int diameter(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int d=heightt(root->left)+heightt(root->right)+1;

    int h=max(diameter(root->left),diameter(root->right));
    return max(h,d);
}






int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
   // root->left->right=new node(5);

    //root->right->left=new node(6);
    //root->right->right=new node(7);

    root->left->left->left=new node(2);
    root->left->left->left->left=new node(2);


    cout<<diameter(root);

return 0;
}

