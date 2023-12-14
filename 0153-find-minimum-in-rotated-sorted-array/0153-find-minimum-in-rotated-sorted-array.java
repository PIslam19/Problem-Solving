class Solution {
    public int max(int []ar)
    {
        int start=0,ans=0;
        int end=ar.length -1;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(ar[mid]>ar[start])
            {
               start=mid; 
            }
            else if(ar[mid]<ar[start])
            {
                end=mid;
            }
            else
            {
                return mid;
            }
        }
        return ans;
    }
    public int findMin(int[] nums) {
        int mid=max(nums);
        if(nums.length==1 || nums[0]<nums[nums.length-1])
        {
            return nums[0];
        }
        else
        {
            return nums[mid+1];
        }
    }
}