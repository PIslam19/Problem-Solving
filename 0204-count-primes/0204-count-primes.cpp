class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        bool prime[n+1];
        memset(prime,0,sizeof(prime));
        for(long long i=2;i*i<=n-1;i++)
        {
            if(prime[i]==0)
            {
                for(long long j=i*i;j<=n-1;j+=i)
                {
                    if(prime[j]==0)
                    {
                        prime[j]=1;
                    }
                }
            }
        }
        for(long long i=2;i<=n-1;i++)
        {
            if(prime[i]==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};