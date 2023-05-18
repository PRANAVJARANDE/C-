int binarysearch(int vector<int>arr,int k)
{
    int l=0;
    int r=arr.size();
    int mid;
    
    while(l<=r)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        
        if(arr[mid]>arr[l])
        {
            if(k<arr[mid] && k>=arr[l])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {
            if(k<=arr[r] && k>arr[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }
}
