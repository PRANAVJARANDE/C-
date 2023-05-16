#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k,x;
    cin>>k>>x;


    int s=0,msum=0;
    for(int i=0;i<k;i++)
    {
        s=s+arr[i];
    }

    if(s<x)
    {
        msum=s;
    }

    int p1=0,p2=k-1;

    for(int j=p2+1;j<n;j++)
    {
        s=s+arr[j]-arr[j-k];
        if(s<x)
        {
            msum=max(msum,s);
        }
    }

    cout<<msum;

    return 0;
}
