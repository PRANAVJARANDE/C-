#include<bits/stdc++.h>
using namespace std;

string infixtopostfix(string str)
{
    string ans="";
    stack<char> s1;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            ans=ans+str[i];
        }
        else
        {
            if(str[i]==')')
            {
                while(s1.top()!='(')
                {
                 char ch=s1.top();
                 ans=ans+ch;
                 s1.pop();
                }
                s1.pop();
            }
            else
            {
              s1.push(str[i]);
            }
        }
    }
    return ans;
}






int main()
{
string str;
cout<<"ENTER INFIX EXPRESSION"<<endl;
cin>>str;
cout<<"POSTFIX IS-"<<endl;
cout<<infixtopostfix(str);
return 0;
}
