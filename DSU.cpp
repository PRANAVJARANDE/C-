class dsu
{
public:
    int *sz;
    int *parent;
    int n;
    
    dsu(int x)
    {
        n=x;
        sz=new int[n];
        parent=new int[n];
        this.makeset(n);
    }
    
    void makeset(int n)
    {
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            sz[i]=1;
        }
    }
    
    int findd(int x)
    {
        if(parent[x]==x)
        {
            return x;
        }
        parent[x]=findd(parent[x]);
        return parent[x];
    }
    
    void union_set(int a,int b)
    {
        a=find_set(a);
        b=find_set(b);
        
        if(a==b)
        {
            return;
        }
        
            if(sz[a]<sz[b])
            {
                parent[a]=b;
                sz[b]=sz[a]+sz[b];
            }
            else
            {
                parent[b]=a;
                sz[a]=sz[a]+sz[b];
            }
    }
};

