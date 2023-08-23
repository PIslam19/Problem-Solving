class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      set<int> s;
        for(auto u: nums) s.insert(u);
        if(nums.size()==s.size())return false;
        else return true;
        
    }
};