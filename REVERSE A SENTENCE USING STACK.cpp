#include<bits/stdc++.h>
using namespace std;

int main()
{
stack<string> s1;
string str;
getline(cin,str);

for(int i=0;i<str.size();i++)
{
    string s="";
    while(str[i]!=' ' && i<str.size())
    {
        s=s+str[i];
        i++;
    }
    s1.push(s);
}
while(!s1.empty())
{
    cout<<s1.top()<<" ";
    s1.pop();
}

return 0;
}
