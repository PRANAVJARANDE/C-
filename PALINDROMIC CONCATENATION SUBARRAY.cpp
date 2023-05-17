#include<bits/stdc++.h>
using namespace std;


bool checkpali(int arr[],int s,int e)
{
    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}




bool palisubarray(int arr[],int n,int k)
{
    for(int i=0;i<n-k;i++)
    {
        if(checkpali(arr,i,i+k-1))
        {
            return 1;
        }
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


    if(palisubarray(arr,n,k))
    {
        cout<<"EXISTS"<<endl;
    }
    else
    {
        cout<<"DNE"<<endl;
    }

    return 0;
}
