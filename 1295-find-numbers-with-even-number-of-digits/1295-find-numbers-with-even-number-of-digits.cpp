class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),cnt=0,c=0;
        for(int i=0;i<n;i++)
        {
            c=0;
           while(nums[i]>0)
           {
               int temp=nums[i]%10;
               nums[i]=nums[i]/10;
               c++;
           }
            if(c%2==0)cnt++;
        }
        return cnt;
    }
};