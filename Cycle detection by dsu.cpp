#include<bits/stdc++.h>
using namespace std;

class dsu
{
public:
    int *parent;
    int *sz;
    int k;

    dsu(int x)
    {
        k=x;
        parent=new int[k];
        sz=new int[k];
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
            return;
        }

        if(sz[a]>sz[b])
        {
            parent[b]=a;
            sz[a]=sz[a]+sz[b];
        }
        else
        {
            parent[a]=b;
            sz[b]=sz[b]+sz[a];
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

    dsu* d1=new dsu(n);


    vector<int> v1[n+1];
    int flag=0;
    cout<<"ENTER NO. WHICH HAVE EDGES BETWEEN-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        int x=d1->find_set(a);
        int y=d1->find_set(b);
        if(x==y)
        {
            flag=1;
        }
        d1->union_set(a,b);
    }

    if(flag==1)
    {
        cout<<"CYCLE EXISTS"<<endl;
    }
    else
    {
        cout<<"CYCLE DNE"<<endl;
    }

    return 0;
}
