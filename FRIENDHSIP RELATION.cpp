#include<bits/stdc++.h>
using namespace std;

void getconnections(int k,vector<int> v1[],vector<bool> &vis,int &a)
{
    vis[k]=1;
    vector<int> ts=v1[k];
    for(int i=0;i<ts.size();i++)
    {
        if(vis[ts[i]]==0)
        {
            vis[ts[i]]=1;
            a++;
            getconnections(ts[i],v1,vis,a);
        }
    }
}

int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF FRIENDS-";
    cin>>n;
    cout<<"ENTER NO. OF CONNECTIONS OF TWO-";
    cin>>m;

    vector<int> v1[n+1];
    cout<<"ENTER FRIENDSHIP RELATION-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    vector<bool> vis(n+1,0);

    vector<int> ans;

    for(int i=1;i<vis.size();i++)
    {
        if(vis[i]==0)
        {
            int a=1;
            getconnections(i,v1,vis,a);
            ans.push_back(a);
        }
    }

    int w=0;
    for(int i=0;i<ans.size()-1;i++)
    {
        for(int j=i+1;j<ans.size();j++)
        {
            w=w+(ans[i]*ans[j]);
        }
    }
    cout<<"NO OF WAYS IN WHICH A GROUP CAN BE FORMED- "<<w<<endl;
    return 0;
}
