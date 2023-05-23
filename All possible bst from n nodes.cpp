vector<node*> construct(int s,int e)
{

    vector<node*> trees;
    if(s>e)
    {
        trees.push_back(NULL);
        return trees;
    }
    
    for(int i=s,i<=e;i++)
    {
        vector<node*> lst=construct(s,i-1);
        vector<node*> rst=construct(i+1,e);
        
        for(int j=0;j<lst.size();j++)
        {
            node* l=lst[j];
            for(int k=0;k<rst.size();k++)
            {
                node* r=rst[k];
                node *n=new node(i);
                node->left=l;
                node->right=r;
                trees.push_back(node);
            }
        }
    }
    
    return trees;
}
