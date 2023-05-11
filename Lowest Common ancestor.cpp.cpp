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





node* lowestca(node *root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }


    if(root->data==n1)
    {
        return root;
    }
    if(root->data==n2)
    {
        return root;
    }


    node *llca=lowestca(root->left,n1,n2);
    node *rlca=lowestca(root->right,n1,n2);


    if(llca!=NULL || rlca!=NULL)
    {
        return NULL;
    }
    if(llca==NULL)
    {
        return rlca;
    }
    return llca;
}


int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(6);
    root->right->left->left=new node(7);

    node*lcaa=lowestca(root,7,6);
    cout<<lcaa->data<<endl;



    return 0;
}
