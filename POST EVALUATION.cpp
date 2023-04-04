#include<bits/stdc++.h>
using namespace std;

int postevaluation(string str)
{
    stack<int> s1;
    int l=str.size();
    for(int i=0;i<l;i++)
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

            case '-': s1.push(c-b);
                    break;

            case '*': s1.push(b*c);
                    break;

            case '/': s1.push(c/b);
                    break;
        }
        }
    }
    return s1.top();
}

int main()
{
string str;
cout<<"ENTER POSTFIX EXPRESSION"<<endl;
cin>>str;
cout<<"ANSWER IS-"<<endl;
cout<<postevaluation(str);
return 0;
}
