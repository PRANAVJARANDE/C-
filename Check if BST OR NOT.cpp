bool checkkk(node *root,node *ma,node *mi)
{
    if(root==NULL)
    {
        return 1;
    }
    if(ma!=NULL && ma->data <= root->data)
    {
        return 0;
    }
    if(mi!=NULL && mi->data >= root->data)
    {
        return 0;
    }
    bool bl=checkk(root->left,root,mi);
    bool br=checkk(root->right,ma,root);
    return (bl && br);
}
