class Solution {
    public int bs(int []ar,int tar,boolean iff)
    {
        int ans=-1;
        int start=0,end=ar.length-1;
        while(start<=end)
        {
            int mid =start +(end-start)/2;
            if(ar[mid]>tar)
            {
                end=mid-1;
            }
            else if(ar[mid]<tar)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                if(iff)
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
        int [] serch={-1,-1};
        serch[0]=bs(nums,target,true);
        serch[1]=bs(nums,target,false);
        return serch;
    }
}