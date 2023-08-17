class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),cnt=0,c=0;
        for(int i=0;i<n;i++)
        {
            c=0;
           while(nums[i]>0)
           {
               nums[i]=nums[i]/10;
               c++;
           }
            if(c&1)cnt++;
        }
        return n-cnt;
    }
};