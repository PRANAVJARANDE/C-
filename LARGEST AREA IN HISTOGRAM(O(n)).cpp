#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

vector<int> arr;

for(int i=0;i<n;i++)
{
int t;
cin>>t;
arr.push_back(t);
}

arr.push_back(0);

stack<int> s1;
s1.push(0);

int amax=0;
for(int i=1;i<arr.size();i++)
{
    int j=s1.top();
    if(arr[i]>=arr[j])
    {
        s1.push(i);
    }
    else
    {
        while(!s1.empty() && arr[i]<arr[s1.top()])
        {
            int t=s1.top();
            int area=(i-t)*arr[t];
            amax=max(amax,area);
            s1.pop();
        }
        s1.push(i);
    }


}

cout<<amax<<endl;


return 0;
}
