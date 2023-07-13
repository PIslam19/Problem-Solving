class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(strs[i].size()<mi)
            {
                mi=strs[i].size();
            }
        }
        string mn="";
        for(int i=0;i<mi;i++)
        {
            char ch=strs[0][i];
            
            bool match=true;
            
            for(int j=1;j<n;j++)
            {
                if(strs[j].size()>i && ch!=strs[j][i])
                {
                    match=false;
                    break;
                }
            }
            if(match==false)break;
            else mn+=ch;
        }
       return mn; 
    }
};