node * makebstt(vector<int> v1,int l,int r)
{
    if(l>=r)
    {
        return NULL;
    }
        int mid=(l+r)/2;
        node *root=new node(v1[mid]);
        root->left=makebstt(v1,l,mid);
        root->right=makebstt(v1,mid+1,r);
    return root;
}
