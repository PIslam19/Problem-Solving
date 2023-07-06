class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_ele=INT_MAX;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min_ele)
            {
                min_ele=prices[i];
            }
            a=prices[i]-min_ele;
            if(a>b)
            {
                b=a;
            }
        }
        
      return b;  
    }
};