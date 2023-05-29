#include<bits/stdc++.h>
using namespace std;



vector<int> djkstr(vector<vector<int>> graph)
{
    int n=graph.size();
    //vector<int> vis(n,0);
    vector<int> dist(n,INT_MAX);
    priority_queue< pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> q1;
    q1.push(make_pair(0,0));
    dist[0]=0;

    while(!q1.empty())
    {
        int nin=q1.top().second;
        q1.pop();

        for(int i=0;i<n;i++)
        {
            if(graph[nin][i]!=0)
            {
                if(dist[i]>graph[nin][i]+dist[nin])
                {
                    dist[i]=graph[nin][i]+dist[nin];
                    q1.push(make_pair(graph[nin][i],i));
                }
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
        v1[b][a]=w;
    }

    vector<int> ans=djkstr(v1);
    for(int x: ans)
    {
        cout<<x<<" ";
    }





    return 0;
}

