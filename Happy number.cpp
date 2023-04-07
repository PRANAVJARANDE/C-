class Solution
{
public:
    bool isHappy(int n)
    {
        int s=0;
        while(s!=89)
        {
            if(s==1)
            {
                return 1;
            }
            s=0;
            int rem;
            while(n!=0)
            {
                rem=n%10;
                s=s+(rem*rem);
                n/=10;
            }
            n=s;
        }
        return 0;
    }
};
