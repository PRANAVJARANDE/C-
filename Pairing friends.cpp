#include<bits/stdc++.h>
using namespace std;
int pairs(int n)
{
    if(n==2)
    {
        return 2;
    }
    if(n==1)
    {
        return 1;
    }

    int k=pairs(n-1)+pairs(n-2)*(n-1);
    return k;

}


int main()
{

    int k;
    cin>>k;
    cout<<pairs(k);



    return 0;
}
