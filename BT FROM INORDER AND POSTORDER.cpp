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

node* buildtree(int postorder[],int inorder[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    static int ind=e;
    int curr=postorder[ind];
    ind--;

    node* n=new node(curr);
    if(s==e)
    {
        return n;
    }
    int pos=lsearchh(inorder,curr,s,e);

    n->right=buildtree(postorder,inorder,pos+1,e);
    n->left=buildtree(postorder,inorder,s,pos-1);

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
    int v1[]={4,5,2,6,7,3,1};
    int v2[]={4,2,5,1,6,3,7};

    node* root=buildtree(v1,v2,0,6);


    preprint(root);


return 0;
}
