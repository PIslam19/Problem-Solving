class Solution {
     public void swap(int [] ar, int first, int last)
    {
        int temp=ar[first];
        ar[first]=ar[last];
        ar[last]=temp;
    }
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n=nums.length;
        int i=0;
        while(i<n)
        {
            int correct=nums[i]-1;
            if(nums[i]!=nums[correct])
            {
                swap(nums,i,correct);
            }
            else 
            {
                i++;
            }
        }
        List<Integer> ans = new ArrayList<Integer>();
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=j+1)
            {
                ans.add(j+1);
            }
        }
        return ans;
    }
   
}