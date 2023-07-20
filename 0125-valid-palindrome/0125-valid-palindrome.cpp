class Solution {
public:
    bool isPalindrome(string s) {
       int n=s.size();
        string ss="";
        for(int i=0;i<n;i++)
        {
            if((int)s[i]>=65 && (int)s[i]<=90)
            {
                int tt=(int)s[i]+32;
                ss+=(char)tt;
            }
            else if((int)s[i]>=97 && (int)s[i]<=122)
            {
                ss+=s[i];
            }
            else if((int)s[i]>=48 && (int)s[i]<=57)
            {
                ss+=s[i];
            }
            else 
            {
                continue;
            }
        }
        
        string gg=ss;
        reverse(ss.begin(),ss.end());
        if(gg==ss)return true;
        else return false;
    }
};