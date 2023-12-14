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
        
        int st=0;
        int e=ss.size()-1;
        while(st<=e)
        {
            if(ss[st]==ss[e])
            {
                st++;
                e--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};