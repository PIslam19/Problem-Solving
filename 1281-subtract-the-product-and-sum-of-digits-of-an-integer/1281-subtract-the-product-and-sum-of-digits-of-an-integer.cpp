class Solution {
public:
    int subtractProductAndSum(int m) {
        string n=to_string(m);
        int a=n.size();
        int ans=1,ans1=0;
        for(int i=0;i<a;i++)
        {
            ans*=n[i]-'0';
            ans1+=n[i]-'0';
        }
        int s=ans-ans1;
        return s;
    }
    
};