#include<bits/stdc++.h>
using namespace std;

bool getbit(int i,int p)
{
    return i & (1<<p);
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v1;

    for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        v1.push_back(make_pair(s,e));
    }

    int knap;
    cin>>knap;



    int vmax=0;
    for(int i=0;i<pow(2,n);i++)
    {
        int w=0,v=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(i,j))
            {
                w=w+v1[j].second;
                v=v+v1[j].first;
            }
        }

        if(w<=knap)
        {
            vmax=max(vmax,v);
        }
    }
    cout<<vmax;

    return 0;
}
