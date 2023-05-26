#include<bits/stdc++.h>
using namespace std;

void bfs(int k,vector<bool> &vis,vector<int> v1[])
{
    queue<int> q1;
    q1.push(k);
    while(!q1.empty())
    {
        int k=q1.front();
        vector<int> ts=v1[k];

        cout<<q1.front()<<" ";
        q1.pop();

            vis[k]=1;
            for(int i=0;i<ts.size();i++)
            {
                if(vis[ts[i]]==0)
                {
                    vis[ts[i]]=1;
                    q1.push(ts[i]);
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

    bfs(1,vis,v1);


    return 0;
}
