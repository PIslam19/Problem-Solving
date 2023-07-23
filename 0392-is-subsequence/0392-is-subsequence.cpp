class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int ts=s.size(),j=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[j]==t[i])
            {
                cnt++;
                j++;
                if(cnt==ts)break;
            }
        }
       if(cnt==ts)
       {
           return true;
       }
        else
        {
            return false;
        }
    }
};