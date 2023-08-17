class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int t=nums.size(),cnt=0,c=0;
        for(int i=0;i<t;i++)
        {
            int n=nums[i];
           if((n>9 && n<100)||(n>999 && n<10000)||(n>99999 && n<1000000)||(n>9999999 && n<100000000)||(n>999999999 && n<10000000000))
           {
               cnt++;
           }
        }
        return cnt;
    }
};