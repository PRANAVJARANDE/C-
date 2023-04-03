#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"ENTER SIZE OF ARRAY-";
cin>>n;
vector<int> v1;
cout<<"ENTER ARRAY-";
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    v1.push_back(temp);
}

int h=n/2;

sort(v1.begin(),v1.end());

int k=1;
for(int i=0;i<n-1;i++)
{

    if(v1[i]==v1[i+1])
    {
        k++;
    }
    else
    {
        k=1;
    }
    if(k>h)
    {
        cout<<"ELEMENT IS-"<<v1[i];
        break;
    }
}





return 0;
}
