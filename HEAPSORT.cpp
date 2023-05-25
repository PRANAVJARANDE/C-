#include<bits/stdc++.h>
using namespace std;

//n=size of vector
void heapify(vector<int> &arr,int n,int i)
{
    int mxid=i;
    int lc=2*i+1;
    int rc=2*i+2;

    if(lc<n && arr[lc] > arr[mxid])
    {
        mxid=lc;
    }
    if(rc<n && arr[rc] > arr[mxid])
    {
        mxid=rc;
    }

    if(mxid!=i)
    {
        swap(arr[i],arr[mxid]);
        heapify(arr,n,mxid);
    }
}



vector<int> heapsort(vector<int> &v1)
{
    int n=v1.size();
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(v1,n,i);
    }

    for(int i=n-1;i>=0;i++)
    {
        swap(v1[0],v1[i]);
        heapify(v1,i,0);
    }

    return v1;
}





int main()
{
   vector<int> v1,v2;
   int n;cin>>n;
   for(int i=0;i<n;i++)
   {
       int t;cin>>t;
       v1.push_back(t);
   }


   v2=heapsort(v1);

   for(int i=0;i<v2.size();i++)
   {
       cout<<v2[i]<<" ";
   }


    return 0;
}
