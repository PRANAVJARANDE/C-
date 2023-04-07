#include<bits/stdc++.h>
using namespace std;

string reversee(string str)
{
    string ans="";
    stack<char> s1;

    for(int i=0;i<str.length();i++)
    {
        s1.push(str[i]);
    }

    while(!s1.empty())
    {
        ans=ans+s1.top();
        s1.pop();
    }
    return ans;

}

int main()
{
string str;
cin>>str;

cout<<reversee(str);

return 0;
}
