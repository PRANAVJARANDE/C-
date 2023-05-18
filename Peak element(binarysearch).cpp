int peakelement(int arr[],int n,int l,int r)
{
    if(mid==0 || mid==n-1 || (arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]))
    {
        return mid;
    }
    else if(arr[mid-1]>arr[mid])
    {
        return peakelement(arr,n,l,mid-1);
    }
    else
    {
        return peakelement(arr,n,mid+1,r);
    }
}
