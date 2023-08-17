class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),cnt=0,c=0;
        for (int num : nums) {
            int numDigits = floor(log10(num)) + 1;
            if(numDigits%2==0) ++cnt;
        }
        return cnt;
    }
};