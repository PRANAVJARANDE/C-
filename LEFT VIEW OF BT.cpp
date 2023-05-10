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

void leftview(node* root)
{
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);
    cout<<root->data<<" ";
    while(!q1.empty())
    {
        node *k=q1.front();
        q1.pop();
        if(k!=NULL)
        {
            if(k->left!=NULL)
            {
                q1.push(k->left);
            }
            if(k->right!=NULL)
            {
                q1.push(k->right);
            }
        }
        else
        {
            cout<<q1.front()->data<<" ";
            if(q1.empty())
            {
                break;
            }
            q1.push(NULL);
        }
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


    leftview(root);

return 0;
}


