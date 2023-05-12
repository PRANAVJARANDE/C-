#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> arr;
int n;cin>>n;
for(int i=0;i<n;i++)
{
    int t;cin>>t;
    arr.push_back(t);
}

//minimum
int k1=0,k2=0;
for(int i=0;i<n/2;i++)
{
    k1=k1+arr[i];
}
for(int i=n/2;i<n;i++)
{
    k2=k2+arr[i];
}

int a1=k2-k1,a2=0;

for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        a2=a2-arr[i];
    }
    else
    {
        a2=a2+arr[i];
    }
}

cout<<a1<<endl<<a2<<endl;



return 0;
}
