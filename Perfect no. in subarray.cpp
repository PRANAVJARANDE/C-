#include<bits/stdc++.h>
using namespace std;

bool checkperfect(int n)
{
    if(n==1)
    {
        return 1;
    }
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        return 1;
    }
    return 0;
}







int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;

    int ans=0,amax;
    for(int i=0;i<k;i++)
    {
        if(checkperfect(arr[i]))
        {
            ans++;
        }
    }
    amax=ans;


    for(int i=k;i<n;i++)
    {
        if(!checkperfect(arr[i]) && checkperfect(arr[i-k]))
        {
            ans--;
        }
        else if(checkperfect(arr[i]) && !checkperfect(arr[i-k]))
        {
            ans++;
        }
        amax=max(amax,ans);
    }

    cout<<amax<<endl;

    return 0;
}
