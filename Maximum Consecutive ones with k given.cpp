#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=7;
int arr[]={100,80,60,70,60,75,85};

int l=0,zc=0,ans=0;
for(int r=0;r<n;r++)
{
    if(arr[r]==0)
    {
        zc++;
    }
    
    while(zc>k)
    {
        if(arr[l]==0)
        {
            zc--;
        }
        l++;
    }
    
    
    ans=max(ans,r-l+1);
}

cout<<ans;
return 0;
}
