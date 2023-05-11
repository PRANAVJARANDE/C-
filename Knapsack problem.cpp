#include<bits/stdc++.h>
using namespace std;

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


    for(int i=0;i<n;i++)
    {
        v1[i].first/=v1[i].second;
    }

    sort(v1.begin(),v1.end());

    int vmax=0;
    int w=0;
    for(int i=n-1;i>=0;i--)
    {

        if(w+v1[i].second<knap)
        {
            vmax+=v1[i].second*v1[i].first;
            w=w+v1[i].second;
            continue;
        }

        int rw=knap-w;
        vmax+=(v1[i].first*rw);
        break;
    }


    cout<<vmax<<endl;

    return 0;
}
