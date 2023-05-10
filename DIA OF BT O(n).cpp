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

int dia(node *root,int *h)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=0,rh=0;
    int ldia=dia(root->left,&lh);
    int rdia=dia(root->right,&rh);

    int curdia=lh+rh+1;
    *h=max(lh,rh)+1;

    return max(curdia,max(ldia,rdia));
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

    root->left->left->left=new node(2);
    root->left->left->left->left=new node(2);

    int h=0;
    cout<<dia(root,&h)<<endl;
    cout<<h;

return 0;
}


