#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class st
{
    public:
    node* ptr;

    st()
    {
        ptr=NULL;
    }

    void pushh(int x)
    {
        node *n=new node(x);
        if(ptr==NULL)
        {
            ptr=n;
            n->prev=NULL;
            return;
        }
        ptr->next=n;
        n->prev=ptr;
        ptr=ptr->next;
    }

    void popp()
    {
       if(ptr==NULL)
       {
           cout<<"NO ELEMENT TO POP"<<endl;
           return;
       }
       node *todel=ptr;
       ptr=ptr->prev;
       delete todel;
    }

    int topp()
    {
        if(ptr==NULL)
        {
            cout<<"NO ELEMENT TO POP"<<endl;
            return -111;
        }
        return ptr->data;
    }


};


int main()
{
    st s1;
    s1.pushh(1);
    s1.pushh(2);
    s1.pushh(3);
    cout<<s1.topp()<<endl;
    s1.popp();
    s1.popp();
    cout<<s1.topp()<<endl;
    s1.popp();
    cout<<s1.topp()<<endl;
    s1.popp();
    cout<<s1.topp()<<endl;

    return 0;

}
