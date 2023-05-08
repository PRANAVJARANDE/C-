int summ(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int s=root->data+summ(root->left)+summ(root->right);
    return s;
}
