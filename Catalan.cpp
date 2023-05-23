int bino(int n,int r)
{
    if(r>n-r)
    {
        r=n-r;
    }
    for(int i=1;i<=r;i++)
    {
        res=res*(n-i+1);
        res=res/i;
    }
    return res;
}

int cata(int n)
{
   int c=bino(2*n,n);
   return c/(n+1);
}
