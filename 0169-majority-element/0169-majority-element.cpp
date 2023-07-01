class Solution {
public:
    int majorityElement(vector<int> & nums) {
        sort(nums.begin(),nums.end());
        int cnt=1,m=0,ml=nums[0];
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                cnt++;
                if(cnt>m)
                {
                    m=cnt;
                    ml=nums[i];
                }
            }
            else
            {
                cnt=1;
            }
        }
        return ml;
    }
};