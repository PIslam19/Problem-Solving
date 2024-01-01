class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer>ans=new HashSet<Integer>();
      for(int i=0;i<nums.length;i++)  {
          ans.add(nums[i]);
      }
        return nums.length != ans.size();
    }
}