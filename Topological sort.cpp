#include<bits/stdc++.h>
using namespace std;

void topo(vector<int> v1[],vector<int> &indeg)
{
    for(int i=1;i<indeg.size();i++)
    {
        queue<int> q1;
        if(indeg[i]==0)
        {
            q1.push(i);
        }

        while(!q1.empty())
        {
            int k=q1.front();
            q1.pop();
            cout<<k<<" ";

            vector<int> tm=v1[k];
            for(int j=0;j<tm.size();j++)
            {
                indeg[tm[j]]--;
                if(indeg[tm[j]]==0)
                {
                    q1.push(tm[j]);
                }
            }
        }
    }
}


int main()
{
    int n,m;
    cout<<"ENTER NO. OF NODES-"<<endl;
    cin>>n;
    cout<<"ENTER NO. OF EDGES-"<<endl;
    cin>>m;

    vector<int> v1[n+1];
    vector<int> indeg(n+1,0);
    cout<<"ENTER EDGES FROM WHERE TO WHERE-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        indeg[b]++;
    }

    topo(v1,indeg);

    return 0;
}
