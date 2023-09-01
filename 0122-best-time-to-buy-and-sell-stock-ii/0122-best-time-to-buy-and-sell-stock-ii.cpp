class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bs=0;
        int sell=0;
        int pr=0;
        int n=prices.size();
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
               pr+=prices[i+1]-prices[i];  
            }
        }
        return pr;
    }
};