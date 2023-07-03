#include<bits/stdc++.h>
using namespace std;

bool isfesible(vector<int> arr,int k,int mid)
{
    int n=arr.size();
    int ele=1;
    int p=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-p>=mid)
        {
            p=arr[i];
            ele++;
            if(ele==k)
            {
                return 1;
            }
        }
    }
    return 0;
}


int largestmindist(vector<int> &arr,int k)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int r=arr[n-1]-arr[0];
    int l=INT_MAX;
    for(int i=1;i<n;i++)
    {
        l=min(l,arr[i]-arr[i-1]);
    }
    int res=-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(isfesible(arr,k,mid))
        {
            res=max(res,mid);
            l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    return res;
}

int main()
{
    int k;cin>>k;
    int t;cin>>t;

    vector<int> v1(t,0);
    for(int i=0;i<t;i++)
    {
        cin>>v1[i];
    }
    cout<<largestmindist(v1,k);

    return 0;
}
