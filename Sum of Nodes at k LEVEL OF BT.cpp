
int sumofnodesatklevel(node *root,int l)
{
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);

    int c=0;
    int sum=0;

    while(!q1.empty())
    {
        node *k=q1.front();
        q1.pop();
        if(k!=NULL)
        {
            if(c==l)
            {
                sum=sum+(k->data);
            }
            if(k->left!=NULL)
            {
                q1.push(k->left);
            }
            if(k->right!=NULL)
            {
                q1.push(k->right);
            }
        }
        else
        {
            if(q1.empty())
            {
                break;
            }
            c++;
            q1.push(NULL);
        }
    }


return sum;


}

