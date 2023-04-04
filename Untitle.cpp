#include<bits/stdc++.h>
using namespace std;

class stackk
{
    int *arr;
    int ptr;

    public:
    stackk()
    {
        arr=new int[100];
        ptr=-1;
    }

    void push(int x)
    {
        if(ptr==99)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        ptr++;
        arr[ptr]=x;
    }

    void pop()
    {
        if(ptr==-1)
        {
            cout<<"NO ELEMENT TO POP"<<endl;
            return;
        }
        ptr--;
    }

    int top()
    {
        if(ptr==-1)
        {
            cout<<"NO ELEMENT AT TOP"<<endl;
            return -1;
        }
        return arr[ptr];
    }

    bool emptty()
    {
        return ptr==-1;
    }

};

int main()
{
    stackk s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);


    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.top()<<endl;



return 0;
}
