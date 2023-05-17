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
    int x;
    cin>>x;

    int ans=0,s=0,amin=INT_MAX;

    int i=0;
    while(i<n)
    {
        if(s<x)
        {
            s=s+arr[i];
            ans++;
            i++;
        }
        else
        {
            amin=min(amin,ans);
            s=s-arr[i-ans];
            if(s>=x)
            {
                ans--;
            }
            else
            {
                s=s+arr[i];
                i++;
            }
            amin=min(amin,ans);
        }
    }

    if(amin==INT_MAX)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<amin<<endl;

    return 0;
}
