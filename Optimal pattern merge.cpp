#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        v1.push_back(temp);
    }

    sort(v1.begin(),v1.end());

    int cost=0;

    for(int i=0;i<n-1;i++)
    {
        int c=v1[i]+v1[i+1];
        cost=cost+c;
        v1[i+1]=c;
    }
    cout<<cost;
    return 0;
}
