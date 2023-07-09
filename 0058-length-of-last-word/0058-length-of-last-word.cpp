class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int cnt=0;
        bool m=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(m==0)
                {
                    continue;
                }
               else
               {
                   break;
               }
            }
            else
            {
                cnt++;
                m=1;
                if(s[i]==' ')
                {
                    break;
                }
            }
        }
       return cnt;     
    }
};