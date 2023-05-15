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
        left=NULL;
        right=NULL;
    }

};



int heightt(node *root,int n1) //k=0
{
    int l=0;
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty())
    {

        node* k=q1.front();
        q1.pop();
        if(k!=NULL)
        {
            if(k->data==n1)
            {
                break;
            }

            if(k->left!=NULL)
            {
                q1.push(k->left);
            }
            if(k->right!=NULL)
            {
                q1.push(k->right);
            }
        }
        else if(!q1.empty())
        {
            l++;
            q1.push(NULL);
        }
    }

return l;

}



node * getlca(node *root,int n1,int n2)
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



    node *llca=getlca(root->left,n1,n2);
    node *rlca=getlca(root->right,n1,n2);


    if(llca!=NULL && rlca!=NULL)
    {
        return root;
    }


    if(llca==NULL)
    {
        return rlca;
    }
    return llca;


}

int dist(node* root,int n1,int n2)
{
    node *t=getlca(root,n1,n2);
    int d1=heightt(t,n1);
    int d2=heightt(t,n2);
    int d=d1+d2;
    return d;
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

    root->right->right->right=new node(8);
    root->right->left->left=new node(9);

    cout<<dist(root,4,8);

    return 0;
}

