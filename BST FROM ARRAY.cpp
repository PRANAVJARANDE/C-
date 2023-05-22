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


void insertbst(node * &root,int val)
{
    if(root==NULL)
    {
        root=new node(val);
        return;
    }

    if(val < root->data)
    {
        insertbst(root->left,val);
    }
    else
    {
        insertbst(root->right,val);
    }
}


node * makebst(vector<int> arr)
{
    node *root=new node(arr[0]);

    for(int i=1;i<arr.size();i++)
    {
        insertbst(root,arr[i]);
    }
    return root;
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    int n;
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v1.push_back(t);
    }

    node *root=makebst(v1);
    inorder(root);

    return 0;
}
