class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int a=0,b=INT_MIN;
        for(auto u:nums)
        {
            a=max(u,a+u);
            b=max(b,a);
        }
        return b;
    }
};