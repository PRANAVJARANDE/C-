#include<bits/stdc++.h>
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



class qu
{
    public:
    node *f;
    node *b;

    qu()
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
        b=b->next;
    }

    void popp()
    {
        if(f==NULL)
        {
            cout<<"NO ELEMENT TO POP"<<endl;
            return;
        }
        if(f==b)
        {
            node *todel=f;

            delete todel;

            f=NULL;
            b=NULL;

            return;
        }
        node *todel=f;
        f=f->next;
        delete todel;
    }

    void frontt()
    {
        if(f==NULL)
        {
            cout<<"NO ELEMENT AT FRONT"<<endl;
            return;
        }
        cout<<"ELEMENT AT FRONT-"<<f->data<<endl;
    }


    void display()
    {

    cout<<"QUEUE IS-"<<endl;
    node *temp=f;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

};


int main()
{
qu q1;
q1.pushh(1);
q1.pushh(2);
q1.pushh(3);

q1.display();

q1.popp();
q1.display();
q1.frontt();

q1.popp();
q1.display();

q1.frontt();


q1.display();
q1.popp();
q1.popp();



return 0;
}

