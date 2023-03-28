#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY 1-";
    cin>>n;

    int arr1[n];
    cout<<"ENTER ARRAY-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    int m;
    cout<<"ENTER SIZE OF ARRAY 2-";
    cin>>m;
    int arr2[m];
    cout<<"ENTER ARRAY-"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }


    int universal[m+n];
    for(int i=0;i<n;i++)
    {
        universal[i]=arr1[i];
    }
    for(int i=n;i<m+n;i++)
    {
        universal[i]=arr2[i-n];
    }

    for(int i=0;i<m+n-1;i++)
    {
        for(int j=i+1;j<m+n;j++)
        {
            if(universal[i]>universal[j])
            {
                swap(universal[i],universal[j]);
            }
        }
    }

    vector<int> v1;
    for(int i=0;i<m+n-1;i++)
    {
        if(universal[i]!=universal[i+1])
        {
            v1.push_back(universal[i]);
        }
    }
    v1.push_back(universal[m+n-1]);

    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                v2.push_back(arr1[i]);
                arr2[j]=INT_MIN;
                break;
            }
        }
    }

    cout<<"UNION IS-"<<endl;
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;



    cout<<"INTERSECTION IS-"<<endl;
    for(int x:v2)
    {
        cout<<x<<" ";
    }

    return 0;
}
