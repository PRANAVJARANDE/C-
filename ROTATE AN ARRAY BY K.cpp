#include<bits/stdc++.h>
using namespace std;

int main()
{
cout<<"ENTER SIZE OF ARRAY-";
int n;
cin>>n;
int arr[n];
cout<<"ENTER ARRAY-";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

cout<<"ENTER A NUMBER-";
int k;
cin>>k;

int temp[k];
for(int i=0;i<k;i++)
{
    temp[i]=arr[n-k+i];
}

for(int i=n-1;i>=k;i--)
{
    arr[i]=arr[i-k];
}

for(int i=0;i<k;i++)
{
    arr[i]=temp[i];
}

cout<<"ROTATED ARRAY-"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}

