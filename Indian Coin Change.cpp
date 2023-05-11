#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1={1,2,5,10,20,50,100,200,500,1000};
    sort(v1.begin(),v1.end(),greater<int>());
    int k;
    cin>>k;


    vector<int>ans;

    int i=0;
    while(i<v1.size())
    {
        if(k==0)
        {
            break;
        }
        if(v1[i]>k)
        {
            i++;
        }
        else
        {
            k=k-v1[i];
            ans.push_back(v1[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
