class Solution {
    public int search(int []ar, int tar, boolean ffi)
    {
        int ans=-1;
        int start=0;
        int end=ar.length -1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(ar[mid]<tar)
            {
                start=mid+1;
            }
            else if(ar[mid]>tar)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                if(ffi)
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int []ans={-1,-1};
        int start= search(nums,target,true);
        int end=search (nums,target,false);
        ans[0]=start;
        ans[1]=end;
        return ans;
    }
}