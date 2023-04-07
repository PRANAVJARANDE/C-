class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int n=nums.size();
        int k=n+1;
        int arr[k];
        for(int j=0;j<k;j++)
        {
            arr[j]=1;
        }

        for(int i=0;i<n;i++)
        {
            arr[nums[i]]--;
        }

        for(int i=0;i<=n;i++)
        {
            if(arr[i]==1)
            {
                return i;
            }
        }

        return 0;
    }
};
