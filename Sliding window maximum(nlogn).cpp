#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=8;
int k=3;
int arr[]={1,3,-1,-3,5,3,6,7};
vector<int> ans;
multiset<int,greater<int>> s1;

for(int i=0;i<k;i++)
{
    s1.insert(arr[i]);
}
ans.push_back(*s1.begin());

for(int i=k;i<n;i++)
{
    s1.erase(s1.lower_bound(arr[i-k]));
    s1.insert(arr[i]);
    ans.push_back(*s1.begin());
}

for(int x: ans)
{
    cout<<x<<" ";
}

return 0;
}
