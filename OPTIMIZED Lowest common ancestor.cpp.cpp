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



void getpath(node* root,int n1,vector<int> &v1,queue<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    v1.push_back(root->data);
    getpath(root->left,n1,v1,ans);
    getpath(root->right,n1,v1,ans);
    if(root->data!=n1)
    {
        v1.pop_back();
    }
    if(root->data==n1)
    {
        for(int i=0;i<v1.size();i++)
        {
            ans.push(v1[i]);
        }
    }
}






int lca(node *root,int n1,int n2)
{
    vector<int>v1;
    vector<int>v2;
    queue<int>ans1;
    queue<int>ans2;

    getpath(root,n1,v1,ans1);
    getpath(root,n2,v2,ans2);

    int k;
    while(!ans1.empty() && !ans2.empty())
    {
        if(ans1.front()==ans2.front())
        {
            k=ans1.front();
            ans1.pop();
            ans2.pop();
        }
        else
        {
            break;
        }
    }
    return k;





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

    cout<<lca(root,7,6);



    return 0;
}
