#include<bits/stdc++.h>
using namespace std;

class que
{
    stack<int> s1;
public:

    void pushh(int x)
    {
        s1.push(x);
    }

    void popp()
    {
        if(s1.empty())
        {
            cout<<"NO ELEMENYT IN QUEUE"<<endl;
            return;
        }

        int x=s1.top();
        s1.pop();
        if(s1.empty())
        {
            return;
        }
        popp();
        s1.push(x);
    }

    int pek()
    {
        if(s1.empty())
        {
            cout<<"NO ELEMENYT IN QUEUE"<<endl;
            return -111;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty())
        {
            return x;
        }

        int res=pek();
        s1.push(x);
        return res;

    }

    bool empp()
    {

        if(s1.empty())
        {
            return 1;
        }
        return 0;
    }


};

int main()
{
    que q1;
    q1.pushh(1);
    q1.pushh(2);
    q1.pushh(3);

    q1.popp();

    cout<<q1.pek()<<endl;

    q1.popp();
    q1.popp();
    q1.popp();
    cout<<q1.empp()<<endl;

return 0;
}
