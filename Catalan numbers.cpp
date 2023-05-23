int cata(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }

    int f=0;
    for(int i=0;i<n;i++)
    {
        f=f+(cata(i)*cata(n-i-1));
    }
    return f;
}
