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


stack<int> s1;
int wa=0;

for(int i=0;i<arr.size();i++)
{
        while(!s1.empty() && arr[i]>arr[s1.top()])
        {
            int k=s1.top();
            s1.pop();
            if(s1.empty())
            {
                break;
            }
            wa=wa+(arr[s1.top()]-arr[k])*(i-k);
        }
        s1.push(i);
}

cout<<wa<<endl;


return 0;
}
