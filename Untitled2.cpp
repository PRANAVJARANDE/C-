#include<bits/stdc++.h>
using namespace std;

class st
{
public:
    int ptr;
    int *arr;

    st()
    {
        ptr=-1;
        arr=new int[100];
    }

    void pushh(int x)
    {
        if(ptr==99)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        ptr++;
        arr[ptr]=x;
    }

    void popp()
    {
        if(ptr==-1)
        {
            cout<<"NO ELEMENT TO POP";
            return;
        }
        ptr--;
    }

    int topp()
    {
        if(ptr==-1)
        {
            cout<<"NO ELEMENT AT TOP";
            return -11;
        }
        return arr[ptr];

    }

    void display()
    {
        if(ptr==-1)
        {
            cout<<"NO ELEMENT";
            return;
        }
        for(int i=ptr;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
};








int main()
{
    st s1;
    s1.pushh(1);
    s1.pushh(2);
    s1.pushh(3);
    s1.pushh(4);
    s1.pushh(5);

    s1.display();


    s1.popp();

    s1.display();


cout<<"ELEMENT AT TOP- "<<s1.topp();




return 0;
}
