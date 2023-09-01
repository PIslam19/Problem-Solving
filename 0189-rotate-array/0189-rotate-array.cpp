class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nv;
        k%=nums.size();
        
        for(int i=nums.size()-k;i<=nums.size()-1;i++)
        {
            nv.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-k;i++)
        {
            nv.push_back(nums[i]);
        }
        nums=nv;
        
    }
};