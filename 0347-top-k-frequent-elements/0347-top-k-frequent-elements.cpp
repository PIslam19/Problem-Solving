class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>vp;
        vector<int>vf;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int n=nums.size();
        if(n==1)
        {
            vf.push_back(nums[0]);
            return vf;
        }
        for(int i=0;i<n-1;i++)
        {
           
            if(nums[i]==nums[i+1] && n>=2)
            {
                cnt++;
            }
            else
            {
                vp.push_back(make_pair(cnt,nums[i]));
                cnt=1;
            }
             if(i==n-2)
            {
                vp.push_back(make_pair(cnt,nums[n-1]));
            }
            
        }
        sort(vp.rbegin(),vp.rend());
        
        for(int i=0;i<k;i++)
        {
            vf.push_back(vp[i].second);
        }
        return vf;
    }
};