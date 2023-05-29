#include<bits/stdc++.h>
using namespace std;

vector<int> bellmanroutes(vector<vector<int>>graph)
{
    int n=graph.size();
    vector<int> dist(n,INT_MAX);
    dist[0]=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(graph[i][j]!=0)
            {
                dist[j]=min(dist[j],dist[i]+graph[i][j]);
            }
        }
    }
    return dist;
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
    }

    vector<int> v2=bellmanroutes(v1);
    for(int x : v2)
    {
        cout<<x<<" ";
    }
    return 0;
}
