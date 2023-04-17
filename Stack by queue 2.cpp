class st
{
public:
    queue<int> v1;
    queue<int> v2;
    
    
    
    void pushh(int x)
    {
        v1.push(x);
    }
    
    void popp()
    {
        if(v1.size()==0)
        {
            cout<<"NO ELEMENT TO POP"<<endl;
            return;
        }
        
        while(v1.size()>=1)
        {
            v2.push(v1.front());
            v1.pop();
        }
        v1.pop();
        v1.swap(v2);
    }
    
    int topp()
    {
        return q1.back();
    }
    
    
};
