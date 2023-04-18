#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
vector<int> dist(256,-1);
int start=-1,lmax=0;

for(int i=0;i<s.length();i++)
{
    if(dist[s[i]]!=-1)
    {
        start=dist[s[i]];
    }

    dist[s[i]]=i;
    lmax=max(lmax,i-start);
}

cout<<lmax<<endl;
return 0;
}
