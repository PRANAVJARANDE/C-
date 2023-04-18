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

int amax=0;
for(int i=0;i<n;i++)
{
    int a=arr[i];
    amax=max(amax,a);
    int hmin=arr[i];
    for(int j=i+1;j<n;j++)
    {
        hmin=min(hmin,arr[j]);
        amax=max(amax,hmin*(j-i+1));
    }
}

cout<<amax<<endl;




return 0;
}
