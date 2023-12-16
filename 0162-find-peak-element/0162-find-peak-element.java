class Solution {
    public int findPeakElement(int[] nums) {
        int start=0;
        int end=nums.length-1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[mid+1])
            {
                 end=mid;
            }
            else
            {
               start=mid+1;
            }
        }
        return start;
    }
}
/*

[1,2,1,3,5,6,4]
 0,1,2,3,4,5,6
         s m e

*/