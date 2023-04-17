#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=8;
int k=3;
int arr[]={1,3,-1,-3,5,3,6,7};
vector<int> ans;

deque<int> d1;

for(int i=0;i<k;i++)
{
    while(!d1.empty() && arr[i]>arr[d1.back()])
    {
        d1.pop_back();
    }
    d1.push_back(i);
}

ans.push_back(arr[d1.front()]);

for(int i=k;i<n;i++)
{
    if(d1.front()==i-k)
    {
        d1.pop_front();
    }

    while(!d1.empty() && arr[i]>arr[d1.back()])
    {
        d1.pop_back();
    }
    d1.push_back(i);

    ans.push_back(arr[d1.front()]);
}






for(int x: ans)
{
    cout<<x<<" ";
}

return 0;
}
