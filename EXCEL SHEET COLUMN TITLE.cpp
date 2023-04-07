class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        int ans=0;
        long long k=1;
        for(int i=columnTitle.length()-1;i>=0;i--)
        {
            int w=columnTitle[i]-'A'+1;
            ans=ans+(k*w);
            k=k*26;
        }
        return ans;
    }
};
