#include<bits/stdc++.h>
using namespace std;

//by dfs
bool cycledetection(int k,vector<int> v1[],vector<bool> &vis,int par)
{
    vis[k]=1;
    vector<int> ts=v1[k];
    for(int i=0;i<ts.size();i++)
    {
        if(vis[ts[i]]==0)
        {
            bool b=cycledetection(ts[i],v1,vis,k);
            if(b==1)
            {
                return 1;
            }
        }
        else if(ts[i]!=par)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int n,m;
    cout<<"ENTER NO. OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector<int>v1[n+1];
    cout<<"ENTER WHERE TO WHERE-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }
    vector<bool> vis(n+1,0);

    if(cycledetection(1,v1,vis,-1))
    {
        cout<<"CYCLE PRESENT";
    }
    else
    {
        cout<<"CYCLE ABSENT";
    }




    return 0;
}
