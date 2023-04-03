#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int m;
cout<<"ENTER ORDER OF MATRIX-";
cin>>n>>m;

cout<<"ENTER MATRIX"<<endl;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}

cout<<"TRANSPOSE OF MATRIX"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(i>j)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



return 0;
}
