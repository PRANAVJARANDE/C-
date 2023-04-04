#include<bits/stdc++.h>
using namespace std;

int prefixevaluation(string str)
{
    stack<int> s1;
    int l=str.size();
    for(int i=l-1;i>=0;i--)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int a=str[i]-'0';
            s1.push(a);
        }
        else
        {
            int b=s1.top();
            s1.pop();
            int c=s1.top();
            s1.pop();

        switch(str[i])
        {
            case '+': s1.push(b+c);
                    break;

            case '-': s1.push(b-c);
                    break;

            case '*': s1.push(b*c);
                    break;

            case '/': s1.push(b/c);
                    break;
        }
        }
    }
    return s1.top();
}

int main()
{
string str;
cout<<"ENTER PREFIX EXPRESSION"<<endl;
cin>>str;
cout<<"ANSWER IS-"<<endl;
cout<<prefixevaluation(str);
return 0;
}
