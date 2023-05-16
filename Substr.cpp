#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,z;
    cin>>a;
    cin>>z;

    for(int i=0;i<z.size()-a.size();i++)
    {
        if(z.substr(i,a.size())==a)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
