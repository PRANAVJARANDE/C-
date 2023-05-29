#include<bits/stdc++.h>
using namespace std;

int primsmstt(vector<vector<int>> graph)
{
    int n=graph.size();
    int cost=0;
    vector<bool> vis(n,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q1;

    q1.push(make_pair(0,0));
    while(!q1.empty())
    {
        int w=q1.top().first;
        int nin=q1.top().second;
        q1.pop();
        if(vis[nin]==1)
        {
            continue;
        }
        vis[nin]=1;
        cost=cost+w;
        for(int i=0;i<n;i++)
        {
            if(graph[nin][i]!=0)
            {
                q1.push(make_pair(graph[nin][i],i));
            }
        }
    }
    return cost;
}

int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector<vector<int>> v1(n,vector<int>(n,0));
    for(int i=0;i<m;i++)
    {
        int w;cout<<"ENTER WEIGHT THEN EDGES-";cin>>w;
        int a,b;
        cin>>a>>b;
        v1[a][b]=w;
        v1[b][a]=w;
    }

    cout<<primsmstt(v1);



    return 0;
}

