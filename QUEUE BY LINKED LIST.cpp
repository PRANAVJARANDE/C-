#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    
    
    node(int x)
    {
        data=x;
        next=NULL;
    }
};


class que 
{
    node *front;
    node *back;
    
    public:
    que()
    {
        front=NULL;
        back=NULL;
    }
    
    
    void enq(int x)
    {
        node *n=new node(x);
        if(front==NULL && back==NULL)
        {
            back=n;
            front=n;
            return;
        }
        
        back->next=n;
        back=n;
    }
    
    void dqe()
    {
        if(front==NULL)
        {
            cout<<"QUEUE OVERFLOW"<<endl;
            return;
        }
        
        node *todel=front;
        front=front->next;
        delete todel;
        
    }
    
    int pek()
    {
        if(front==NULL)
        {
            cout<<"NO ELEMENT PRESENT"<<endl;
            return -1;
        }
        return front->data;
    }
    
    bool empp()
    {
        if(front==NULL)
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
    
    cout<<q1.pek()<<endl;
    
    

    return 0;
}
