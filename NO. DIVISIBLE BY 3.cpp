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
    int k;
    cin>>k;


    int s=0;
    for(int i=0;i<k;i++)
    {
        s=s+arr[i];
    }
    if(s%3==0)
    {
        cout<<"ARRAY EXISTS"<<endl;
        return 0;
    }

    for(int i=k+1;i<n;i++)
    {
        s=s+arr[i]-arr[i-k];
        if(s%3==0)
        {
            cout<<"ARRAY EXISTS"<<endl;
            return 0;
        }
    }

    cout<<"DNE"<<endl;





    return 0;
}
