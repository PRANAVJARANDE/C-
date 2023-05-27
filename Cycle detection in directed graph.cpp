#include<bits/stdc++.h>
using namespace std;

bool cdetection(int k ,vector<int> v1[],vector<bool> &vis)
{
    vector<int> ts=v1[k];
    vis[k]=1;
    for(int i=0;i<ts.size();i++)
    {
        if(vis[ts[i]]==1)
        {
            return 1;
        }
        bool b=cdetection(ts[i],v1,vis);
        if(b==1)
        {
            return 1;
        }
    }
    vis[k]=0;
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
    }

    vector<bool> vis(n+1,0);

    if(cdetection(1,v1,vis))
    {
        cout<<"CYCLE PRESENT";
    }
    else
    {
        cout<<"CYCLE ABSENT";
    }
    return 0;
}
