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

    sort(v1.begin(),v1.end());

    int a=1;
    int e=v1[0].second;

    for(int i=1;i<n;i++)
    {
        if(e>v1[i].second)
        {
            e=v1[i].second;
            continue;
        }


        if(v1[i].first>=e)
        {
            a++;
            e=v1[i].second;
        }

    }


    cout<<a;


    return 0;
}
