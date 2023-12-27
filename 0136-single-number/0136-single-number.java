class Solution {
    public int singleNumber(int[] nums) {
       int r=0;
        int n=nums.length;
        for(int u:nums)
        {
            r=u^r;
        }
        return r;
    }
}