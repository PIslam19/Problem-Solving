class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       vector<pair<int,char>>vp;
        string ss="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            vp.push_back(make_pair(indices[i],s[i]));
        }
        sort(vp.begin(),vp.end());
        for(auto u:vp)ss+=u.second;
        
        return ss;
    }
};