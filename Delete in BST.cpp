node * inordersucc(node *root)
{
    node *c=root;
    while(c!=NULL && c->left!=NULL)
    {
        c=c->left;
    }
    return c;
}


node* deleteinbst(node* &root,int k)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data==k)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        else if(root->left==NULL)
        {
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            node *tem=root->left;
            delete root;
            return tem;
        }

        node *temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteinbst(root->right,temp->data);
        return root;
    }
    else if(root->data < k)
    {
        root->right=deleteinbst(root->right,k);
    }
    else
    {
        root->left=deleteinbst(root->left,k);
    }

    return root;
}
