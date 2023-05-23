vector<int> zigzag(node *root)
{
    queue<node*>q1;
    stack<int>s1;
    vector<int> v1;
    q1.push(root);
    q1.push(NULL);

    bool b=1;

    while(!q1.empty())
    {
        node *k=q1.front();
        q1.pop();

        if(k!=NULL)
        {

            if(b==0)
            {
                s1.push(k->data);
            }
            else
            {
                v1.push_back(k->data);
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
        else if(!q1.empty())
        {
            if(b==0)
            {
                while(!s1.empty())
                {
                    v1.push_back(s1.top());
                    s1.pop();
                }
                b=1;
            }
            else
            {
                b=0;
            }


            q1.push(NULL);
        }
    }
    return v1;
}
