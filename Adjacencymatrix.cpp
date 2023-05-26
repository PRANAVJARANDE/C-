#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector<vector<int>> v1(n,vector<int>(n,0));

    cout<<"ENTER NO. WHICH HAVE EDGES BETWEEN";
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a-1][b-1]=1;
        v1[b-1][a-1]=1;
    }

    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
