int countt(node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int s=1+countt(root->left)+countt(root->right);
    return s;
}
