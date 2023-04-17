class st
{
public:
    queue<int> v1;
    queue<int> v2;
    
    
    
    void pushh(int x)
    {
        
        v2.push(x);
        while(!v1.empty())
        {
            v2.push(v1.front());
            v1.pop();
        }
        
        queue<int > temp=v1;
        v1=v2;
        v2=temp;
    }
    
    void popp()
    {
        q1.pop();
    }
    
    int topp()
    {
        return q1.front();
    }
    
    
};
