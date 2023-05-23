node* makebstt(queue<int> &q1,node * ma,node * mi)
{
    if(q1.empty())
    {
        return NULL;
    }
    if(ma!=NULL && q1.front() > ma->data)
    {
        return NULL;
    }
    if(mi!=NULL && q1.front() < mi->data)
    {
        return NULL;
    }

    node *root=new node(q1.front());
    q1.pop();

    root->left=makebstt(q1,root,mi);
    root->right=makebstt(q1,ma,root);

    return root;
}
