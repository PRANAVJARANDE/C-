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


int lsearchh(int arr[],int z,int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        if(arr[i]==z)
        {
            return i;
        }
    }

    return -1;
}




node* buildtree(int preorder[],int inorder[],int s,int e)
{
    static int idx=0;
    if(s>e)
    {
        return NULL;
    }
    int curr=preorder[idx];
    idx++;

    node *n=new node(curr);

    if(s==e)
    {
        return n;
    }

    int pos=lsearchh(inorder,curr,s,e);

    n->left=buildtree(preorder,inorder,s,pos-1);
    n->right=buildtree(preorder,inorder,pos+1,e);
    return n;
}



void preprint(node *root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preprint(root->left);
    preprint(root->right);
}



int main()
{
    int v1[]={1,2,4,5,3,6,7};
    int v2[]={4,2,5,1,6,3,7};

    node* root=buildtree(v1,v2,0,6);


    preprint(root);


    return 0;
}
