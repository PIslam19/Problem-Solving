class Solution {
   
    public boolean search(int[] nums, int target) {
        int start=0;
        int end=nums.length-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            else if(nums[mid]<nums[start])
            {
                if (nums[mid]<target && nums[start]>target)
                {
                   start=mid+1; 
                }
                else
                {
                    end=mid;
                }
            }
            else if(nums[mid]>nums[start])
            {
                if (nums[mid]>target && nums[start]<=target)
                {
                   end=mid; 
                }
                else
                {
                    start=mid+1;
                }
            }
            else 
            {
                start++;
            }
        }
        return false;
    }
}