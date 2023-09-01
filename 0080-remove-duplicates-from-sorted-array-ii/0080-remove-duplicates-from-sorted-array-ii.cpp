class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        for(auto u:nums)
        {
            if(cnt<2|| u>nums[cnt-2])
            {
                nums[cnt++]=u;
            }
        }
        return cnt;
    }
};