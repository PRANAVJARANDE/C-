#include <bits/stdc++.h>
using namespace std;

class que 
{
    public:
    int *arr;
    int f;
    int b;
    
    que()
    {
        arr=new int[100];
        f=-1;
        b=-1;
    }
    
    void enq(int x)
    {
        if(b==99)
        {
            cout<<"QUEUE OVERFLOW"<<endl;
            return;
        }
        
        b++;
        arr[b]=x;
        
        if(f==-1)
        {
            f++;
        }
    }
    
    void dqe()
    {
        if(f>b || f==-1)
        {
            cout<<"NO ELEMENT"<<endl;
            return;
        }
        
        f++;
    }
    
    int pek()
    {
        if(f==-1 || f>b) 
        {
            cout<<"NO ELEMENT PRESENT"<<endl;
            return -100;
        }
        return arr[f];
    }
    
    bool empp()
    {
        if(f>b || f==-1)
        {
            return 1;
        }
        return 0;
    }
    
};

int main()
{
    que q1;
    q1.enq(1);
    q1.enq(2);
    q1.enq(3);
    q1.enq(4);
    q1.enq(5);
    
    cout<<q1.pek()<<endl;
    
    q1.dqe();
    
    

    return 0;
}
