#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        int x;
        cout<<"ENTER VALUE TO INSERT- ";
        cin>>x;
        data=x;
        next=NULL;
    }
};

void inserttattail(node * &head)
{
    node*temp=head;
    node *n=new node();
    if(head==NULL)
    {
        head=n;
        return;
    }


    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}


void inserttatpos(node * &head,int p)
{
    node *n=new node();
    if(p==0)
    {
        n->next=head;
        head=n;
        return;
    }

    int k=1;
    node*temp=head;

    while(k<p)
    {
        temp=temp->next;
        k++;
    }

    if(temp->next==NULL)
    {
        temp->next=n;
        return;
    }

    n->next=temp->next;
    temp->next=n;
}


void display(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
node *head=NULL;

int n;
cout<<"ENTER NUMBER OF ELEMENTS TO BE INSERTED -";
cin>>n;

for(int i=0;i<n;i++)
{
    inserttattail(head);
}


cout<<"LINKED LIST BEFORE INSERTING AT POSOITION-"<<endl;
display(head);

cout<<endl;

int p;
cout<<"ENTER POSITION- ";
cin>>p;
inserttatpos(head,p);

cout<<"LINKED LIST IS-"<<endl;
display(head);

return 0;
}
