#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }

};

class cq
{
public:
    node *f;
    node *b;
    cq()
    {
        f=NULL;
        b=NULL;
    }

    void pushh(int x)
    {
        node *n=new node(x);
        if(f==NULL && b==NULL)
        {
            f=n;
            b=n;
            return;
        }
        b->next=n;
        b=n;
        b->next=f;
    }

    void popp()
    {
        if(f==NULL && b==NULL)
        {
            cout<<"NO ELEMENT IN QUEUE"<<endl;
            return;
        }
        if(f==b)
        {
            f=NULL;
            b=NULL;
            return;
        }
        node *todel=f;
        f=f->next;
        b->next=f;
        delete todel;
    }

    void frontt()
    {
        if(f==NULL)
        {
            cout<<"NO ELEMENT IN QUEUE"<<endl;
            return;
        }

        cout<<f->data<<endl;
    }

    void backk()
    {
        if(b==NULL)
        {
            cout<<"NO ELEMENT IN QUEUE"<<endl;
            return;
        }
        cout<<b->data<<endl;
    }

};


int main()
{

cq q1;
q1.pushh(1);
q1.pushh(2);
q1.pushh(3);
q1.popp();
q1.popp();
q1.popp();
q1.frontt();
q1.backk();

q1.pushh(1);
q1.pushh(2);
q1.pushh(3);
q1.frontt();


return 0;
}
