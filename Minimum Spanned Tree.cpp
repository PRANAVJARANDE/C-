#include<bits/stdc++.h>
using namespace std;

class dsu
{
public:
    int k;
    int *parent;
    int *sz;

    dsu(int x)
    {
        k=x;
        parent=new int[k+1];
        sz=new int[k+1];
        for(int i=0;i<=k;i++)
        {
            parent[i]=i;
            sz[i]=1;
        }
    }

    int find_set(int x)
    {
        if(x==parent[x])
        {
            return x;
        }
        parent[x]=find_set(parent[x]);
        return parent[x];
    }

    void union_set(int a,int b)
    {
        a=find_set(a);
        b=find_set(b);
        if(a==b)
        {
            return ;
        }
        if(sz[a]>sz[b])
        {
            parent[b]=a;
            sz[a]=sz[a]+sz[b];
        }
        else
        {
            parent[a]=b;
            sz[b]=sz[a]+sz[b];
        }
    }
};



int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector< pair<int, vector<int> >> v1;
    for(int i=0;i<m;i++)
    {
        int w;cout<<"ENTER WEIGHT THEN EDGES-";cin>>w;
        int a,b;
        cin>>a>>b;
        vector<int> tm;
        tm.push_back(a);
        tm.push_back(b);
        v1.push_back(make_pair(w,tm));
    }

    sort(v1.begin(),v1.end());

    dsu *d1=new dsu(n);

    int cost=0;
    for(auto x: v1)
    {
        int w=x.first;
        vector<int> gh=x.second;

        int a1=d1->find_set(gh[0]);
        int a2=d1->find_set(gh[1]);

        if(a1==a2)
        {
            //cycle found
            continue;
        }
        else
        {
            //CYCLE NOT FOUND
            d1->union_set(gh[0],gh[1]);
            cost=cost+w;

        }
    }

    cout<<cost<<endl;
    return 0;
}
