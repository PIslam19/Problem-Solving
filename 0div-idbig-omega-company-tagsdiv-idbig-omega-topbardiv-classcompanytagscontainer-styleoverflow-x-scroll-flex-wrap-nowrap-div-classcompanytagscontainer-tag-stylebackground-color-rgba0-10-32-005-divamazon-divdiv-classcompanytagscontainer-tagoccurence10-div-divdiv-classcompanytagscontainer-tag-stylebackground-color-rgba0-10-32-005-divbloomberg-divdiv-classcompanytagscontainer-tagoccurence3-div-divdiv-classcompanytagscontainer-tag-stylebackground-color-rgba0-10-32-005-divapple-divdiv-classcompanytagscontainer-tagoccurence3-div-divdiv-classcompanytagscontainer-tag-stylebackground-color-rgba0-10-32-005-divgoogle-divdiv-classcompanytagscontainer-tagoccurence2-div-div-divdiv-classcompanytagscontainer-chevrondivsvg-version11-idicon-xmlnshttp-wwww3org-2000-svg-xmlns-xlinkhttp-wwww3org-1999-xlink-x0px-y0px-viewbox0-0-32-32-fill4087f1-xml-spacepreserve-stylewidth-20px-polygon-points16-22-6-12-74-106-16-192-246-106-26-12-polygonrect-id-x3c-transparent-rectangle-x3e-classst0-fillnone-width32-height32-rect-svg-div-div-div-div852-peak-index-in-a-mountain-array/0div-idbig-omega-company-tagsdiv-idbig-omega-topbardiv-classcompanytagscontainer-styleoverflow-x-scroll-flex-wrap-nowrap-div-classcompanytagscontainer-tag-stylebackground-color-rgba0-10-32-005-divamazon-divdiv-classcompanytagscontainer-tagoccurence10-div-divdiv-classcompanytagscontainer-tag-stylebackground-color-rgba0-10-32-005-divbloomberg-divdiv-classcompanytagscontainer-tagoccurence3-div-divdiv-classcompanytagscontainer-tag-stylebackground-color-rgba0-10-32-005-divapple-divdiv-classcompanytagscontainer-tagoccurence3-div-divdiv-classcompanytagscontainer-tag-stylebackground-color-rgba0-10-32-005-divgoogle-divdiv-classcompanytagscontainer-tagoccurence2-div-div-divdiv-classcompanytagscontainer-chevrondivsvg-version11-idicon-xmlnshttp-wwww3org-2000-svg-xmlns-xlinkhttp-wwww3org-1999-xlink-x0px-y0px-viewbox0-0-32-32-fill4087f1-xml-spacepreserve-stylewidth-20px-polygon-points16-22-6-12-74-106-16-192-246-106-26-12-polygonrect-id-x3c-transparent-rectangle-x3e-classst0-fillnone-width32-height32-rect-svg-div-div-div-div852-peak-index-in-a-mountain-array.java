class Solution {
    public int peakIndexInMountainArray(int[] arr) {
       int s=0;
        int h=arr.length -1;
        while(s<h)
        {
            int m=s+(h-s)/2;
            if(arr[m]>arr[m+1])
            {
                h=m;
            }
            else
            {
                s=m+1;
            }
        }
        return s;
    }
}