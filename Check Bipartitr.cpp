#include<bits/stdc++.h>
using namespace std;

//joint bipartite
bool bipartite(int k,vector<int> v1[],vector<char> &mark)
{
    vector<int> ts=v1[k];
    char ch;
    if(mark[k]=='r')
    {
        ch='b';
    }
    else if(mark[k]=='b')
    {
        ch='r';
    }

    for(int i=0;i<ts.size();i++)
    {
        if(mark[ts[i]]!=ch)
        {

        if(mark[ts[i]]!='0')
        {
            return 0;
        }
        mark[ts[i]]=ch;
        bool b=bipartite(ts[i],v1,mark);
        if(b==0)
        {
            return 0;
        }
        }
    }
    return 1;
}



int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF NODES-";
    cin>>n;
    cout<<"ENTER NO. OF EDGES-";
    cin>>m;

    vector<int> v1[n+1];
    cout<<"ENTER NO. WHICH HAVE EDGES BETWEEN-"<<endl;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v1[a].push_back(b);
        v1[b].push_back(a);
    }

    vector<char> mark(n+1,'0');
    mark[1]='r';

    if(bipartite(1,v1,mark))
    {
        cout<<"BIPARTITE"<<endl;
    }
    else
    {
        cout<<"NOT BIPARTITE"<<endl;
    }




    return 0;
}
