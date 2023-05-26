#include<bits/stdc++.h>
using namespace std;

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

    for(int i=1;i<n;i++)
    {
        cout<<"ADJACENCY MATRIX OF- "<<i<<" -";
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
