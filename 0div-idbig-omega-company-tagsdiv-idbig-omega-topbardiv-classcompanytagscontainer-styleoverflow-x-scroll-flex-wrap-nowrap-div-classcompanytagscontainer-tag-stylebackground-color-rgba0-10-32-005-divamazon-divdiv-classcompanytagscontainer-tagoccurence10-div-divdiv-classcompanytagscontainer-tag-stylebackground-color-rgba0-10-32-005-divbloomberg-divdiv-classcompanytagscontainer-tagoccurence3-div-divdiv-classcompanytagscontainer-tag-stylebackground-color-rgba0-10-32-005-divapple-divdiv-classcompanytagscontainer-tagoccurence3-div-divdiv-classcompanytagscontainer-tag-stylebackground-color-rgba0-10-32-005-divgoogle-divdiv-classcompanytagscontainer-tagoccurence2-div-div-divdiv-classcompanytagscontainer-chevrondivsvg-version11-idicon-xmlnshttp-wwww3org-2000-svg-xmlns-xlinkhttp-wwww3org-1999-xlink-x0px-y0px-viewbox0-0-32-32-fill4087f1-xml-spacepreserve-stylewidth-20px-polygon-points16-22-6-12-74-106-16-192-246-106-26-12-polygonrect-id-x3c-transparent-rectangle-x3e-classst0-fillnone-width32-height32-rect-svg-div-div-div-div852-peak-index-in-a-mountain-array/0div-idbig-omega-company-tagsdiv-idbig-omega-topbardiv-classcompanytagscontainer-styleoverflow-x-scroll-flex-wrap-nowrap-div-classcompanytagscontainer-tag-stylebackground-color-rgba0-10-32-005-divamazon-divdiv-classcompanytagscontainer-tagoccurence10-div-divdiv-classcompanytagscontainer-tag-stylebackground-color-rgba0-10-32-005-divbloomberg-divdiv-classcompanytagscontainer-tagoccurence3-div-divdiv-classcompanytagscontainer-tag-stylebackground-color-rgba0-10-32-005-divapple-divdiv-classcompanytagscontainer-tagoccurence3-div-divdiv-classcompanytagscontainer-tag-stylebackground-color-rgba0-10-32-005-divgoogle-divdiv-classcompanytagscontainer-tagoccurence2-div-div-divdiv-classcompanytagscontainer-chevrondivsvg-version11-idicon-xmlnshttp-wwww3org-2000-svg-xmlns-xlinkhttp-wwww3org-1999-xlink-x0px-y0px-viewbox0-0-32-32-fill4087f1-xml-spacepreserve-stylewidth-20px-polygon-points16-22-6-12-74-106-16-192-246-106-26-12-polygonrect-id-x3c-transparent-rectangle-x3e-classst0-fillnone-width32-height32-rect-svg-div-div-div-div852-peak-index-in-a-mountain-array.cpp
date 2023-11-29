class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int n=arr.size();
        int m=0,t;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
                t=i;
            }
            if(arr[i]<m)
            {
                break;
            }
        }
        return t; 
    }
};