class Solution {
    public int missingNumber(int[] ar) {
        int n=ar.length;
      int i=0;
      while(i<n)
      {
        if(ar[i]<n && ar[i] !=i)
        {
           int temp=ar[i];
           ar[i] = ar[temp];
           ar[temp]=temp;
        }
        else
        {
          i++;
        }
      }
      for(int j=0;j<n;j++)
      {
        if(j!=ar[j])
        {
          return j;
        }
      }
        return n;
    }
}