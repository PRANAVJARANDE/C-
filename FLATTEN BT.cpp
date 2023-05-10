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




void flatten(node*&root)
{
if(root==NULL)
{
    return;
}
flatten(root->left);
flatten(root->right);

if(root->left==NULL && root->right==NULL)
{
    return;
}
else if(root->left==NULL)
{
    return;
}
else if(root->right==NULL)
{
    root->right=root->left;
    root->left=NULL;
}
else
{
    node *temp=root->left;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=root->right;
    root->right=root->left;
    root->left=NULL;
}
}

void display(node*head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->right;
    }
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
    root->right->right->right=new node(100);

    flatten(root);
    display(root);



return 0;
}
