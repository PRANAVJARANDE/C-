#include<bits/stdc++.h>
using namespace std;

void dfs(int k,vector<bool> &vis,vector<int> v1[])
{
    //preorder
    cout<<k<<" ";
    vis[k]=1;

    //postorder
    vector<int> ts=v1[k];
    for(int j=0;j<ts.size();j++)
    {
        if(vis[ts[j]]==0)
        {
            vis[ts[j]]=1;
            dfs(ts[j],vis,v1);
        }
    }
}


int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector<int> v1[n+1];
    cout<<"ENTER NO. WHICH HAVE EDGES BETWEEN-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    vector<bool> vis(n+1,0);

    dfs(1,vis,v1);


    return 0;
}
