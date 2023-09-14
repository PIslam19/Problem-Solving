class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=0,b=INT_MIN;
        for(auto u:nums)
        {
            a=max(u,a+u);
            b=max(b,a);
        }
        return b;
    }
};