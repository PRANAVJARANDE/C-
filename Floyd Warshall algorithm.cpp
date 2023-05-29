#include<bits/stdc++.h>
using namespace std;

void floydwarshall(vector<vector<int>> &graph)
{
    int n=graph.size();
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(graph[i][k]+graph[k][j]<graph[i][j])
                {
                    graph[i][j]=graph[i][k]+graph[k][j] ;
                }
            }
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

    vector<vector<int>> v1(n,vector<int>(n,9999));
    for(int i=0;i<m;i++)
    {
        int w;cout<<"ENTER WEIGHT THEN EDGES-";cin>>w;
        int a,b;
        cin>>a>>b;
        v1[a][b]=w;
    }
    for(int i=0;i<n;i++)
    {
        v1[i][i]=0;
    }




    floydwarshall(v1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
